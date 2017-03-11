//C++ program to convert specified days into years, weeks and days.

#include <iostream>

using namespace std;

int main()

{
    int years, weeks, days, remaining_days;

    cout<<"Enter the number of days: "<<endl;

    cin>>days;

    years=days/365;

    weeks=(days%365)/7;

    remaining_days=days-((years*365)+(weeks*7));

    cout<<endl<<"Years: "<<years<<endl;

    cout<<"Weeks: "<<weeks<<endl;

    cout<<"Days: "<<remaining_days<<endl;


        return 0;
}
