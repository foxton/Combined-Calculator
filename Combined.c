#include <iostream>

using namespace std;

int main()
{
    int selection;
    float resistance, voltage, current;
    cout << "-----COMBINED CALCULATOR-----\n";
    cout << "A simple program for calculating voltage,\n";
    cout << "resistance and current in electric circuits.\n\n";
    do
    {
	cout << "--------MENU--------\n";
    cout << "1.Calculate Voltage\n";
	cout << "2.Calculate Resistance\n";
	cout << "3.Calculate Current\n";
	cout << "4.Exit\n";
	cout << "Selection:";
    cin >> selection;
    switch (selection)
    {
    case 1:
        cout << "\nEnter Resistance:";
        cin >> resistance;
        if (resistance < 0)
        {
            resistance = -resistance;
        }
        cout << "\nEnter Current:";
        cin >> current;
        if (current < 0)
	{
		current = -current;
	}
	voltage = resistance * current;
	cout << "Voltage =" << voltage;
	cout << "Volt\n";
	cout << "Press any key to return\n";
	break;

	case 2:
        cout << "\nEnter Voltage:";
        cin >> voltage;
        if (voltage < 0)
        {
            voltage = -voltage;
        }
        cout << "\nEnter Current:";
        cin >> current;
        if (current < 0)
	{
		current = -current;
	}
	resistance = voltage / current;
	cout << "Resistance =" << resistance;
	cout << "Ohm\n";
	cout << "Press any key to return\n";
	break;

    case 3:
cout << "\nEnter voltage: ";
    cin >> voltage;
	if (voltage <0)   // Check if voltage is negative
	{
	voltage = -voltage; //If voltage is negative, change it to positive
	}
    cout << "\nEnter Resistance:";
        cin >> resistance;
        if (resistance < 0)
        {
            resistance = -resistance;
        }

     current = voltage / resistance;  //Calculate the total current
     cout << "Current =" << current;
     cout << "Amp\n";
     cout << ("Press any key to return\n");
		break;

    case 4:
        cout << "Program shutting down";
        return 0;
        break;

    default:
        cout << "Invalid selection. Enter a new number.\n\n";

    }
}
while (selection != 4);
}
