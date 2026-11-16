#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("NG");
        return 0;
    }
    if (n == 0) {
        printf("0");
        return 0;
    }
    for (int i = 0; i <= 50; i++) {
        for (int j = 0; j <= 50; j++) {
            if (i != j && i + j == n) {
                printf("%d %d\n", i, j);
            }
        }
    }
    return 0;
}
