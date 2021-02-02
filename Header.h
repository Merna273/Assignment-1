//
//  Header.h
//  N queens
//
//  Created by Merna Abdelbadie on 02/02/2021.
//

#include <iostream>
using namespace std;

void display (char board[][8], int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << board[i][j] << "  ";
        }
        cout << endl;
    }
}

void tworem()
{
    char board[8][8];

        for (int i = 0; i < 8; i++)
    {
            for (int j = 0; j < 8; j++)
        {
            if (i == 0 && j == 0)
            {
                board[i][j] = 'Y';
            }
            else if (i == 2 && j == 1)
            {
                board[i][j] = 'Y';
            }
            else if (i == 4 && j == 2)
            {
                board[i][j] = 'Y';
            }
            else if (i == 6 && j == 3)
            {
                board[i][j] = 'Y';
            }
            else if (i == 3 && j == 4)
            {
                board[i][j] = 'Y';
            }
            else if (i == 1 && j == 5)
            {
                board[i][j] = 'Y';
            }
            else if (i == 7 && j == 6)
            {
                board[i][j] = 'Y';
            }
            else if (i == 5 && j == 7)
            {
                board[i][j] = 'Y';
            }
            else
            {
                board[i][j] = 'X';
            }
        }
    }
    display(board, 8);
}

