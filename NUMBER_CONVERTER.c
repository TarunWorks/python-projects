#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Function to convert Decimal to Binary using Bitwise Logic
void decToBinary(int n) {
    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1) printf("1");
        else if (i < 8) printf("0"); // Minimum 8 bits display
    }
    printf("\n");
}

// Function to convert Decimal to Hexadecimal
void decToHex(int n) {
    printf("Hexadecimal: %X\n", n);
}

void menu() {
    printf("===============================\n");
    printf("   Tarun'S NUMBER CONVERTER   \n");
    printf("===============================\n");
    printf("1. Decimal to Binary & Hex\n");
    printf("2. Binary to Decimal\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
}

int main() {
    int choice, decimal;
    char binary[33];

    while (1) {
        menu();
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Use numbers.\n");
            while(getchar() != '\n'); // Clear buffer
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter Decimal Number: ");
                scanf("%d", &decimal);
                decToBinary(decimal);
                decToHex(decimal);
                break;

            case 2:
                printf("Enter Binary Number: ");
                scanf("%s", binary);
                decimal = (int)strtol(binary, NULL, 2);
                printf("Decimal: %d\n", decimal);
                printf("Hexadecimal: %X\n", decimal);
                break;

            case 3:
                printf("Exiting... Code by Tarun Tomar.\n");
                exit(0);

            default:
                printf("Wrong choice! Try again.\n");
        }
    }
    return 0;
}
