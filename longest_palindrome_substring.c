#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * longestPalindrome(char * s) {
    int size = strlen(s);
    int longest = 0;
    char *res = NULL;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j <= size; j++) {
            int isPalindrome = 1;
            for (int k = 0; k < (j - i) / 2; k++) {
                if (s[i + k] != s[j - k - 1]) {
                    isPalindrome = 0;
                    break;
                }
            }
            if (isPalindrome && (j - i) > longest) {
                longest = j - i;
                if (res) {
                    free(res);
                }
                res = (char *)malloc(longest + 1);
                strncpy(res, s + i, longest);
                res[longest] = '\0';
            }
        }
    }
    return res;
}

int main() {
    char input[] = "babad";
    char *result = longestPalindrome(input);

    if (result) {
        printf("Longest Palindrome: %s\n", result);
        free(result);
    } else {
        printf("No palindrome found.\n");
    }

    return 0;
}
