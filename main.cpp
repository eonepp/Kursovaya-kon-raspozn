#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int state = 2;
    int alfabit[7][5] =
    {
      {0,0,0,0,0},//da
      {1,1,1,1,1},//net   
      {3,1,1,1,1},//ввод данных
      {3,4,1,1,1},// disk
      {1,1,5,1,1},//добавление   
      {6,1,1,1,1},//слеш
      {6,1,1,2,0},//буква имени
    };
    string s;
    cin >> s;
    for (int i =0;i<s.length();i++) 
    {
        char sym = s[i];

        int iSym = 0;
        if (isalpha(sym))
        {
            iSym = 0;
        }
        else if (sym == ':') iSym = 1;
        else if (sym == '\\') iSym = 2;
        else if (sym == ',') iSym = 3;
        else if (sym == ';') iSym = 4;
        state = alfabit[state][iSym];
    }
    if (state == 0)
        cout << "STRING is RIGHT";
    else
        cout << "STRING is WRONG";

	return 0;
}
