#include <stdio.h>

int main() {
    int n;  
    scanf("%d", &n);  
    
    int families[n];
    int count_1 = 0, count_2 = 0; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &families[i]);
        if (families[i] == 1) {
            count_1++;
        } else if (families[i] == 2) {
            count_2++;
        }
    }
    
    int r;  
    scanf("%d", &r);  
    int happy = 0; 
    int full = count_2;  
    if (full > r) {
        full = r;
    }
    happy += full * 2;
    r -= full; 
    
    int seats = r * 2; 
    int single = count_1; 
    if (single > seats) {
        single = seats;  
    }
    happy += single;
    
    printf("%d\n", happy);
    
    return 0;
}
