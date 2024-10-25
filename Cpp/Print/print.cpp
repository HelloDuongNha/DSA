#include <iostream>
using namespace std;
#include <stdio.h>

int main() {
    int a = 10;
    unsigned int b = 20;
    long c = 100000L;
    unsigned long d = 200000UL;
    float e = 3.14f;
    double f = 3.1415926535;

    printf("int a: %d\n", a);                    // Số nguyên
    printf("unsigned int b: %u\n", b);           // Số nguyên không dấu
    printf("long c: %ld\n", c);                  // Số nguyên dài
    printf("unsigned long d: %lu\n", d);         // Số nguyên dài không dấu
    printf("float e: %f\n", e);                  // Số thực
    printf("double f: %lf\n", f);                // Số thực dấu phẩy động đôi
    system("pause");
    return 0;
}
