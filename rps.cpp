/*
Outline:
1. Main menu
2. IPO
3. Logic (combinations)
4. Do you want to continue?
5. Pointing System

Concepts:
1. Nested if-else
2. Switch statements
3. While loop
4. Counters
5. Functions
    5.1 Parameters (Pass by Ref)
6. Trapping
*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main() {
    while (true) {
        cout<<"Welcome to Rock, Paper, Scissors!"<<endl;
        cout<<"[1] Play"<<endl;
        cout<<"[2] Exit"<<endl;

        char option;
        try {
            option = getch();
        }
        catch (...) {
            exit(1);
        }

        if (option == 1) {
            system("cls");
        }
        else if (option == 2) {
            exit(0);
        }
        else {
            exit(1);
        }
    }

}
