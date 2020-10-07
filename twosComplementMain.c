/*
*A program that compares the bit string (along with zeroes)
*and prints the twos compliment
*
* @author		Carlos Hernandez
* Created on:	Feb 19,2020
* Source File: 	twosComplement.c
*
*@param binaryString an array of characters
*@return no value is returned
*/

#include <stdio.h>

void twosComplement(char binaryString[]);

int main(int argc, char *argv[]){
	int argNum = 0;

	for(argNum = 1; argNum < argc; argNum++){
		twosComplement(argv[argNum]);
		printf("%s", argv[argNum]); //prints the 2s complement of the inputed value
		printf("\n");
	}

	return 0;
}
				
				
