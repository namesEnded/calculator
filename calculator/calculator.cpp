// calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
    int input;
    bool exitFlag = false;
    do {
        cout << "Choose an action: " << endl;
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
            cout << endl << "WORK IN PROGRESS\n";
            break;

        case 2:

            cout << endl << "WORK IN PROGRESS\n ";
            break;

        case 3:
            cout << endl << "WORK IN PROGRESS\n ";
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