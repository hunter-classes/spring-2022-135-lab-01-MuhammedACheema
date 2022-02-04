//Muhammed Ali Cheema
//Tong Yi & Mike Zamansky
//CS135

#include <iostream>
using namespace std; 

int main () {

    int num1, num2, num3;
    cout << "Enter the first number: "; 
    cin >> num1; 
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    if (num1 > num2 && num3 > num2) { 
        cout << "The smaller of the three is: " << num2;
    }
    else if (num2 > num1 && num3 > num1) {
        cout << "The smaller of the three is: " << num1;
    }
    else {
        cout << "The smaller of the three is: " << num3;
    }

    return 0;
}