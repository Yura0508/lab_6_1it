// lab_6_1_it.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

// Функція для генерації масиву
void Create(int* b, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++)
        b[i] = Low + rand() % (High - Low + 1);
}

// Функція для виведення масиву
void Print(const int* b, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << b[i];
    cout << endl;
}

// Функція для обчислення кількості елементів, які задовольняють критерію
int Count(int* b, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (!(b[i] % 2 != 0 && b[i] % 3 == 0)) {
            count++;
        }
        else {
            b[i] = 0; 
        }
    }
    return count;
}

// Функція для обчислення суми елементів, які задовольняють критерію
int Sum(int* b, const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (!(b[i] % 2 != 0 && b[i] % 3 == 0)) {
            sum += b[i];
        }
    }
    return sum;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr))); 
    const int size = 21;
    int b[size];
    const int Low = 10;
    const int High = 90;

    // Генерація масиву
    Create(b, size, Low, High);
    cout << "massif b:" << endl;
    Print(b, size);

    // Обчислення кількості та суми
    int count = Count(b, size);
    int sum = Sum(b, size);


    // Виведення результатів
    cout << "count: " << count << endl;
    cout << "sum: " << sum << endl;
    cout << "modified b:" << endl;
    Print(b, size);

    cin.get();
    return 0;
}