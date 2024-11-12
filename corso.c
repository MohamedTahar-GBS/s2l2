#include <stdio.h>

int main() {
    int ax, bx, cx;
    printf("inserire valore ax:");
    scanf("%d", &ax);
    printf("inserire valore bx:");
    scanf("%d", &bx);
    cx = ax * bx;

    printf ("prodotto di %d e %d è : %d\n" , ax, bx, cx);

    return 0;
}
