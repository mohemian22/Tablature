#ifndef INPUT_H
#define INPUT_H
#include <iostream>

using namespace std;


class User_Input : public Staff
{

private:
    char Moving;
    char Changing;
    char Place_Holder;
    char Second_Place_Holder;
    int X_Value;
    int Y_Value;
    int counter;


public:
    void Move_Cursor()
    {
        int vert = 0;
        int down = 0;
        int left = 0;
        int right = 0;
        counter++;
        cout<<"ENTER"<<endl;
        cin>>Moving;

        if(Moving == 'w')
        {
            if((counter == 0) || (Y_Value == 0))
            {
                cout<<"NOPE!"<<endl;
                vert = 1;
            }
            else if(vert != 1)
            {
                Second_Place_Holder = Place_Holder;
                Place_Holder = Bass_Array[X_Value][Y_Value - 1];
                Bass_Array[X_Value][Y_Value - 1] = '&';
                Bass_Array[x_Value][Y_Value] = Second_Place_Holder;
            }


        }
        else if(Moving == 'a')
        {
            if((counter == 0) || (X_Value == 0))
            {
                cout<<"NOPE!"<<endl;
                left = 1;
            }
            else if(left != 1)
            {
                Second_Place_Holder = Place_Holder;
                Place_Holder = Bass_Array[X_Value - 1][Y_Value];
                Bass_Array[X_Value - 1][Y_Value] = '&';
                Bass_Array[x_Value][Y_Value] = Second_Place_Holder;
            }
        }
        else if(Moving == 's')
        {
            if(counter == 0)
            {
                Place_Holder = Bass_Array[X_Value][Y_Value + 1];
                Bass_Array[X_Value][Y_Value + 1] = '&';
                Bass_Array[X_Value][Y_Value] = '-';
                down = 1;
            }
            else if(Y_Value == 3)
            {
                cout<<"NOPE"<<endl;
                down = 1;
            }
            else if(down != 1)
            {
                Second_Place_Holder = Place_Holder;
                Place_Holder = Bass_Array[X_Value][Y_Value + 1];
                Bass_Array[X_Value][Y_Value + 1] = '&';
                Bass_Array[x_Value][Y_Value] = Second_Place_Holder;
            }
        }
        else if(Moving == 'd')
        {
            if(counter == 0)
            {
                Place_Holder = Bass_Array[X_Value + 1][Y_Value];
                Bass_Array[X_Value + 1][Y_Value] = '&';
                Bass_Array[X_Value][Y_Value] = '-';
                right = 1;
            }
            else if(X_Value == 19)
            {
                cout<<"NOPE!"<<endl;
                right = 1;

            }
            else if(right != 1)
            {
                Second_Place_Holder = Place_Holder;
                Place_Holder = Bass_Array[X_Value + 1][Y_Value];
                Bass_Array[X_Value + 1][Y_Value] = '&';
                Bass_Array[x_Value][Y_Value] = Second_Place_Holder;
            }
        }
    }


};




#endif
