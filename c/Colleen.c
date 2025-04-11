/* comment outside of the program */
int printf(char* f, ...);

int pprintf(char* s, int x) {
    printf(s, 10, 10, 10, 10, 10, 10, 10, 10, 10, x, s, x, 10, 10, 10);
}

int main() {
    /* comment inside of the main function */
    char* s = "/* comment outside of the program */%cint printf(char* f, ...);%c%cint pprintf(char* s, int x) {%c    printf(s, 10, 10, 10, 10, 10, 10, 10, 10, 10, x, s, x, 10, 10, 10);%c}%c%cint main() {%c    /* comment inside of the main function */%c    char* s = %c%s%c;%c    pprintf(s,34);%c}%c";
    pprintf(s,34);
}
