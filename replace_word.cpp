#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st1, word, rep_word;
    int pos, i=0, wl;
    bool d=false;
    cout << "Enter a string : ";
    getline(cin, st1);
    cout << "Enter the word you want to replace : ";
    cin >> word;
    wl = word.length();
    cout << "Enter the word you want to replace with : ";
    cin >> rep_word;
    while (i<st1.length())
    {
        pos = st1.find(word, i);
        if (pos!=-1)
        {
            if (st1[pos-1]==' ' && st1[pos+wl]==' ')
            {
                d = true;
                st1.replace(pos, wl, rep_word);
            }
            else if ((pos==0 && st1[pos+wl]==' ') || (st1[pos-1]==' ' && pos==(st1.length()-wl)))
            {
                d = true;
                st1.replace(pos, wl, rep_word);
            }
        }
        i++;
    }
    if (d)
    {
        cout << "\nThe updated string : " << st1 << "\n";
    }
    else
    {
        cout << "\nThe word '" << word << "' is not present.\n";
    }
    cout << "\nEnter any key to exit : ";
    cin >> st1;
}
