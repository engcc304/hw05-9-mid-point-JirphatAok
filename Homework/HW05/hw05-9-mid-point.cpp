/*
    ผู้ใช้กรอกพิกัดจำนวน 2 จุดลงในโปรแกรม ให้คุณเขียนโปรแกรมคำนวณหาจุดกึ่งกลางของ 2 จุดนี้

    Test case:
        Input A Point :
            2 2
        Input B Point :
            4 4

    Output:
        Mid Point of A and B is ( 3.0, 3.0 )

    Test case:
        Input A Point :
            -3 9
        Input B Point :
            4 -19

    Output:
        Mid Point of A and B is ( 0.5, -5.0 )

    Test case:
        Input A Point :
            6 -8
        Input B Point :
            3 3

    Output:
        Mid Point of A and B is ( 4.5, -2.5 )
*/
#include <stdio.h>

int main() {
    float Ax, Ay, Bx, By, Midx, Midy;

    printf("Input A Point:\n");
    scanf("%f %f", &Ax, &Ay);

    printf("Input B Point:\n");
    scanf("%f %f", &Bx, &By);

    Midx = (Ax + Bx) / 2;
    Midy = (Ay + By) / 2;

    printf( "Mid Point of A and B is ( %.1f, %.1f )\n", Midx, Midy ) ;

    return 0;
}