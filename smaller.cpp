//Muhammed Ali Cheema
//Tong Yi & Mike Zamansky
//CS135

#include <iostream>
using namespace std; 

int main () {

    int num1, num2; 
    cout << "Enter the first number: "; 
    cin >> num1; 
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) { 
        cout << "The smaller of the two is: " << num2;
    }
    else if (num2 > num1) {
        cout << "The smaller of the two is: " << num1;
    }

    return 0;
}