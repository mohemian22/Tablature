#include <iostream>
#include <stdio.h>

#define SCREEN_HEIGHT 25

#include "Board.h"
#include "Prints.h"
#include "Input.h"



/*********************************************
 Runs the main program
 *********************************************/


using namespace std;

int main()
{
    int i;
    Board Declare;
    Interface start;
    User_Input Testing;
    start.Directions();
    Declare.Print_Bass();
    Testing.Move_Cursor();





    for ( i = 0; i < SCREEN_HEIGHT; i++ )
    {
    cout<<'\n'<<endl;
    }



    start.Directions();
    Declare.Print_New_Bass();


    return 0;
}
