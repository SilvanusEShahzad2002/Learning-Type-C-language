#include <stdio.h>

int main() {
    int age;

    // Ask the user to enter age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility
    if (age > 18 && age < 60) {
        printf("You are eligible\n");
    } else {
        printf("Not eligible\n");
    }

    return 0;
}

