#include<iostream>
#include<cmath>
using namespace std;

const long double Pi = 3.1415926535;

int main()
{
    //setlocale(LC_ALL, "Russian"); у меня в винде без этого кодировка не работает
    int n;
    long double a2, P, r;

    cout << "Вводите только положительные числа" << endl;
    cout << "Введите колличество углов: ";
    cin >> n;
    cout << "Введите радиус окружности (не обязательно целое): ";
    cin >> r;

    if (n > 0 and r > 0) {
        a2 = (Pi * 0.5 * (n - 2)) / n;
        P = n * 2 * r * (1 / tan(a2));
        cout << "Периметр: " << P << endl;
    }
    else {
        cout << "Введены недопустимые значения" << endl;
    }
}
