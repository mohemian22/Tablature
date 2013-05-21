#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include "Input.h"


using namespace std;


/*******************************************************************************************
    Board Class

    Handles getting the basic staff lines printed
    out.

    Board()                    Sets up the arrays.
    Print_Bass()               Prints the starting Bass staff.

********************************************************************************************/




class Staff
{
private:
    char Bass_Array[5][20];
    //char Guitar_Array[7][20];
    //added number in columns for plam mute symbol.

public:



    Board()
    {
        int i;
        int j;
        for(i = 0; i < 4; i++)
        {
            for(j = 0; j < 20; j++)
            {
                Bass_Array[i][j] = '-';
            }

        }
    }

    void Print_Bass()
    {
        int i;
        int j;
        for(i = 0; i < 4; i++)
        {
            for(j = 0; j < 20; j++)
            {
                if((i == 0) && (j == 0))
                {
                    Bass_Array[i][j] = '&';
                }
                cout<<Bass_Array[i][j];
            }
            cout<<endl;

        }

    }

    void Print_New_Bass()
    {
        int i;
        int j;
        for(i = 0; i < 4; i++)
        {
            for(j = 0; j < 20; j++)
            {
                cout<<Bass_Array[i][j];
            }
            cout<<endl;
        }
    }

};

#endif
