#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Hello, World!");
    /* quit application */
    printf("Press and key to continue...");
    char quit = getchar();
    return 0;
}