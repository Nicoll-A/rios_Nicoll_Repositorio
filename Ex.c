#include <stdio.h>

int main() {
	int dia;
	int mes;
	int any;
	printf("\nEscribe tu fecha de nacimiento de la siguiente manera 01 / 07 / 2003\n");
	scanf_s("%d", &dia);
	printf("/");
	scanf_s("%d", &mes);
	printf("/");
	scanf_s("%d", &any);

	if (any < 1000 || any>2026) {
		printf("La fecha no es valida");
	}
	else {
		printf("\n%d + %d + %d = %d ", dia, mes, any, dia + mes + any);
	}

}