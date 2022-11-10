#include <iostream>  
#include <cmath>  
#include <windows.h> 

using namespace std;
int Func_1(double a, double d, int n)
{
    return (a + (n - 1) * d);
}
double Sum(double a, double d, int n, int level, int& depth)
{
    if (level > depth)
        depth = level;
    cout << "Рівень рекурсії = " << level << endl;
    if (n > 0) {
        return a + Sum(a + d, d, n - 1, level + 1, depth);
    }
    return 0;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int depth = 0;

    int a;
    int d;
    int n;
    cout << "Ввести перший член арифметичної прогресії = "; cin >> a;
    cout << "Різниця прогресії = "; cin >> d;
    cout << "Номер члену прогресії, котрий слід знайти = "; cin >> n;
    cout << "--------------------------------------------------" << endl;
    cout << "Шуканий член = " << Func_1(a, d, n) << endl;
    cout << "Сума арифметичної прогресії = " << Sum(a, d, n, 1, depth) << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Глибина рекурсії = " << depth << endl;
    cout << "--------------------------------------------------" << endl;
    return 0;
}
