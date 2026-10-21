#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

void zadanie0() {
    int count;
    char c;
    printf("¬ведите количество символов и символ: ");
    scanf("%d %c", &count, &c);

    printf("+");
    for (int i = 0; i < count; i++) printf("%c", c);
    printf("+\n");

    for (int i = 0; i < count; i++) printf("%c", (i < count / 2) ? c : '*');
    printf("\n");

    for (int i = 0; i < count; i++) printf("%c!", c);
    printf("\n");
}

void zadanie1() {
    int n, m, s = 0;
    printf("¬ведите n и m: ");
    scanf("%d %d", &n, &m);
    for (int i = m; i >= n; i--) s += i;
    printf("%d\n", s);
}

void zadanie1A() {
    int n, m;
    printf("¬ведите степень n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) printf("2^%d = %d\n", i, 1 << i);
    printf("–езультат: %dK\n", (1 << n) / 1024);

    printf("¬ведите m: ");
    scanf("%d", &m);
    for (int i = 0; (1 << i) <= m; i++) printf("2^%d = %.1f\n", i, (double)(1 << i));
}

void zadanie2() {
    double a, b, h;
    printf("¬ведите начало, конец и шаг: ");
    scanf("%lf %lf %lf", &a, &b, &h);
    printf("   x   |  f(x) \n");
    for (double x = a; x <= b + 0.00001; x += h)
        printf(" %5.2lf | %5.2lf \n", x, pow(2.0, x) - 2.0 * x * x - 1.0);
}

int main() {
    setlocale(LC_ALL, "rus");
    zadanie0();
    zadanie1();
    zadanie1A();
    zadanie2();
    zadanie3();
    return 0;
}