#include <stdint.h>

#define XXX __asm__("nop");

int main() {
    DDD;
    volatile int a = 0;
    DDD;
    DDD;
    DDD;
    if(a>0xff) {
        DDD;
    }
    DDD;
    DDD;
    DDD;
    while(a<10) {
        DDD;
        a++;
        DDD;
    }
    DDD;
    DDD;
    DDD;
    for (a = 0; a < 10; a++) {
        DDD;
    }
    DDD;
    DDD;
    DDD;
    return 0;
}
