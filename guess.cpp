#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void guess(int low, int high);

int main(void) {
    int user;
    int lrange, hrange;

    cout << "Enter lower bound: ";
    cin >> lrange;
    cout << "Enter higher bound: ";
    cin >> hrange;

    cout << "If lower type lower. If higher type higher. If that's your number type number." << endl;
    guess(lrange, hrange);

    return 0;
}

void guess(int low, int high) {
    int mid = (low + high) / 2;
    string userin;
    string one = "lower";
    string two = "higher";
    string zero = "number";
    cout << "Is your number lower or higher than " << mid << "?" << endl;
    cin >> userin;

    if(userin.compare(zero) == 0) {
        cout << "Your number was " << mid << "." << endl; 
        cout << "Thanks for playing my game, have a great day!" << endl;
    }

    else if(userin.compare(one) == 0) {
        high = high / 2;
        guess(low, high);
    }

    else if(userin.compare(two) == 0) {
        low += mid;
        guess(low, high);
    }

    else {
        cout << "I didn't understand the input." << endl << "If lower type lower. If higher type higher. If that's your number type number." << endl;
        guess(low, high);
    }
}