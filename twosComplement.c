/*
*A program that reads the bit string 
*and converts to the twos compliment
*
*To compile: gcc -g -Wall twosComplement.c twosComplementMain.c -o twosComplementMain
*
* @author		Carlos Hernandez
* Course:		COMP B13
* Created on:	Feb 19,2020
* Source File: 	twosComplement.c
*/



void twosComplement (char binaryString[])
{
	int count = 0;
	int flag = 0;
	
	
	
	while(binaryString[count] != '\0')
	{
		count++;
	}
	
	while (count >= 0 && flag == 0) 
	{
		count--;
		if (binaryString[count]=='1')
		{
			flag = 1;
			binaryString[count] = '1';
		}
		else if (binaryString[count] != '1') 
		{
			binaryString[count] = '0';
		}
	}
	
while (count >= 0 && flag == 1)
{
	count--;
	if (binaryString[count] == '1')
	{
		binaryString[count] = '0'; // 2s complement conversion 
	}
	else if (binaryString[count] == '0')
	{
		binaryString[count] = '1'; // 2s complement conversion
	}
}
}


	