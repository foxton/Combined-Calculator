#include <stdio.h>
int main()
{
	int selection;
	float resistance, voltage, current;
	printf("-COMBINED CALCULATOR-\n");
	printf("--------MENU--------\n");
	printf("1.Calculate Voltage\n");
	printf("2.Calculate Resistance\n");
	printf("3.Calculate Current\n");
	printf("Selection:");
	scanf("%d", &selection);
	switch (selection)
	{
	case 1:
		
		printf("Enter Resistance:");
    scanf("%d", &resistance);
	if (resistance < 0)
	{
		resistance = -resistance;
	}
	fflush(stdin);
	printf("Enter Current:");
    scanf("%d", &current);
	if (current < 0)
	{
		current = -current;
	}
    fflush(stdin);
    voltage = resistance * current;
    printf("Voltage = %d", voltage);
    printf("Volt\n");
	getchar();
		break;

	case 2:
		
		printf("Enter Voltage:");
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
	getchar();
		break;
	case 3:
	
	printf("Enter voltage: ");
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
	 getchar();
		break;
	default:
		printf("Error, shutting down");
		break;
getchar();
return 0;
	}
}