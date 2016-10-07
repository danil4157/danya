#include <iostream>
#include <math.h>
// Программа для вывода длины самой короткой стороны четырехугольника в заданной системе координат
using namespace std;

double length (int x1, int y1, int x2, int y2);

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4; // координаты 4 точек соответственно
    double l1, l2, l3, l4; // длины сторон
    cout << "Введите координаты точек вышего четырёхугольника: \n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    l1 = length(x1, y1, x2, y2);
    l2 = length(x2, y2, x3, y3);
    l3 = length(x3, y3, x4, y4);
    l4 = length(x4, y4, x1, y1);

    double mas[4] = {l1, l2, l3, l4};
    int min = 0;
    for (int i = 0; i < 4; i++) {
        if (mas[i] < mas[min]) {
            mas[min] = mas[i];
        }
    }
    cout <<"Длина наименьшей стороны: " << mas[min] << endl;
    return 0;
}

double length (int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}