#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value n: ";
    cin>>n;
    
    switch(n){
        case 1: cout << "Monday"; //For n=1, it prints Monday
        break;
        case 2: cout << "Tuesday"; //For n=2, it prints Tuesday
        break;
        case 3: cout << "Wednesday"; //For n=3, it prints Wednesday
        break;
        case 4: cout << "Thursday"; //For n=4, it prints Thursday
        break;
        case 5: cout << "Friday"; //For n=5, it prints Friday
        break;
        case 6: cout << "Saturday"; //For n=6, it prints Saturday
        break;
        case 7: cout << "Sunday"; //For n=7, it prints Sunday
        break;
        default: //If none of the conditions is satisfied then this gets executed
        cout<<"Wrong input";
    }
    return 0;
}