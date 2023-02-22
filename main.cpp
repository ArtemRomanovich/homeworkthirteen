#include <iostream>
int main() {
    int s, c,number;
    printf("Введите количество строк:\n");
    scanf("%i", &s);
    printf("Введите количество столбцов:\n");
    scanf("%i", &c);
    printf("Введите числа:\n");
    int mas[s][c];
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%i", &mas[i][j]);
        }
    }

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < c; j++) {
            printf("%3i", mas[i][j]);
        }
        printf("\n");
    }
    return 0;
}
