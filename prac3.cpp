//C++ program to find the third angle of a triangle if two angles are given

#include <iostream>

using namespace std;

int main()
{
    float first_angle, second_angle, third_angle;

    cout<<"Enter first angle: ";

    cin>>first_angle;

    cout<<"Enter second angle: ";

    cin>>second_angle;

    third_angle=180-(first_angle+second_angle);


    if (third_angle > 180 || third_angle < 180)
        {
            cout<<"Invalid inputs: Bash khao";
        }

    else
        {
            cout<<endl<<"The third angle is: "<<third_angle<<endl;
        }


    return 0;
}
