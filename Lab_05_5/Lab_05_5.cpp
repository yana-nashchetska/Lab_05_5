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
    cout << "г���� ������ = " << level << endl;
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
    cout << "������ ������ ���� ����������� ������� = "; cin >> a;
    cout << "г����� ������� = "; cin >> d;
    cout << "����� ����� �������, ������ ��� ������ = "; cin >> n;
    cout << "--------------------------------------------------" << endl;
    cout << "������� ���� = " << Func_1(a, d, n) << endl;
    cout << "���� ����������� ������� = " << Sum(a, d, n, 1, depth) << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "������� ������ = " << depth << endl;
    cout << "--------------------------------------------------" << endl;
    return 0;
}
