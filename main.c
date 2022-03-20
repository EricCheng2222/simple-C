#include <stdio.h>






void char_to_int(char *in, int *out, int n){
    for(int i=0; i<n; i++){
        out[i] = in[i] - '0';
    }
}

void mult_2(int *a, n){
    for(int i=0; i<n; i++){
        int[i] = int[i] * 2;
        int[i+1] = int[i+1] + int[i]/10;
        int[i] = int[i]%10;
    }
}

void div_2(int *a, n){
    int carry = 0;
    for(int i=n-1; i>=0, i--){
        a[i] = (carry*10 + a[i]) / 2;
        carry = (carry*10 + a[i]) % 2;
    }
}

void is_zero(int *a, n){
    for(int i=0; i<n; i++){
        if(a[i]!=0)
            return false;
    }
    return true;
}

void cmp(int *a, int *b, n){
    for(int i=n-1; i>=0; i--){
        if(a[i] > b[i])
            return true;
        if(a[i] < b[i])
            return false;
    }
    return false
}

void minus(int *a, int *b, n){
    // this function is a = a - b
    int borrow = 0;
    for(int i=0; i<n-1; i++){
        if(a[i] < b[i])
            borrow = 1;
        else
            borrow = 0;
        a[i] = borrow*10 + a[i] - b[i];
        a[i+1] = a[i+1] - borrow;
    }
}


int main(){
    char a[1000];
    char b[1000];
    int a_int[1000];
    int b_int[1000];
    scanf("%s", a);
    scanf("%s", b);
    char_to_int(a, a_int, 1000);
    char_to_int(b, b_int, 1000);

    return 0;
}
