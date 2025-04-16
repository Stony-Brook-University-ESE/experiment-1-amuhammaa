#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    printf("Enter a word: ");
    scanf("%s", str);

    int len = strlen(str);
    int isPalindrome = 1;
    
    // convert to lowercase
    // for (int i = 0; i < len / 2; i++) {
    //     if ('A' <= str[i] <= 'Z') {
    //         str[i] = str[i] - 'A';
    //     }
    // }
    char lowercase(char ch) {
        if ('A' <= ch && ch <= 'Z') {
            return ch + 32; // convert to lowercase
        }
        return ch;
    }

    for (int i = 0; i < len; i++) {
        str[i] = lowerCase(str[i]);
    }

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("It's a palindrome!\n");
    } else {
        printf("Not a palindrome.\n");
    }

    return 0;
}
