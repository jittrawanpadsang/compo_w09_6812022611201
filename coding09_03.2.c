#include <stdio.h>

int main() {
    int i = 1;              // เริ่มที่ i เท่ากับ 1

    do {
        if (i == 6) {       // ถ้า i เป็น 6 ให้ข้ามการแสดงผล
            i++;
            continue;
        }

        printf("%d ", i);   // แสดงค่า i ถ้าไม่ใช่ 6
        i++;                // เพิ่มค่า i ทีละ 1
    } while (i <= 10);      // ทำลูปจนกว่า i จะเกิน 10

    return 0;
}
