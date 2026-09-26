#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, ".UTF-8");
	float a, b, h;
	float c, P, S;

	printf("Введите большое основание a:\n");
	scanf("%3f", &a);

	printf("Введите меньшее основание b:\n");
	scanf("%3f", &b);

	printf("Введите высоту h:\n");
	scanf("%3f", &h);

	c = sqrt(h * h + ((a - b) * (a - b)) / 4);

	P = a + b + 2 * c;

	S = (a + b) * h / 2;

	printf("Периметр трапеции: %.2f\n", P);
	printf("Площадь трапеции: %.2f\n", S);

	return 0;
}
