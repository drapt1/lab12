#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double b, otv, up, low, a, q, w;    //тип данных и переменных
    a = 1000;                           // известные переменные
    b = 0.0001;
    q = 2;
    w = 3;
    up = pow((a - b), w) - pow(a, w);   // вычисление верхней части, pow - возведение в степень
    low = pow(b, w) - 3 * a * pow(b, q) - 3 * pow(a, q) * b;// вычисление нижней части
    otv = up / low;                     //вычисление ответа
    cout << otv << endl;                // вывод ответа
    return 0;
}
