#include <stdio.h>
#include <string.h>

int main() {
    char name[3][20];
    float math[3], phy[3], chem[3];
    float math_avg, phy_avg, chem_avg;

    for (int i = 0; i < 3; i++) {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", name[i]);

        printf("Enter Math score: ");
        scanf("%f", &math[i]);

        printf("Enter phy score: ");
        scanf("%f", &phy[i]);

        printf("Enter chem score: ");
        scanf("%f", &chem[i]);

        printf("\n");
    }

    math_avg = (math[0] + math[1] + math[2]) / 3;
    phy_avg = (phy[0] + phy[1] + phy[2]) / 3;
    chem_avg = (chem[0] + chem[1] + chem[2]) / 3;

    printf("==========================================================\n");
    printf("%-15s %-8s %-10s %-10s %-10s\n",
    "student", "(length)", "math", "phy", "chem");
    printf("==========================================================\n");

    for (int i = 0; i < 3; i++) {
        printf("%-15s (%d)  %8.2f  %8.2f  %8.2f\n",
        name[i],
        (int)strlen(name[i]),
        math[i],
        phy[i],
        chem[i]);
    }

    printf("--------------------------------------------------------\n");
    printf("%-24s %8.2f %8.2f %8.2f\n",
          "Subject average",
          math_avg,
          phy_avg,
          chem_avg);
    printf("========================================================\n");

    return 0;
}