﻿// c++Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

char* my_strncat(char* destination, const char* source, size_t num) {
    char* begin = destination;
    while (*destination)
        destination++;

    for (int i = 0; i < num; i++) {
        *destination++ = *source++;
    }

    *destination = '\0';
    return begin;
    
   
}

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    const int n = 5;
    int num;
    char destination[25] = "Hello world!";
    char source[] = "My name is Pavel Kublenko!";
    cout << "Введите количество добавляемых символов" << endl;
    cin >> num;
    my_strncat(destination, source, num);
    cout << destination;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
