#include <iostream>
#include <cmath>
#include <string>

using namespace std;


// #Course_4_Solution_50
// ATM PIN 3 Tines.


string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN code \n";
    cin >> PinCode;

    return PinCode;

}

bool Login()
{
    string PinCode;
    int Counter = 3;

    do
    {
        Counter--;
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            system("Color 4F");
            cout << "\n Worng PIN, You Have " << Counter << " More time" << endl;

        }
    } while (Counter>=1 && PinCode != "1234");

    return 0;

}


int main()
{
    if (Login())
    {
        system("Color 2F");
        cout << "\n Your Account balacnce is " << 7500 << '\n';
    }
    else
    {
        cout << "\n Your Card blocked call the bank for help. \n";
    }

    return 0;
}




