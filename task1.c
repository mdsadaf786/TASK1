#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char data[100];

    // Writing to a file
    file = fopen("sample.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Hello, this is a file handling example.\n");
    fclose(file);

    // Appending to the file
    file = fopen("sample.txt", "a");
    fprintf(file, "This line is appended.\n");
    fclose(file);

    // Reading from the file
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error reading file!\n");
        return 1;
    }
    printf("File Contents:\n");
    while (fgets(data, 100, file) != NULL) {
        printf("%s", data);
    }
    fclose(file);

    return 0;
}
