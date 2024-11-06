#include <stdio.h>

int main() {
    int a = 10;
    int *b;
    *b = 20;
    char c[5] = "4545";
    c[0] = 'a';
    char *d = "hello";

    printf("Hello, World!\n");
    printf("normal valiable: %d\npointer valiable: %d\narray valiable: %c\n", a, *b, c[0]);
    printf("array valiable:");
    for(int i = 0; i < 2; i++) {
        printf("%c", c[i]);
    }
    printf("\n%s\n",c);
    printf("pointer address: %p\n", b);
    printf("%s\n", d);
    //printf("%s\n", *d);
    printf("%d\n", *b);
    printf("%d\n", b);
    printf("%s\n", c);
    *d++;

    printf("%s\n", d);
    *d--;
    printf("%s\n", d);
    printf("%p\n", d);
    printf("%c\n", *d);
    return 0;
}