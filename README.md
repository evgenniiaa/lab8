## Домашнее задание к работе 8 (вар.5)
### Условие задачи
Вычислите для целого N (N<10), заданного пользователем, значение знакопеременного выражения
1.1 – 1.2 + 1.3 –...
### 1. Реализация программы
```
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

void zadanie3() {
    double a, sum = 0.0;
    int n, N;
    double result = 0.0;

    printf("Введите a и n: ");
    scanf("%lf %d", &a, &n);
    for (int i = 0; i <= n; i++) {
        sum += 1.0 / pow(a, a + i);
    }
    printf("Сумма ряда: %lf\n", sum);

    printf("Введите целое N (N < 10): ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) result += 1.0 + i / 10.0;
        else result -= 1.0 + i / 10.0;
    }
    printf("Значение выражения: %lf\n", result);
}

int main() {
    setlocale(LC_ALL, "rus");
    zadanie3();
    return 0;
}
```

### 2. Результат работы программы
```
Введите a и n: 4 5
Сумма ряда: 0,005207
Введите целое N (N < 10): 2
Значение выражения: -0,100000
```
### 3. Информация о разработчике
Федорова Евгения бИД-261
