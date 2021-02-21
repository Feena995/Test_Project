#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main()
{
	system("chcp 1252");
	system("cls");
	
	int anzahlZahlen, obereGrenze, untereGrenze, zufallszahl;
	srand(time(NULL)); // initialisierung der rand-Funktion
	
	printf("\nAnzahl Zahlen eingeben: ");
	fflush(stdin);
	scanf("%d", &anzahlZahlen);
	
	printf("\nObere Grenze eingeben: ");
	fflush(stdin);
	scanf("%d", &obereGrenze);
	
	printf("\nUntere Grenze eingeben: ");
	fflush(stdin);
	scanf("%d", &untereGrenze);
	
	for(int i=0;i<anzahlZahlen;i++)
	{
		zufallszahl = rand()%(obereGrenze - untereGrenze)+untereGrenze;
		// diese Formel stimmt noch nicht
		printf("\nZufallszahl ist: %d", zufallszahl);
		
	}





	return 0;
}