					/*		Simple Calculator By skm-049 	*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	printf("Welcome to Calculator\n");
	Calculator();
	return 0;
}
 int Calculator(){
 	int choice;
	float value1, value2;
	
	printf("\n\nMenu:\n\t1. Addition \n\t2. Subtraction \n\t3. Multiplication \n\t4. Division"
	" \n\t5. Reminder \n\t6. Power \n\t7. Square root \n\t8. Exit");
	printf("\n Enter your choice from menu: ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("Enter Operand1: ");
			scanf("%f", &value1);
			printf("Enter Operand2: ");
			scanf("%f", &value2);
			printf("Addition:  %.6g + %.6g = %.6g", value1, value2, (value1 + value2));
			
			break;
		case 2:
			printf("Enter Operand1: ");
			scanf("%f", &value1);
			printf("Enter Operand2: ");
			scanf("%f", &value2);
			printf("Subtraction: %.6g - %.6g = %.6g", value1, value2, (value1 - value2));
			
			break;
		case 3:
			printf("Enter Operand1: ");
			scanf("%f", &value1);
			printf("Enter Operand2: ");
			scanf("%f", &value2);
			printf("Multiplication: %.6g * %.6g = %.6g", value1, value2, (value1 * value2));
			
			break;
		case 4:
			printf("Enter Operand1: ");
			scanf("%f", &value1);
			printf("Enter Operand2: ");
			scanf("%f", &value2);
			printf("Division:  %.6g / %.6g = %.6g", value1, value2, (value1 / value2));
			
			break;
		case 5:
			printf("Enter Operand1: ");
			scanf("%f", &value1);
			printf("Enter Operand2: ");
			scanf("%f", &value2);
			printf("Reminder:  %.6g %% %.6g = %d", value1, value2, (int)((int)value1 % (int)value2));
			
			break;
		case 6:
			printf("Enter Base: ");
			scanf("%f", &value1);
			printf("Enter Exponent: ");
			scanf("%f", &value2);
			printf("Power:  %.6g ^ %.6g = %.6g", value1, value2, pow(value1, value2));
			
			break;
		case 7:
			printf("Enter value: ");
			scanf("%f", &value1);
			printf("Square root: %.6g", sqrt(value1));
			
			break;
			
		case 8:
			goto fail;
		default:
			printf("You entered wrong choice! Try Again...");
			
			
	}
	Calculator();
	fail:
		printf("exiting...");
	exit (0);
 }
