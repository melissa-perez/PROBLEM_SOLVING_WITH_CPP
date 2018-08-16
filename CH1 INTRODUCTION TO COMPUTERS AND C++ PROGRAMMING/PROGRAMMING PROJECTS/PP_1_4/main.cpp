#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    double time=0.00; //in seconds
    const double acceleration = 32.0; //feet per second
    double distance=0.00;


    cout<<"Enter time in seconds: ";
    cin>>time;
    distance=(0.5)*acceleration*pow(time,2.00);

    cout<<"An object in freefall for "<< time <<" secs will go a distance of "<< distance
       <<" ft. \n";
    return 0;
}
