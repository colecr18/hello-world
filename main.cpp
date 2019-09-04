#include <iostream>
using namespace std;

int main() {
    int eqNum1;
    int eqNum2;
    int eqNum3;
    int eqNum4;
    int eqNum5;
    int eqNum6;
    int answerX;
    int answerY;
    int check = 2;


    cout << "Please enter 6 coefficients for 2 linear equations. "
            "For example: 8x + 7y = 38 and 3x - 5y = -1 " << endl;
    cin >> eqNum1;
    cin >> eqNum2;
    cin >> eqNum3;
    cin >> eqNum4;
    cin >> eqNum5;
    cin >> eqNum6;

    for (int x = -10; x <= 10; x++) {
        for (int y = -10; y <= 10; y++) {
            if ((eqNum1 * x + eqNum2 * y == eqNum3) && (eqNum4 * x + eqNum5 * y == eqNum6)) {
                answerY =y;
                answerX = x;
                check = 1;
                cout << "answerX = " << answerX << "  " << "answerY = " << answerY;
            }
        }
    }
    if (check == 2) {
        cout << "No Solution";
    }
    return 0;
}