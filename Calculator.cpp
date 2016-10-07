#include <iostream>
#include <math.h>

using namespace std;

double absolute (float a);                  // Функция вычисляющая абсолютное значение числа
double summary(float a, float b);           // Функция вычисляющая сумму двух чисел
double subtraction(float a, float b);       // Функция вычисляющая разность двух чисел
double multiplication(float a, float b);    // Функция вычисляющая произведение двух чисел
double division(float a, float b);          // Функция вычисляющая частное двух чисел
double involution(float a, int c);          // Функция вычисляющая возведение в степень
double square_root(float a);      // Функция вычисляющая квадратный корень числа

int main () {
    float a = 81;
    float b = 2.84;
    int c = 8;
    float d = -89;
    cout << "Сумма а и b = " << summary (a,b) << endl;
    cout << "Разность a и b = " << subtraction (a,b) << endl;
    cout << "Произведение a и b = " << multiplication (a,b) << endl;
    cout << "Частное a и b = " << division (a,b) << endl;
    cout << "a в степени с = " << involution (a,c) << endl;
    cout << "Квадратный корень из числа a = " << square_root (a) << endl;
    cout << "Абсолютное значение d = " << absolute (d) << endl;
}

double summary (float a, float b) {
    return a + b;
}

double subtraction (float a, float b) {
    return a - b;
}

double multiplication (float a, float b) {
    return a * b;
}

double division (float a, float b) {
    if (b != 0) {
        return a / b;
    }
    else {
        return 0;
    }
}

double involution (float a, int c) {
    double result = 0;
    result = a;
    if (c >= 1) {
        for (int i = 1; i < c; i++) {
            result *= a;
        }
        return result;
    }
    if (c == 0) {
        return 1;
    }
    if (c < -1) {
        return 1/a;
    }
}

double absolute (float a) {
    return (a >= 0) ? a : -a;
}
double square_root (float a)
{
    double x1 = 0 , x2;
    x2 = a;
    while (absolute(x1 - x2) > 0.00001) {
        x1 = x2;
        x2 = (x1 + a/x1)/2;
    }
    return x2;
}