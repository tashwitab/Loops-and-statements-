#include <iostream>
using namespace std;

int main()
 {
    float a,b;
    int n;
    cout<<"Enter two numbers of a,b: ";
    cin>>a>>b;
    cout<<"Enter the value n: ";
    cin>>n;
    
    switch(n){
        case 1: cout << "The sum of a and b is: " << a+b <<endl; //For n=1, it prints sum of two numbers
        break;
        case 2: cout << "The difference of a and b is: " << a-b<<endl; //For n=2, it prints the difference of two numbers
        break;
        case 3: cout << "The product of a and b is: " << a*b<<endl; //For n=3, it prints the product of two numbers
        break;
        case 4: cout << "The division of a and b is: " << a/b<<endl; //For n=4, it prints the division of two numbers
        break;
    }
 }
 s
    return 0;