//==============================================
// Name:           Navdeep Virdi
// Student Number: 166485193
// Email:          nvirdi2@myseneca.ca
// Section:        NAA
// Date:           Nov 12th, 2020
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
// in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"
#include "contacts.h"


//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer
void clearKeyboard(void)
{
    while (getchar() != '\n'); 
}




// pause function definition goes here:
void pause(void)
{
    printf("(Press Enter to Continue)");
    clearKeyboard();
}




// getInt function definition goes here:
int getInt(void)
{
    int valid;
    char lookover = 'x';
    scanf("%d%c", &valid, &lookover);

    	while (lookover != '\n') 
		{
       		clearKeyboard();
        	printf("*** INVALID INTEGER *** <Please enter an integer>: ");
        	scanf("%d%c", &valid, &lookover);
    	}
    return valid;
}




// getIntInRange function definition goes here:
int getIntInRange(int min, int max)
{
    int getIntInRange = getInt();

    	while (getIntInRange < min || getIntInRange > max ) 
		{
        	printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
        	getIntInRange = getInt();
    	}
    return getIntInRange; 
}




// yes function definition goes here:
int yes(void)
{
	char valid = 'x';
	char lookover = 'x';
	int invalid = -1;


	scanf(" %c%c", &valid, &lookover);


	while (!((lookover == '\n') && ((valid == 'Y') || (valid == 'y') || (valid == 'n') || (valid== 'N'))))
	{
		clearKeyboard();
		printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		scanf(" %c%c", &valid, &lookover);
	}


	if ((valid == 'Y') || (valid == 'y')) 
	{
		invalid = 1;
	}
	else if ((valid == 'N') || (valid == 'n')) 
	{
		invalid = 0;
	}
	return invalid;
}




// menu function definition goes here:
int menu(void)
{
    int choice;

    printf("Contact Management System\n");
    printf("-------------------------\n");
    printf("1. Display contacts\n");
    printf("2. Add a contact\n");
    printf("3. Update a contact\n");
    printf("4. Delete a contact\n");
    printf("5. Search contacts by cell phone number\n");
    printf("6. Sort contacts by cell phone number\n");
    printf("0. Exit\n\n");
    printf("Select an option:> ");

    choice = getIntInRange(0, 6);
    return choice;
}




// contactManagerSystem function definition goes here:
void contactManagerSystem(void)
{
	int choice;
	int completed = 0;

	while (!completed)
	{
		choice = menu();
		printf("\n");
		switch (choice)
		{
			case 1:
				printf("<<< Feature 1 is unavailable >>>\n\n");
				pause();
				printf("\n");
				break;
			case 2:
				printf("<<< Feature 2 is unavailable >>>\n\n");
				pause();
				printf("\n");
				break;
			case 3:
				printf("<<< Feature 3 is unavailable >>>\n\n");
				pause();
				printf("\n");
				break;
			case 4:
				printf("<<< Feature 4 is unavailable >>>\n\n");
				pause();
				printf("\n");
				break;
			case 5:
				printf("<<< Feature 5 is unavailable >>>\n\n");
				pause();
				printf("\n");
				break;
			case 6:
				printf("<<< Feature 6 is unavailable >>>\n\n");
				pause();
				printf("\n");
				break;
			default:
		printf("Exit the program? (Y)es/(N)o: ");
			if (yes() == 1)
			{
				printf("\nContact Management System: terminated");
				completed = 1;
			}
			printf("\n");
		}
	}
}