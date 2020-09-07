#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //variable initialization
    float cost;
    float received;
    float change;

    cout << "Enter purchase amount: ";
    cin >> cost;
    cout <<endl;

    cout << "Enter amount received : ";
    cin >> received;
    cout <<endl;

    change = received - cost;

    cout << "Total Change: " << change <<endl;
    cout << "dollars " << static_cast<int>(change) <<endl;

    //Beginning of Coin Calcs
    change = (change - static_cast<int>(change)) * 100;//get rid of dollar place
                                                       //for coin calcs

    cout << "quarters " << static_cast<int>(change) / 25 <<endl;
    change = static_cast<int>(change) % 25;

    cout << "dimes " << static_cast<int>(change) / 10 <<endl;
    change = static_cast<int>(change) % 10;

    cout << "nickels " << static_cast<int>(change) / 5 <<endl;
    change = static_cast<int>(change) % 5;

    cout << "pennies " << static_cast<int>(change) / 1 <<endl;







    return 0;
}
