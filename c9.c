#include <stdio.h>


int computeHomeValue(int popularity, int size);

int main() {
    int popularity, size, homeValue;

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    homeValue = computeHomeValue(popularity, size);

    printf("Home value is: %d\n", homeValue);

    return 0;
}

int computeHomeValue(int popularity, int size) {
    return (popularity*popularity*popularity + size*size) * 10000;
}

