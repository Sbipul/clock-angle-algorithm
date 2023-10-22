#include<iostream>
#include <cstdlib>
#include<conio.h>
using namespace std;

float minute_angle(int m){
    return m*6;
}
float hour_angle(int h,int m){
    float result = h*30+0.5*m;
    return result;
}

int main(){
    // DECLARED VARIABLES FOR HOUR AND MINUTED
    int hour;
    int minute;

    // TAKING INPUT FROM USER AND STORING IN VARIABLES
    cout<<"Enter the hour"<<endl;
    cin>>hour;
    cout<<"Enter the minutes"<<endl;
    cin>>minute;

    // CALLING USER DEFINE FUNCTION
    float min_angle = minute_angle(minute);
    float hou_angle = hour_angle(hour,minute);

    // MAKING THE ABSOLUTE VALUE FOR FIRST ANGLE AND OTHER ONE
    float first_angle = abs(hou_angle-min_angle);
    float second_angle = 360 - first_angle;

    // SHOWING THE OUTPUT FOR USER'S TIME
    cout<<"The time you entered is "<<hour<<":"<<minute<<endl;
    cout<<"First angle "<<first_angle<<endl;
    cout<<"Second angle "<<second_angle<<endl;

    getch();
    return 0;
}
