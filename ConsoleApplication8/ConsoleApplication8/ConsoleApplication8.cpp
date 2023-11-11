using namespace std;
#include <iostream>
#include <iomanip>
#include "windows.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double y, Z, result_product;
    result_product = 1;
    cout << "y = ";
    cin >> y;
    if (y == -2)
    {
        cout << "Введене некоректне число!" << endl;
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            result_product = tan(i);
        }
        Z = cos(result_product); y / (y + 2);
        cout << "Z = " << Z << endl;
    }
    system("pause");
    return 0;
}