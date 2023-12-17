#include<iostream>
using namespace std;

int main()
{
    
    double weight, height;// initialize the two floating point numbers
    double BMI; // this is the final output result
    cin>>weight>>height;//get the user input
    
    BMI = weight/(height*height);//do the calculation
  
    cout<<"Your BMI = "<<BMI<<endl;
    cout<<"BMI VALUES"<<endl;
    cout<<"Underweight: less than 18.5"<<endl;
    cout<<"Normal: between 18.5 and 24.9"<<endl;
    cout<<"Overweight: between 25 and 29.9"<<endl;
    cout<<"Obese: 30 or greater"<<endl;
    
    return 0;
}
