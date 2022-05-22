//
// Created by Anshumali Karna on 22/05/22.
//

#ifndef AGO_PROJECT_TICTACTOE_H
#define AGO_PROJECT_TICTACTOE_H
#import <iostream>
#define COMPUTER 1
#define HUMAN 2

#define SIDE 3

#define COMPUTERMOVE 'O'
#define HUMANMOVE 'X'

void showBoard(char board[][SIDE]);
void showInstructions();
void initialise(char board[][SIDE]);
void declareWinner(int whoseTurn);
bool rowCrossed(char board[][SIDE]);
bool columnCrossed(char board[][SIDE]);
bool diagonalCrossed(char board[][SIDE]);
bool gameOver(char board[][SIDE]);
int minimax(char board[][SIDE], int depth, bool isAI);
int bestMove(char board[][SIDE], int moveIndex);
void playTicTacToe(int whoseTurn);



#endif //AGO_PROJECT_TICTACTOE_H
