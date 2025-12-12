#include <iostream>
using namespace std;

int main() {
    int n = -1 ; 
    int evenCount = 0;
    int oddCount = 0;

    while (n != 0) { 
        cout << "Enter an integer: ";
        cin >> n;

        if (n != 0) {  
            if (n % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
    }

    cout << "#Even numbers = " << evenCount << endl;
    cout << "#Odd numbers = " << oddCount << endl;

    return 0;
}
