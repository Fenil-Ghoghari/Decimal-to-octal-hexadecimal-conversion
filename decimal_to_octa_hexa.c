#include<stdio.h>
#include <math.h>

int ConvertDecimaltoOctal(int decimal);
int ConvertDecimaltoHexaDecimal(int decimal);
int main()
{
	int decimal;
	printf("Enter the Number: ");
	scanf("%d",&decimal);
	printf("%d in Decimal = %d in Octa \n",decimal,ConvertDecimaltoOctal(decimal));
	printf("%d in decimal = %d in Hexadecimal \n",decimal,ConvertDecimaltoHexaDecimal(decimal));
	return 0;
	
}
int ConvertDecimaltoOctal(int decimal)
{
	int Octal=0, i=1;
	while(decimal != 0)
	{
		Octal += (decimal%8)*i;
		decimal /= 8;
		i*=10;
	}
	return Octal;
}
int ConvertDecimaltoHexaDecimal(int decimal)
{
	int hexa=0, i=1;
	while(decimal != 0)
	{
		hexa=(decimal%16)*i;
		decimal /= 16;
		i*=10;
	}
	return hexa;
}

