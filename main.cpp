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

    change = change - static_cast<int>(change); //get rid of dollar place
                                                //for coin calcs

    cout << "quarters " << static_cast<int>((change * 100 + 0.5) % 25)  <<endl;







    return 0;
}
