#include <iostream>
using namespace std;

int main()
{
    // For Loop
    for (int i = 101; i <= 100; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
    // While Loop
    int i =1;
    while (i <= 100)
    {
        cout << i << " ";
        i++;
    }

    cout << "value of i : " << i;
    // Do while
    int j = 101;
    cout << "\n";
    do
    {
        cout << j << " ";
        j++;

    } while (j <= 100);
    return 0;
}