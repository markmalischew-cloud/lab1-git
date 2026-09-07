// Лабораторная работа № 1. Вариант 4.
// Выполнил: Малышев М. А., группа ПИ-52.
#include <iostream>

using namespace std;

// ===== Расчётные функции варианта =====

// Площадь треугольника со стороной a и высотой h
double triangleArea(double a, double h) {
    return a * h / 2;
}

// Периметр треугольника со сторонами a,b,c
double trianglePerimeter(double a, double b, double c) {
    return a+b+c;
}

// ===== Главная функция: меню =====
int main() {
    int choice;
    double a, b, c, h;

    do {
        cout << "\n=== Вариант 4: расчёты для треугольника ===\n";
        cout << "1. Площадь\n";
	cout << "2. Периметр\n";
	cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите сторону a и высоту h: ";
                cin >> a >> h;
                cout << "Площадь = " << triangleArea(a, h) << "\n";
                break;
	    case 2:
		cout << "Введите стороны a,b,c: ";
		cin >> a >> b >> c;
		cout << "Периметр = " << trianglePerimeter(a,b,c) << "\n";
		break;
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}
