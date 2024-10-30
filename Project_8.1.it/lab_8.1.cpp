#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int CountPairs(char* str) {
    if (strlen(str) < 2) return 0;
    int count = 0;
    for (int i = 0; str[i + 1] != 0; i++) {
        if ((str[i] == 'n' && str[i + 1] == 'o') || (str[i] == 'o' && str[i + 1] == 'n')) {
            count++;
        }
    }
    return count;
}

char* ReplacePairs(char* str) {
    size_t len = strlen(str);
    if (len < 2) return str;

    char* tmp = new char[len * 3 / 2 + 1];
    char* t = tmp;
    tmp[0] = '\0';
    size_t i = 0;

    while (i < len) {
        if (str[i + 1] != 0 && ((str[i] == 'n' && str[i + 1] == 'o') || (str[i] == 'o' && str[i + 1] == 'n'))) {
            strcat(t, "***");
            t += 3;
            i += 2;
        }
        else {
            *t++ = str[i++];
            *t = '\0';
        }
    }

    *t = '\0';
    strcpy(str, tmp);
    return tmp;
}


int main() {
    char str[101];
    cout << "Enter a string:" << endl;
    cin.getline(str, 100);
    cout << "The string contains " << CountPairs(str) << " cups 'no' or 'on'" << endl;
    char* modifiedStr = ReplacePairs(str);
    cout << "Changed string (parameter): " << str << endl;
    cout << "Changed string (result): " << modifiedStr << endl;
    return 0;
}
