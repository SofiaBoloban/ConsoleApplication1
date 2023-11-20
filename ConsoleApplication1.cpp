// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main() {
    float yield_A = 36.0, yield_B = 40.0, yield_C = 44.0;
    float area_X, area_Y, area_Z;
    float harvest_X, harvest_Y, harvest_Z;
    float total_harvest;

    // Введіть врожайність кожного сорту пшениці
    std::cout << "Введіть врожайність сорту пшениці A (т/га): ";
    std::cin >> yield_A;
    std::cout << "Введіть врожайність сорту пшениці B (т/га): ";
    std::cin >> yield_B;
    std::cout << "Введіть врожайність сорту пшениці C (т/га): ";
    std::cin >> yield_C;

    // Введіть площу кожного поля
    std::cout << "Введіть площу поля X (га): ";
    std::cin >> area_X;
    std::cout << "Введіть площу поля Y (га): ";
    std::cin >> area_Y;
    std::cout << "Введіть площу поля Z (га): ";
    std::cin >> area_Z;

    // Обчислення врожаю з кожного поля
    harvest_X = yield_A * area_X;
    harvest_Y = yield_B * area_Y;
    harvest_Z = yield_C * area_Z;

    // Обчислення загального врожаю з трьох полів
    total_harvest = harvest_X + harvest_Y + harvest_Z;

    // Виведення результатів
    std::cout << "Врожай з поля X: " << harvest_X << " тонн пшениці\n";
    std::cout << "Врожай з поля Y: " << harvest_Y << " тонн пшениці\n";
    std::cout << "Врожай з поля Z: " << harvest_Z << " тонн пшениці\n";
    std::cout << "Загальний врожай з трьох полів: " << total_harvest << " тонн пшениці\n";

    return 0;
}
