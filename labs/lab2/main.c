#include <stdio.h>

int main() {
    double mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int a, b;
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
            printf("%lf\t", mat[a][b]);
        }
        
        printf("\n");
    }

    return 0;
}
