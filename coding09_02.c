#include <stdio.h>

int main() {
    int sum, p, x, y;
    sum = 0; // กำหนดค่าเริ่มต้นของผลรวม

    // วนลูปโดยเริ่ม x = 1, y = 1 จนกว่า x * y > 15, เพิ่ม x ทีละ 1 และ y ทีละ 2
    for (x = 1, y = 1; x * y <= 15; x++, y += 2) {
        p = x * y;            // คูณ x และ y เก็บไว้ใน p
        sum = sum + p;        // รวมค่าของ p กับ sum
        printf("%d * %d = %d\n", x, y, p); // แสดงการคูณแต่ละรอบ
    }

    printf("summation of x * y = %d\n", sum); // แสดงผลรวมสุดท้าย
    return 0;
}
