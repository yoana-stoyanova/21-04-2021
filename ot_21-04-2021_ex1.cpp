#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); //seed random number generator
    int num = rand() % 100 + 1; // random number between 1 and 100
    cout << "Guess My Number Game\n\n"; // programata izvejda suotvetnoto suobshtenie

    int guess = 0; // deklarirana e pomenliva 'guess' sus stoinost '0'
    while (guess != num) { // tozi cikul shte spre da se povtarq, kogato 'guess' stane ravno na 'num'
        cout << "Enter a guess between 1 and 100 : "; // programata izvejda suotvetnoto suobshtenie
        cin >> guess; // potrebitelqt vuvejda svoeto predpolojenie

        if (guess > num) { // ako 'guess' e po-golqmo ot 'num', programata shte izvede suotvetnoto suobshtenie
            cout << "Too high!\n\n";
        }
        else if (guess < num) // ako 'guess' e po-malko ot 'num', programata shte izvede suotvetnoto suobshtenie
            {
                cout << "Too low!\n\n";
            }
        else { // ako 'guess' e ravno na 'num', programata shte izvede suotvetnoto suobshtenie
            cout << "\nCorrect! You got it in ";
        }
    }

    return 0; // programata priklyuchva
}
