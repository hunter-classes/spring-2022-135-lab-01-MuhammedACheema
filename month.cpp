//Muhammed Ali Cheema
//Tong Yi & Mike Zamansky
//CS135

#include <iostream>
using namespace std;

int main() {
    
    int year, month, common, leap; 
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;

    
    if (year % 4 != 0) {
        year = common;
    }
    else if (year % 100 != 0) {
        year = leap;
    }
    else if (year % 400 != 0) {
        year = common;
    }
    else {
        year = leap;
    }

    
    if (month == 1) { 
        cout << "31 days";
    }
    else if (month == 3) { 
        cout << "31 days";
    }
    else if (month == 5) { 
        cout << "31 days";
    }
    else if (month == 7) { 
        cout << "31 days";
    }
    else if (month == 8) { 
        cout << "31 days";
    }
    else if (month == 10) { 
        cout << "31 days";
    }
    else if (month == 12) { 
        cout << "31 days";
    }
    else if (month == 4) { 
        cout << "30 days";
    }
    else if (month == 6) { 
        cout << "30 days";
    }
    else if (month == 9) { 
        cout << "30 days";
    }
    else if (month == 11) { 
        cout << "30 days";
    }
    else if (month == 2 && year == common) {
        cout << "28 days";
    }
    else if (month == 2 && year == leap) {
        cout << "29 days";
    }

    return 0;
}