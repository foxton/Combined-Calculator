#include <stdio.h>
int main()
{
	int selection;
	float resistance, voltage, current;
	printf("-----COMBINED CALCULATOR-----\n");
	printf("A simple program for calculating voltage,\n");
	printf("resistance and current in electric circuits.\n\n");
	do
    {
	printf("--------MENU--------\n");
	printf("1.Calculate Voltage\n");
	printf("2.Calculate Resistance\n");
	printf("3.Calculate Current\n");
	printf("4.Exit\n");
	printf("Selection:");
	scanf("%d", &selection);
	switch (selection)
	{
	case 1:

		printf("\nEnter Resistance:");
    scanf("%f", &resistance);
	if (resistance < 0)
	{
		resistance = -resistance;
	}
	fflush(stdin);
	printf("Enter Current:");
    scanf("%f", &current);
	if (current < 0)
	{
		current = -current;
	}
    fflush(stdin);
    voltage = resistance * current;
    printf("Voltage = %.2f", voltage);
    printf("Volt\n");
    printf("Press any key to return\n");
	getchar();
		break;

	case 2:

		printf("\nEnter Voltage:");
	scanf("%f", &voltage);
	if(voltage < 0)
	{
	voltage = -voltage;
	}
	fflush(stdin);
	printf("Enter Current:");
	scanf("%f", &current);
	if (current < 0)
	{
	current = -current;
	}
	fflush(stdin);

	resistance = voltage / current;
	printf("Resistance = %.2f", resistance);
	printf("Ohm\n");
	printf("Press any key to return\n");
	getchar();
		break;
	case 3:

	printf("\nEnter voltage: ");
    scanf("%f", &voltage);
    fflush(stdin);
	if (voltage <0)   // Check if voltage is negative
	{
	voltage = -voltage; //If voltage is negative, change it to positive
	}
    printf("Enter resistance: ");
    scanf("%f", &resistance);
	if (resistance < 0)
	{
		resistance = -resistance; //If resistance is negative, change it to positive
	}
    fflush(stdin);
     current = voltage / resistance;  //Calculate the total current
     printf("Current = %.2f",current);
     printf("Amp\n");
     printf("Press any key to return\n");
	 getchar();
		break;

    case 4:
        printf("Program shutting down");
        return 0;
        break;

        default:
            printf("Unvalid option. Enter a new number: \n");
	}
} while (selection != 4);
}
