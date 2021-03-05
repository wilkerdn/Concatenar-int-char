#include <stdio.h>
#include <string.h>

int main() {
	int dia;
	char mes[100], hoje[200];
	
	scanf("%d %s",&dia,mes); // dia (int)  mes (char*);
	sprintf(hoje, "%d de ", dia); // converte dia (int) para (char*) e salva em hoje
	
	strcat(hoje, mes); // concatena hoje e mes
	
	printf("%s\n",hoje);
	return 0;
}