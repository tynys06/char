#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    char b;
    if (a >= 'A' && a <= 'Z')
    {
        a % 26;
        b = a + 32;
        cout << b;
    }
    else
    {
        a % 26;
        b = a - 32;
        cout << b;
    }

}

