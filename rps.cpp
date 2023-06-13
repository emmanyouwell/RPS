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
#include <windows.h>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	
	srand(static_cast<unsigned int>(time(0)));
    while (true) {
        cout<<"Welcome to Rock, Paper, Scissors!"<<endl;
        cout<<"[1] Play"<<endl;
        cout<<"[2] Exit"<<endl;

        int option;
        string winConditions[50][50] = {"Draw!", "Player Wins!", "Computer Wins!",
			"Computer Wins!", "Draw!", "Player Wins!",
			"Player Wins", "Computer Wins!", "Draw!"
		};
        
        cin>>option;
        
        if (cin.fail()) {
        	cout<<"No."<<endl;
        	exit(1);
		}

        if (option == 1) {
            system("cls");
            cout<<"Lets play rock, paper, scissors!"<<endl;
            cout<<"What do you want to pick?"<<endl;
            cout<<"[1] Rock"<<endl;
            cout<<"[2] Paper"<<endl;
			cout<<"[3] Scissors"<<endl;
			cin>>option;
			
			cout<<"You chose... ";
			
			sleep(3);
						
			if (option == 1) {
				cout<<"Rock!"<<endl;
			} 
			else if (option == 2) {
				cout<<"Paper!"<<endl;
			}
			else if (option == 3) {
				cout<<"Scissors!"<<endl;
			}
			else {
				cout<<"hell naw"<<endl;
				exit(0);
			}
			
			int playerchoice = option - 1;
			
			cout<<"I choose...";
			
			unsigned int aioption = (rand() % 3) + 1;
			
			sleep(3);
			
			if (aioption == 1) {
				cout<<"Rock!"<<endl;
			}
			else if (aioption == 2) {
				cout<<"Paper!"<<endl;
			}
			else if (aioption == 3) {
				cout<<"Scissors!"<<endl;
			}
			
			
			
			int aichoice = aioption - 1;
			
			if (option == 1) {
				cout<<"\t R"<<endl;
			}
			if (option == 2) {
				cout<<"\t P"<<endl;
			}
			if (option == 3) {
				cout<<"\t S"<<endl;
			}
			
			if (aioption == 1) {
				cout<<"\t R"<<endl;
			}
			else if (aioption == 2) {
				cout<<"\t P"<<endl;
			}
			else if (aioption == 3) {
				cout<<"\t S"<<endl;
			}
			
			sleep(2);
			
			system("cls");
			
			cout<<winConditions[playerchoice][aichoice]<<endl;
			
			sleep(5);
			
			system("cls");
			
			
				
        }
        else if (option == 2) {
        	break;
        }
        else {
        	cout<<"wut da hell"<<endl;
            exit(1);
        }
    }
    
	return 0;
}
