#include <stdio.h>
#include <conio.h>

int main (void)
{
	int h, ph, ns;
	
	printf ("Ingresa las horas trabajadas: ");
	scanf ("%i",&h);
	printf ("Ingresa el precio por hora: ");
	scanf ("%i",&ph);
	
	if (h<=40) {
		ns=h*ph;
	} else {
		int hn=40;
		int he=h-hn;
		ns=(hn*ph)+(he*2*ph);
	}
	
	printf ("La nomina semanal es de %i", ns);
	
	return 0;
}
