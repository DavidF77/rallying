#include <stdio.h>
#include <conio.h>

int main (void)
{
	int calf;
	
	printf ("Ingresa la calificacion: ");
	scanf ("%i",&calf);
	
	if (calf>=90 && calf<=100) {
		printf ("Excelente");
	} else if (calf>=80 && calf<=89) {
		printf ("Bueno");
	} else if (calf>=70 && calf<=79) {
		printf ("Regular");
	} else if (calf<70) {
		printf ("Reprobado");
	}
	return 0;
}
