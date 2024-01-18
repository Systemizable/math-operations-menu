#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    do {
        cout<<"Main Menu"<<endl;
        cout<<"I. Calculate Power"<<endl;
        cout<<"II. Check Prime Number"<<endl;
        cout<<"III. Display Number Triangle"<<endl;
        cout<<"IV. Exit"<<endl;
        cout << "Enter Your Choice" << endl;

        cin>>choice;

        switch(choice) {
            case 1: {
                double base, exponent;
                cout << "Enter the base:" << endl;
                cin >> base;
                cout << "Enter the exponent" << endl;
                cin >> exponent;
                cout << base << " to the power of " << exponent << " is: " << pow(base, exponent) << endl;
                break;
            }
            case 2: {
                int n;
                cout << "Please enter a positive integer:" << endl;
                cin >> n;
                if (n < 0) {
                    cout << "Please enter positive integer:" << endl;
                } else {
                    if (n % 1 == 0 && n % n == 0) {
                        cout << n << " is a prime number" << endl;
                    } else {
                        cout << n << " is not a prime number" << endl;
                    }
                }
                break;
            }
            case 3: {
                int r;
                cout << "Enter the number of rows for the triangle:" << endl;
                cin >> r;
                int k=1;
                for (int i = 1; i<=r; i++) {
                    for (int j = 1; j <= i; j++) {
                        cout << k;
                        k++;
                    }
                    cout << endl;
                }
                break;
            }
            case 4: {
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            }
        }
    }while(choice!=4);
    return 0;
}
