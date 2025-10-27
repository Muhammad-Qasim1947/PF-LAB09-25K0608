#include <stdio.h>

float calculateTotal(float prices[], int count) {
    float sum = 0;
    int i;
    for (i = 0; i < count; i++) {
        sum += prices[i];
    }
    return sum;
}

float applyDiscount(float total) {
    if (total > 5000) {
        return total * 0.9; 
    } else {
        return total;     
    }
}

void printBill(float total) {
    printf("Final amount payable is: %.2f", total);
}

int main() {
    float prices[] = {50.0, 75.0, 120.0, 80.0};
    int itemCount = 4;
    
    float total = calculateTotal(prices, itemCount);
    float afterDiscount = applyDiscount(total);
    printBill(afterDiscount);

    return 0;
}
