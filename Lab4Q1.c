#include <stdio.h>
FILE* in;
FILE* out;
float content[1000];
float content_float[1000];
void getting_floats();

int main()
{
    
    in = fopen("data.txt", "r");
    out = fopen("test.txt", "w");

    if(in != NULL){
        printf("\nfile opened\n");
        getting_floats();
    } else{
        printf("\nfile error\n");
    }

    return 0;
}

void getting_floats(){
    fgets(content, sizeof(content), in);
    printf("%f\n", content[5]);

    }
