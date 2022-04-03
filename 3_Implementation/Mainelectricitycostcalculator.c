#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "MainElectricityBill.h"
#include "ElectricityBill.h"
void Urban();
void Rural();
void main()
{ 
	details();
	int option;
	do
	{
		printf("****Electricity Bill****\n");
		printf("Please choose from the following:\n");
		printf("1. Urban area\n");
		printf("2. Rural area\n");
		printf("3. EXIT \n");
		printf("Enter your choice :\n");
		scanf("%d", &option);
		system("cls");
		switch (option)
		{
		case 1:
			Urban();
			break;
		case 2:
			Rural();
			break;
		default:
			printf("INVALID!\n");
			
		}
		getch();
	} while (option != 3);
}