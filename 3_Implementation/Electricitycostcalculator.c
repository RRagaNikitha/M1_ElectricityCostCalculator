#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#include"MainElectricityBill.h"

void details()
{
    printf("Enter your surrounding/area name here:\n");
	scanf("%s", B.area);
	printf("Enter your full name:\n");
	scanf("%s", B.name);
	printf("Enter the meter Number:\n");
	scanf("%d", &B.meternumber);
    printf("Enter  the number of units consumed :\n");
	scanf("%d", &B.unitsconsumed);
    printf("Enter your email address(optional) :\n");
    scanf("%s", B.email);
    printf("Enter your permanent address/current address :\n");
    scanf("%s", B.address);
    printf("Enter your phone number(personal/house) : \n");
    scanf("%s", B.phonenumber);
}

void Urban()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=50 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 3.5;     }
    else if(B.unitsconsumed >= 51 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 4.5;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 6.5;
    }
    else
    {
        amount = B.unitsconsumed * 7.5;
    }

    printf("****Electricity Bill****\n\n");
    printf("Name : %s\n", B.name);
    printf("In Urban areas, your electricity bill is: %d\n", amount);
    printf("Units  consumed per month: %d\n", B.unitsconsumed);
    printf("****Thank you****\n\n");
}

void Rural()
{
    int amount=0;
    B.unitsconsumed;
    if(B.unitsconsumed <=50 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 2.5;
    }
    else if(B.unitsconsumed >= 51 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 3.5;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 4.5;
    }
    else
    {
        amount = B.unitsconsumed * 5.5;
    }
    printf("****Electricity Bill****\n\n");
    printf("Name : %s\n", B.name);
    printf("In rural, your electricity bill is: %d\n", amount);
    printf("Units  consumed per month: %d\n", B.unitsconsumed);
    printf("****Thank you****\n\n");
}