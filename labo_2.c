#include <locale.h>
#include <stdio.h>

void task1() {
    setlocale(LC_ALL, "RUS");
    printf("1) 123\n");
    printf("2)\n1\n2\n3\n");
    printf("3)\n\t1\n\t\t2\n\t\t\t3\n");
    printf("4) %1d%5d%9d%13d\n", 1, 2, 3, 4);
    printf("5) %10.3f\n", 12.234657);
    printf("6) %10.5f\n", 12.234657);
    printf("7) Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
    printf("8) Деление %d на %d равно %d\n", 7, 5, 7 / 5);
    printf("9) Умножение %d на %d равно %d\n", 2000, 4, 2000 * 4);
    printf("10)\n");
    printf("%g разделить %e равно %f\n", 5., 2000000., 5. / 2000000);
    printf("%d разделить %d равно %d\n", 5., 2000000., 5. / 2000000);
    printf("%f разделить %f равно %f\n", 5., 2000000., 5. / 2000000);
    printf("%g разделить %e равно %g\n", 5., 2000000., 5. / 2000000);
    printf("\n");
}

void task2() {
    setlocale(LC_ALL, "RUS");
    int N = 14, K = 37;
    printf("1) Сейчас %d часов %d минут 00 секунд\n", N, K);
    printf("2) Идет %d минута суток\n", N * 60 + K);
    printf("3) До полуночи осталось %d часов и %d минут\n", 23 - N, 59 - K);
    printf("4) С 8.00 прошло %d секунд\n", (N - 8) * 3600 + K * 60);
    printf("5) Текущий час = %.2f суток и текущая минута = %.2f часа\n", N / 24.0, K / 60.0);
    printf("\n");
}

void task3() {
    setlocale(LC_ALL, "RUS");
    int n = 3;
    int L = 333;
    
    printf("Дано:\n");
    printf("%10d\n", n);
    printf("%10d\n", L);
    printf("\nОтвет:\n");
    printf("%-+10.3f\n", (float)n / L);
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "RUS");
    task1();
    task2();
    task3();
    return 0;
}