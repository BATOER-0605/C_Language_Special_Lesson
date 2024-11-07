#include <stdio.h>

int main() {
    double n;
    for(scanf("%lf",&n);n>=1;n*=0.5){
        printf("%lf\n",n);
    }
}