#include <stdio.h>

int minSteps(int x, int y) {
    int count = 0;
    
    while (y > x) {
        if (y % 2 == 0) {
            y /= 2;
        } else {
            y++;
        }
        count++;
    }
    
    return count + x - y;
}

int main() {
    int x, y;
    
    printf("Введіть значення x: ");
    scanf("%d", &x);
    
    printf("Введіть значення y: ");
    scanf("%d", &y);
    
    int result = minSteps(x, y);
    
    printf("Мінімальна кількість кроків: %d\n", result);
    
    return 0;
}