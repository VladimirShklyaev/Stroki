#include <string>
#include <iostream>
#include <sstream>
using namespace std;
int proverka(string vvod)//поиск наибольшей последовательности чисел в строке
{
    int l = 0;
    int maxlen = 0;
    for (int i = 0;i < vvod.length();i++)
    {
        if (vvod[i] >= '0' && vvod[i] <= '9')
        {
            l++;
        }
        else
        {
            l = 0;
        }
        if (l > maxlen)
        {
            maxlen = l;
        }
    }
    return maxlen;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    using namespace std;
    string vvod;
    cout << "Введите строку" << endl;
    cin >> vvod;
    cout<<"Максимальная длинна равна = " << proverka(vvod) << endl;
}
