#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0}; 

    printf("Enter any string: ");
    scanf("%s", str);


    int i = 0;
    while (str[i]!= '\0') {
        freq[(int)str[i]]++;
        i++;
    }


    printf("Frequency of each letter:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c => %d\n", (char)i, freq[i]);
        }
    }

}
