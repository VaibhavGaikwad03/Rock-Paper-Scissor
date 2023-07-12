#include <iostream>
#define ROCK 1
#define PAPER 2
#define SCISSOR 3
#define PLAYER1 1
#define PLAYER2 -1
#define EQUAL 0
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int rock_paper_scissor(int iPlayer1, int iPlayer2)
{
    if (iPlayer1 == ROCK)
    {
        if (iPlayer2 == SCISSOR)
            return PLAYER1;
        else if (iPlayer2 == PAPER)
            return PLAYER2;
        else
            return EQUAL;
    }
    else if (iPlayer1 == PAPER)
    {
        if (iPlayer2 == ROCK)
            return PLAYER1;
        else if (iPlayer2 == SCISSOR)
            return PLAYER2;
        else
            return EQUAL;
    }
    else
    {
        if (iPlayer2 == PAPER)
            return PLAYER1;
        else if (iPlayer2 == ROCK)
            return PLAYER2;
        else
            return EQUAL;
    }
}

int main(void)
{
    int iResult;
    int iChoice1;
    int iChoice2;
    string sName1;
    string sName2;

    cout << "Enter player 1 name :\n";
    getline(cin, sName1);

    cout << "Enter player 2 name :\n";
    getline(cin, sName2);

    system("cls");

    while (1)
    {
        cout << sName1 << ":\n";
        cout << "1. Rock\n2. Paper\n3. Scissor\n>_";
        cin >> iChoice1;

        if (iChoice1 < 1 || iChoice1 > 3)
            continue;
        break;
    }

    system("cls");

    while (1)
    {

        cout << sName2 << ":\n";
        cout << "1. Rock\n2. Paper\n3. Scissor\n>_";
        cin >> iChoice2;

        
        if (iChoice2 < 1 || iChoice2 > 3)
            continue;
        break;
    }

    iResult = rock_paper_scissor(iChoice1, iChoice2);

    if (iResult == PLAYER1)
        cout << endl
             << sName1 << " wins.\n";
    else if (iResult == PLAYER2)
        cout << endl
             << sName2 << " wins.\n";
    else
        cout << "\nEqual.\n";

    return 0;
}