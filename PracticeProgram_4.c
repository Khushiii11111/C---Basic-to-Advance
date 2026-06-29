// Parimeter of a Rectangle

#include <stdio.h>
    int main() {
        int length;
        printf("enter length: ");
        scanf("%d", &length);

        float width;
        printf("enter width: ");
        scanf("%f", &width);

        printf("parimeter is: %f", 2 * length * width);
        return 0;
    }