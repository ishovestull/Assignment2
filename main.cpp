#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    srand(333); //rand() seeding

    int hold;       //User given value to hold sum at
    int sim;        //User given simulation count
    int sum;          //Sum of rolls
    int roll;         //Random roll of the dice
    float outcome0;   //Count of dice roll of 1
    float outcome1;   //Count of sum = hold
    float outcome2;   //Count of sum = hold + 1
    float outcome3;   //Count of sum = hold + 2
    float outcome4;   //Count of sum = hold + 3
    float outcome5;   //Count of sum = hold + 4
    float outcome6;   //Count of sum = hold + 5

    //INPUT - User input of number to hold at
    cout << "What value should we hold at? ";
    cin >> hold;
    cout << endl;

    //INPUT - User inputs how many simulations they want to run
    cout << "Hold-at-N turn simulations? ";
    cin >> sim;
    cout << endl;

    //PROCESSING - Variable initialization so math doesn't break
    outcome0 = 0;
    outcome1 = 0;
    outcome2 = 0;
    outcome3 = 0;
    outcome4 = 0;
    outcome5 = 0;
    outcome6 = 0;
    sum = 0;


    /* FOR MATT AND KEVIN
     * -------------------------
     * Basically, I need to run 4 simulations.
     *
     * The nested loop you see is what determines the outcome of each simulation
     *
     * Simulation is terminated when the sum of random rolls (representing
     * a 6 sided dice) equals the input value given above OR the d6 rolls a 1
     *
     * I would also like to say srand and rand suck, and i feckin hate em.
     *
     * Save me friends.
     */


    //PROCESSING - Count of each simulation
    for (int i = 0; i < sim; i++){

        //PROCESSING - 1 through n (n being sim)
        for (sum = 0; sum >= hold || sum != 0;){
            roll = rand() % 6;
            sum = sum + roll;

            if (roll == 0){
               outcome0++;
            }
            else if (sum == hold){
                outcome1 = outcome1 + 1;
            }
            else if (sum == hold + 1){
                outcome2 = outcome2 + 1;
            }
            else if (sum == hold + 2){
                outcome3 = outcome3 + 1;
            }
            else if (sum == hold + 3){
                outcome4 = outcome4 + 1;
            }
            else if (sum == hold + 4){
                outcome5 = outcome5 + 1;
            }
            else if (sum == hold + 5){
                outcome6 = outcome6 + 1;
            }

        }

    };


    //OUTPUT - sum and probability table
    cout << "sum\tEstimated Probability\n";
    cout << "0\t" << fixed << setprecision(6) << outcome0 / sim << endl;
    cout << hold << "\t" << setprecision(6) << outcome1 / sim << endl;
    cout << hold + 1 << "\t" << setprecision(6) << outcome2 / sim << endl;
    cout << hold + 2 << "\t" << setprecision(6) << outcome3 / sim << endl;
    cout << hold + 3 << "\t" << setprecision(6) << outcome4 / sim << endl;
    cout << hold + 4 << "\t" << setprecision(6) << outcome5 / sim << endl;
    cout << hold + 5 << "\t" << setprecision(6) << outcome6 / sim << endl;
}
