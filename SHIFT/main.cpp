﻿//SHIFT 
#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
    setlocale(LC_ALL, "");
    const int n = 10;
    int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    //Вывод исходного массива на экран
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << tab;
    }
    cout << endl;
    //Циклический сдвиг массива
    int namber_of_shifts;
    cout << "Введите количество сдвигов: "; cin >> namber_of_shifts;
    for (int i = 0; i < namber_of_shifts; i++)
    {
        int buffer = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = buffer;
    }
    //Вывод сдвинутого массива на экран
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << tab;
    }
    cout << endl;

}