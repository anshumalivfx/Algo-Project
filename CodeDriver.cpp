//
// Created by Anshumali Karna on 22/05/22.
//

#import "CodeDriver.h"
#import "TicTacToe.h"
string player;
void DriverCode (){
  cout<<"\t\t\t\t\t\t\t\tWELCOME TO TIC-TAC-TOE GAME "<<endl;
  cout<<"\n\t\t\t------------------------------------------------------------------------\n\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t Tic-Tac-Toe\n";
  cout<<"\n\t\t\t------------------------------------------------------------------------\n\n";

  char cont='y';

  do {
    char choice;

    cout<<"Let's Begin !! "<<endl<<endl;
    cout<<"Enter y : (YES) If you want to make First move\n";
    cout<<"Enter n : (NO) If you want Computer to make a move first\n";

    cout<<endl<<" Choice : ";
    cin>>choice;

    cout<<endl<<"Enter your Name : ";
    cin>>player;
    if(choice=='n')
      playTicTacToe(COMPUTER);

    else if(choice=='y')
      playTicTacToe(HUMAN);

    else
      cout<<" Invalid choice! \n";

    cout<<"\nDo you want to quit(y/n) : ";
    cin>>cont;
  } while(cont=='n');

  if(cont == 'y')
  {
    cout<<endl<<"\t\t\t !!Thankyou for playing "<<player<<"!! "<<endl;
  }
}
