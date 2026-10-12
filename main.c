#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int N, K, ost, L, n, m, k;
float sum;

void zad1();
void zad2();
void zad3();

int main()
{
    setlocale(LC_CTYPE, "RUS");

    /* zad1(); */
    /* zad2(); */
    zad3();

    return 0;
}

void zad1()
{
    /* Вывод ступенькой */
    printf("1\n 2\n  3\n");

    /* Вывод пяти знаков после запятой */
    printf("%10.5f\n", 12.234657);

    /* Остаток от деления */
    printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);

    /* Целочисленное деление */
    printf("Пункт 8:\n");
    printf("При делении %d на %d получается %d\n", 7, 5, 7 / 5);

    /* Умножение */
    printf("Пункт 9:\n");
    printf("При умножении %d на %d получается %d\n", 2000, 4, 2000 * 4);

    /* Эксперименты со спецификаторами формата */
    printf("Пункт 10:\n");
    printf("%g разделить %g равно %g\n", 5.0, 2000000.0, 5.0 / 2000000.0);
    printf("%d разделить %d равно %d\n", 5, 2000000, 5 / 2000000);
    printf("%f разделить %f равно %f\n", 5.0, 2000000.0, 5.0 / 2000000.0);
    printf("%g разделить %g равно %g\n", 5.0, 2000000.0, 5.0 / 2000000.0);
    printf("%e разделить %e равно %e\n", 5.0, 2000000.0, 5.0 / 2000000.0);
}

void zad2()
{
    int hours = 15;
    int minutes = 1;
    int minutes_after_eight = (hours - 8) * 60 + minutes;
    int minutes_since_midnight = hours * 60 + minutes;
    int minutes_until_midnight = (23 - hours) * 60 + (60 - minutes);
    int minutes_until_midnight_hours = minutes_until_midnight / 60;
    int minutes_until_midnight_minutes = minutes_until_midnight % 60;

    printf("Сейчас %d часов %d минут 00 секунд\n", hours, minutes);
    printf("Идет %d минута суток\n", minutes_since_midnight);
    printf("До полуночи осталось %d часов и %d минут\n",
           minutes_until_midnight_hours, minutes_until_midnight_minutes);
    printf("С 8:00 прошло %d секунд\n", minutes_after_eight * 60);

    printf("Текущий час = %.2f суток, текущая минута = %.2f часа\n",
           (double)hours / 24.0, (double)minutes / 60.0);
}

void zad3()
{
    n = 3;
    L = 373;
    k = 3;
    m = 5;

    printf("Дано\n%10d\n%10d\n", n, L);
    printf("   ________\n");
    printf("Ответ:\n%+0*.*f\n", k + m + 2, m, 1.0 * n / L);
}
