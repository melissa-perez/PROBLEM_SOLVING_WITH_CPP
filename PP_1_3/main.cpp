#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int number_of_quarters=0;
    int number_of_dimes=0;
    int number_of_nickles=0;
    int total_cents=0;

    cout<<"Enter the number of quarter(s): ";
    cin>>number_of_quarters;
    cout<<"\nEnter the number of dime(s): ";
    cin>>number_of_dimes;
    cout<<"\nEnter the number of nickle(s): ";
    cin>>number_of_nickles;
    total_cents=number_of_dimes*10+number_of_nickles*5+number_of_quarters*25;
    cout<<endl<<"You have "<<total_cents<<" cents.\n";
    return 0;
}
