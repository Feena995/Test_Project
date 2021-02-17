#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double addition(double x, double y)
{
	return(x+y);
}

double subtraktion(double x, double y)
{
	return(x-y);
}

double multiplikation(double x, double y)
{
	return(x*y);
}

double division(double x, double y)
{
	return(x/y);
}

double (*fptr[4])(double d1, double d2) = {
	addition, subtraktion, multiplikation, division
};


int main()
{
	system("chcp 1252");
	system("cls");
	
	double v1=0.0, v2=0.0;
	int operator=-1;
	printf("Zahl1: ");
	fflush(stdin);
	scanf("%d", &v1);
	
	printf("Zahl2: ");
	fflush(stdin);
	scanf("%d", &v2);
	
	
	printf("Welcher Operator soll es werden?\n");
	printf("0 = +\n1 = -\n2 = *\n3 = /\n");
	printf("Ihre Auswahl: ");
	fflush(stdin);
	scanf("%d", &operator);
	
	if(! (operator >= 0 && operator <=3))
	{
		printf("Fehler bei der Eingabe");
	}
	
	printf("Ergebnis: %lf\n", fptr[operator](v1,v2));

	return 0;
}