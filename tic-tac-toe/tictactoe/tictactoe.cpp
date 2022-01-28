// tictactoe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int wincheck();
void board(bool e);
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int main()
{
    int player = 1,i, choice;
    char mark = 'X';
    bool e = false;
    do {
        board(e);
        if (player % 2 == 1) // 5,3,1 will equal 1, 2 % 2 is 0, so skip.
            player = 1;
        else player = 2;
        cout << "Player " << player << ", please enter a value: \n";
        std::cin >> choice;
        
        if (player == 1) {
            mark = 'X';
        }
        else mark = 'O';
        player++; //player will = 3 at some point, but that's ok since 3 % 2 = 1; (line 15)

        if (choice == 1 && square[1] == '1')
            square[1] = mark, e = false;
        else if (choice == 2 && square[2] == '2')
            square[2] = mark, e = false;
        else if (choice == 3 && square[3] == '3')
            square[3] = mark, e = false;
        else if (choice == 4 && square[4] == '4')
            square[4] = mark, e = false;
        else if (choice == 5 && square[5] == '5')
            square[5] = mark, e = false;
        else if (choice == 6 && square[6] == '6')
            square[6] = mark, e = false;
        else if (choice == 7 && square[7] == '7')
            square[7] = mark, e = false;
        else if (choice == 8 && square[8] == '8')
            square[8] = mark, e = false;
        else if (choice == 9 && square[9] == '9')
            square[9] = mark, e = false;
        else
        {
            player--;
            e = true;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        i = wincheck();
        
    } while (i == -1);

    board(e);
    if (i==1)
    {
        cout << ">>>Player " << --player << " wins!<<<";
    }
    else
        cout << ">>>Game is a draw<<<";
    std::cin.clear();
    std::cin.ignore();
    std::cin.get();
    return 0;
}
int wincheck()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    if (square[4] == square[5] && square[5] == square[6])
        return 1;
    if (square[7] == square[8] && square[8] == square[9])
        return 1;
    if (square[1] == square[4] && square[4] == square[7])
        return 1;
    if (square[2] == square[5] && square[5] == square[8])
        return 1;
    if (square[3] == square[6] && square[6] == square[9])
        return 1;
    if (square[1] == square[5] && square[5] == square[9])
        return 1;
    if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' &&
            square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' &&
            square[9] != '9')
        return 0;
    else
        return -1;
}
void board(bool e)
{
    system("cls");
    cout << "\n\n\tTicTacToe\n\n";
    cout << "\n\nPlayer 1='X' | Player 2='O'\n\n";
    cout << "       |       |       " << endl;
    cout << "   " << square[1] << "   |   " << square[2] << "   |   " << square[3] << endl;
    cout << "       |       |       " << endl;
    cout << "-------|-------|-------" << endl;
    cout << "       |       |       " << endl;
    cout << "   " << square[4] << "   |   " << square[5] << "   |   " << square[6] << endl;
    cout << "       |       |       " << endl;
    cout << "-------|-------|-------" << endl;
    cout << "       |       |       " << endl;
    cout << "   " << square[7] << "   |   " << square[8] << "   |   " << square[9] << endl;
    cout << "       |       |       " << endl;
    if (e == true) {
        cout << "Invalid number. ";
    }
}   
