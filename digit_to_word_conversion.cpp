#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a four-digit number: ";
    cin >> number;

    int lastdig =number % 10;
    number = number / 10;
    int seclastdig = number % 10;
    number = number / 10;
    int thirdlastdig = number % 10;
    number = number / 10;
    int forthlastdig =number % 10;

    switch (forthlastdig) 
    {
    case 0: cout << "zero "; break;
    case 1: cout << "one "; break;
    case 2: cout << "two "; break;
    case 3: cout << "three "; break;
    case 4: cout << "four "; break;
    case 5: cout << "five "; break;
    case 6: cout << "six "; break;
    case 7: cout << "seven "; break;
    case 8: cout << "eight "; break;
    case 9: cout << "nine "; break;
    }

    switch (thirdlastdig) 
    {
    case 0: cout << "zero "; break;
    case 1: cout << "one "; break;
    case 2: cout << "two "; break;
    case 3: cout << "three "; break;
    case 4: cout << "four "; break;
    case 5: cout << "five "; break;
    case 6: cout << "six "; break;
    case 7: cout << "seven "; break;
    case 8: cout << "eight "; break;
    case 9: cout << "nine "; break;
    }

    switch (seclastdig)
    {
    case 0: cout << "zero "; break;
    case 1: cout << "one "; break;
    case 2: cout << "two "; break;
    case 3: cout << "three "; break;
    case 4: cout << "four "; break;
    case 5: cout << "five "; break;
    case 6: cout << "six "; break;
    case 7: cout << "seven "; break;
    case 8: cout << "eight "; break;
    case 9: cout << "nine "; break;
    }

    switch (lastdig) 
    {
    case 0: cout << "zero "; break;
    case 1: cout << "one "; break;
    case 2: cout << "two "; break;
    case 3: cout << "three "; break;
    case 4: cout << "four "; break;
    case 5: cout << "five "; break;
    case 6: cout << "six "; break;
    case 7: cout << "seven "; break;
    case 8: cout << "eight "; break;
    case 9: cout << "nine "; break;
    }

    
    cout << endl;

    return 0;
}
