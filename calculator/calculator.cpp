// calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "funcs.h"
#include <iostream>

using namespace std;

int main()
{
    int input;
    bool exitFlag = false;
    do {
        double a = 0.0, b = 0.0, sum = 0.0;
        double sub = 0.0;
        double mul = 0.0;
        cout << "Enter A: ";
        cin >> a;
        cout << "\nEnter B: ";
        cin >> b;

        cout << "\nChoose an action: " << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << "\n\n";
        cout << "Enter the operation number: ";
        cin >> input;

        switch (input)
        {
        case 1:
            sum = Sum(a, b);
            cout << endl << "A + B = " << sum << endl;
            break;

        case 2:
            sub = Sub(a, b);
            cout << endl << "A - B = " << sub << endl;
            break;

        case 3:
            mul = Mul(a, b);
            cout << endl << "A * B = " << mul << endl;
            break;

        case 4:
            cout << endl << "WORK IN PROGRESS\n";
            break;

        case 5:
            exitFlag = true;
            break;


        default:
            std::cout << "Unknown operation!\n ";
            break;
        }

        system("pause");
        system("CLS");

    } while (exitFlag == false);
    return 0;
}