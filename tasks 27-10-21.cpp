#include <iostream>
using namespace std;

int main() {
    //task 6
    /*
    int number, power;
    cin >> number >> power;
    int result = 1;

    for (int i = 0; i < power; i++) {
        result *= number;
    }
    cout << result;
    */

    //task 7
    /*
    int number;
    cin >> number;
    bool isPrime = 1;
    if (number > 1) {
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                isPrime = 0;
            }
        }

        if (isPrime) {
            cout << "YES";
        }
        else cout << "NO";
    }
    else
        cout << "The numbers under 2 can't be prime or not";
    */

    //task 8
    /*
    for (char letter = 'A'; letter <= 'Z'; letter++) {
        switch (letter) {
        case 'A':case 'E': case 'I': case 'O': case 'U': continue;
        }
        cout << letter << '\n';
    }
    */

    //task 9
    /*
    int number;
    cin >> number;
    int countMinus = 0, countPlus = number - 2;

    cout << '0';
    for (int i = 0; i < number - 1; i++)
        cout << '+';
    cout << endl;

    for (int i = 0; i < number - 2; i++) {
        cout << '-';
        for (int j = 0; j < countMinus; j++)
            cout << '-';
        cout << '0';
        for (int k = 0; k < countPlus; k++)
            cout << '+';
        cout << endl;
        countMinus++;
        countPlus--;
    }

    for (int i = 0; i < number - 1; i++)
        cout << '-';
    cout << '0' << endl;
    */

    return 0;
}
