#include <stdio.h>

int main() {
    int passes = 0;
    int failures = 0;
    int student_counter = 1;
    
    while(student_counter <= 10) {
        printf("Please enter the %d student's grade (1 for pass or 2 for fail): \n", student_counter);
        int exam_result;
        scanf("%d", &exam_result);
        if (exam_result == 1) {
            passes += 1;
        } else if (exam_result == 2) {
            failures += 1;
        } else {
            return 0;
        }
        ++student_counter;
    }
    
    printf("Passes: %d \n", passes);
    printf("Fails: %d \n", failures);
    if (passes > 8 ) {
        printf("Bonus to the teacher <3");
    }
    return 0;
}
