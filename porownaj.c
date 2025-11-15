#include <stdio.h>

int main(void) {
    int x = 5;
    int y = 10;

    if (x > y) {
        printf("%d jest wieksze niz %d\n", x, y);
    } else if (y > x) {
        printf("%d jest wieksze niz %d\n", y, x);
    } else {
        printf("Liczby sa rowne: %d i %d\n", x, y);
    }

    return 0;
}