#include <stdio.h>
int main() {
    
    int numbers[] = {7, 17, 7, 2, 98};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    printf("%d\n", sum);

    return 0;
}
