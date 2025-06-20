#include <stdio.h>

int main()
{
    float hb;
    int fatigue;

    printf("Enter Hemoglobin level (g/dL): ");
    scanf("%f", &hb);

    if(hb < 13.5) {
        printf("Are you feeling fatigue? (Yes = 1, No = 0): ");
        scanf("%d", &fatigue);}

        if(fatigue == 1) {
            printf("Possible anemia.");
        } else {
            printf("Low hemoglobin but no fatigue");
        }
}
