#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>w

void main() {
	const float pi = 3.14;

	setlocale(LC_ALL, "rus");

	int n = 1, x, y, z, m;

do {
	printf("n = ");
	scanf("%d", &n);

		if (n == 1) {
			printf("1.Объявить переменные, с помощью которых можно будет посчитать общую сумму покупки нескольких товаров. Например, плитки шоколада, кофе и пакеты молока.\n");

			printf("стоимость молока = ");
			scanf("%d", &x);
			printf("стоимость шоколада = ");
			scanf("%d", &y);
			printf("стоимость кофе = ");
			scanf("%d", &z);

			printf("sum = %d\n", x + y + z);
		}
		else if (n == 2) {
			printf("2.Объявить три переменные типа int и присвоить первой числовое значение, вторая переменная равна первой переменной, увеличенной на 3, а третья переменная равна сумме первых двух\n");

			printf("x = ");
			scanf("%d", &x);

			printf("y = %d\n", y = x * 3);
			printf("z = %d\n", z = x + y);
		}
		else if (n == 3) {
			printf("3.Объявить переменные, для подсчета общего количества предметов для сервировки стола. Например, чашки, такое же количество блюдец и ложек\n");

			printf("чашек = ");
			scanf("%d", &x);

			printf("общее кошл-во предметов для серверовки стола = %d\n", x * 3);
		}
		else if (n == 4) {
			printf("4.Депозитный калькулятор\n");

			//int sum, m;
			float res, sum, m;

			printf("сумму депозита = ");
			scanf("%f", &sum);

			printf("количество месяцев хранения денег = ");
			scanf("%f", &m);

			res = (sum * 0.05 / 365 * 30);

			printf("прибыль с депозита в месяц = %.2f\n", res);
			printf("прибыль с депозита за весь срок = %.2f\n", res = res*m);
			printf("общая сумма к выплате в конце срока = %.2f\n", sum + res);

		}
		else if (n == 5) {
			printf("5.Известны год и номер месяца рождения человека. Определить возраст человека.\n");

			printf("y = ");
			scanf("%d", &y);

			printf("m = ");
			scanf("%d", &m);

			z =   ((2018 - y) * 12  - m + 6)/12;

			printf("возвраст = %d лет(год)\n", z);


		}
		else if (n == 6) {
			printf("6.Даны два действительных числа, а и b. Получить их сумму, разность и произведение\n");

			int a, b;
			printf("a = ");
			scanf("%d", &a);

			printf("b = ");
			scanf("%d", &b);

			printf("s = %d\nr = %d\np = %d\n", a + b, a - b, a*b);
		}
		else if (n == 7) {
			printf("7.Даны два действительных положительных числа. Найти среднее арифметическое этих чисел\n");
		start:
			printf("x = ");
			scanf("%d", &x);

			printf("y = ");
			scanf("%d", &y);

			if (x >= 0 && y >= 0) {
				printf("среднее арифметическое = %.2f\n", (float)(x + y) / 2);
			}
			else goto start;
		}
		else if (n == 8) {
			printf("8.Даны катеты треугольника. Найти его гипотенузу и площадь.\n");
			
			int a, b;

			printf("a = ");
			scanf("%d", &a);

			printf("b = ");
			scanf("%d", &b);

			printf("гипотенуза = %.2f\nS = %.2f\n",  (float)sqrt(pow(a, 2) + pow(b, 2)),(float)(a+b)/2 );
		}
		else if (n == 9) {
			printf("9.Написать программу, предназначенную для расчета площади кольца по известному внутреннему r и внешнему R радиусам кольца. (S=п*(R2 – r2))\n");
			
			float r, R;

			printf("r = ");
			scanf("%f", &r);

			printf("R = ");
			scanf("%d", &R);

			printf("S = %.2f\n", (float)pi*(pow(R, 2) - pow(r, 2)));
		}
		else if (n == 10) {
			printf("10.Вывести на одной строке числа 1, 13 и 49 с одним пробелом между ними\n1 13 49\n");
		}
		else if (n == 11) {
			printf("11.Даны стороны прямоугольника a и b. Найти его площадь S = a•b и периметр P = 2•(a + b).\n");

			int a, b;

			printf("a = ");
			scanf("%d", &a);

			printf("b = ");
			scanf("%d", &b);

			printf("s = %d\np = %d\n", a*b, 2 * (a + b));
		}
		else if (n == 12) {
			printf("12.Дан диаметр окружности d. Найти ее длину L = ?•d. В качестве значения ? использовать 3.14.\n");

			float d;

			printf("d = ");
			scanf("%f", &d);

			printf("длина L = %.2f\n", pi*d);

		}
		else if (n == 13) {
			printf("13.Дана длина ребра куба a. Найти объем куба V = a3 и площадь его поверхности S = 6•a2.\n");

			int a;

			printf("a = ");
			scanf("%d", &a);

			printf("V = %.0f\nS = %.0f\n", (float)pow(a, 3), (float)6 * pow(a, 2));
		}
		else if (n == 14) {
			printf("14.Даны длины ребер a, b, c прямоугольного параллелепипеда. Найти его объем V = a•b•c и площадь поверхности S = 2•(a•b + b•c + a•c).\n");

			int a, b, c;

			printf("a = ");
			scanf("%d", &a);
			printf("b = ");
			scanf("%d", &b);
			printf("c = ");
			scanf("%d", &c);

			printf("v = %d\ns = %d\n", a*b*c, 2 * (a*b + b*c + a*c));
		}
		else if (n == 15) {
			printf("15.Найти длину окружности L и площадь круга S заданного радиуса R: L = 2•?•R, S = ?•R2\n");

			int r;

			printf("r = ");
			scanf("%d", &r);

			printf("L = %.2f\nS = %.2f\n", (float)2 * pi*r, (float)pi*pow(r, 2));
		}
	} while (n > 0);
} 

