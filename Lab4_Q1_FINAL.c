#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

FILE* in;
FILE* out;
char content[1000];

int main() {
    in = fopen("data.txt", "r");

    if (in == NULL) {
        printf("Not able to open the file.");
        return 1;
    }

    fgets(content, sizeof(content), in);
    fclose(in);

    printf("File opened \n File content: \n %s \n", content);


    char result[1000] = "";
    char *ptr = content;
    while (*ptr) {
        if (isdigit(*ptr) || *ptr == '.' || *ptr == '-' || *ptr == ' ') {
            strncat(result, ptr, 1);
        }
        ptr++;
    }

    printf("Results:\n %s \n", result);

    out = fopen("test.txt", "w");
    fprintf(out, "%s", result);
    fclose(out);

    return 0;
}
