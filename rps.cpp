#include <iostream>
#include <random>
#include <time.h>
#include <string>
using namespace std;
class game
{
public:
    int compscore = 0;
    int userscore = 0;
    string computerchoice;
    string userchoice;
    void set()
    {
        string options[] = {"rock", "paper", "scissor"};
        default_random_engine gen(time(0));
        // First choice generate
        int random1 = gen() % 3;
        cout << "Enter user choice" << endl;
        cin >> userchoice;
        cout << "user choice is:" << userchoice << endl;
        computerchoice = options[random1];
        cout << "computer choice 1: " << computerchoice << endl;
    }
    void result()
    {
        if (computerchoice == userchoice)
        {
            cout << "Draw!" << endl;
        }
        else if (
            (userchoice == "rock" && computerchoice == "scissor") ||
            (userchoice == "paper" && computerchoice == "rock") ||
            (userchoice == "scissor" && computerchoice == "paper"))
        {
            cout << "User Wins!" << endl;
            userscore++; // user ka score +1
        }
        else if (userchoice != "rock" &&
                 userchoice != "paper" &&
                 userchoice != "scissor")
        {
            cout << "Invalid choice" << endl;
        }

        else
        {
            cout << "Computer Wins!" << endl;
            compscore++; // computer ka score +1
        }

        cout << "User Score: " << userscore << endl;
        cout << "Computer Score: " << compscore << endl;
    }
    void finalscore()
    {
        if (userscore > compscore)
        {
            cout << "user win the game" << endl;
        }
        else if (userscore == compscore)
        {
            cout << "match tie" << endl;
        }

        else
        {
            cout << "computer win the game" << endl;
        }
    }
};

