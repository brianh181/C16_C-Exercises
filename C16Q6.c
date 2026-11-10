#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

struct date {
    int month;
    int day;
    int year;
};

void compare_dates(struct date d1, struct date d2) {
    switch (d1.year - d2.year) {
        case 0:
            switch (d1.month - d2.month) {
                case 0:
                    switch (d1.day - d2.day) {
                        case 0:
                            printf("The dates are the same.\n");
                            break;
                        case 1:
                            printf("%d/%d/%02d is later than %d/%d/%02d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
                            break;
                        case -1:
                            printf("%d/%d/%02d is earlier than %d/%d/%02d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
                            break;
                    }
                    break;
                case 1:
                    printf("%d/%d/%02d is later than %d/%d/%02d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
                    break;
                case -1:
                    printf("%d/%d/%02d is earlier than %d/%d/%02d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
                    break;
            }
            break;
        case 1:
            printf("%d/%d/%02d is later than %d/%d/%02d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
            break;
        case -1:
            printf("%d/%d/%02d is earlier than %d/%d/%02d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
            break;
    }
}

int main(void) {
    printf("Enter first date (mm/dd/yy): ");
    struct date date1;
    scanf("%d/%d/%d", &date1.month, &date1.day, &date1.year);

    printf("Enter second date (mm/dd/yy): ");
    struct date date2;
    scanf("%d/%d/%d", &date2.month, &date2.day, &date2.year);

    compare_dates(date1, date2);
    return 0;
}