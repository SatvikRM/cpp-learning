//building all arithmetic operators program..
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;
    int sum=a+b;
    int difference=a-b;
    int product=a*b;
    int modulo=a%b;
    int division=a/b;
    cout<<"The arithemtic operations on a & b are as follows:-"<<endl;
    cout<<"sum= "<<sum<<endl;
    cout<<"difference= "<<difference<<endl;
    cout<<"product= "<<product<<endl;
    cout<<"division="<<division<<endl;
    cout<<"modulo= "<<modulo<<endl;
    return 0;
}