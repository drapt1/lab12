#include <iostream>
#include <cmath>


using namespace std;
int main()
{
    //тип данных и переменных
    double b, otv, up, low, a, q, w;
    // известные переменные
    a = 1000;
    b = 0.0001;
    q = 2;
    w = 3;
    // вычисление верхней части, pow - возведение в степень
    up = pow((a - b), w) - pow(a, w);
    // вычисление нижней части
    low = pow(b, w) - 3 * a * pow(b, q) - 3 * pow(a, q) * b;
    //вычисление ответа
    otv = up / low;
    // вывод ответа
    cout << otv << endl;
    return 0;
}