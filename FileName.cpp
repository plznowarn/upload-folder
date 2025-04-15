#include <stdio.h>
#include <math.h>
int main() {
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d", &x1);
        scanf("%d", &y1);
        scanf("%d", &r1);
        scanf("%d", &x2);
        scanf("%d", &y2);
        scanf("%d", &r2);
        int dx = pow(x1 - x2, 2);
        int dy = pow(y1 - y2, 2);
        int dr = pow(r1 + r2, 2);
        if (dx + dy < dr) {
            printf("2");
        }
        else if (dx + dy == dr) {
            printf("1");
        }
        else if (dx + dy > dr) {
            printf("0");
        }
    }
}