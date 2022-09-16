#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float firstVal;
    float secondVal;
    char operator;
    float result;

    printf("Enter calculation:\n\n");
    scanf("%f %c %f", &firstVal, &operator,&secondVal);

    switch(operator) {
        case '/': result = firstVal/secondVal;
        break;
        case '*': result = firstVal*secondVal;
        break;
        case '-': result = firstVal-secondVal;
        break;
        case '+': result = firstVal+secondVal;
        break;
        case '^': result = pow(firstVal,secondVal);
        break;
        case ' ': result = sqrt(secondVal);
        break;
        default: goto fail;

    }
    printf("%.9g%c%.9g = %.6g\n\n", firstVal, operator, secondVal, result);
    goto exit;
    fail:
    printf("Fail.\n");
    exit:
    return 0;



}