/*This program reads two integers from the user and prints the sum*/
#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int sum;

    cout<<"Please enter two numbers separeted by a space"<<endl;
    cin>>num1>>num2;

    sum = num1 + num2;

    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;

    return 0;
}