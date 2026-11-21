#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "infrastructure";
    printf("Hello!\n");
    int len = strlen(word);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
    printf("\n");
    return 0;
}
