#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag = 1;

    printf("Enter any string: ");
    scanf("%s", str);


    i = 0;
    while (str[i]!= '\0') {
        i++;
    }


    j = i - 1;
    for (i = 0; i < j; i++) {
        if (str[i]!= str[j]) {
            flag = 0;
            break;
        }
        j--;
    }

    if (flag == 1) {
        printf("Given string is a Palindrome.\n");
    } else {
        printf("Given string is not a Palindrome.\n");
    }

}
