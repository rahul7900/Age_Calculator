#include<stdio.h>

int main(){
    int d1, m1, y1, d2, y2, m2, r1, r2, r3;

    printf("********************************************************\n");
    printf("*******************AGE_CALCULATOR***********************\n");
    printf("********************************************************\n");
    printf("Enter your birthday day:\n");
    scanf("%d", &d1);
    printf("Enter your birthday month:\n");
    scanf("%d", &m1);
    printf("Enter your birthday year:\n");
    scanf("%d", &y1);
    printf("Enter your current day:\n");
    scanf("%d", &d2);
    printf("Enter your current month:\n");
    scanf("%d", &m2);
    printf("Enter your current year:\n");
    scanf("%d", &y2);
    if ((d1 > 31 || d1 < 1) && (d2 > 31 || d2 < 1) && (m1 < 1 || m1 > 12) && (m2 < 1 || m2 > 12) && (y1 <0 && y2<0))
{
        printf("You Entered the invalid date!!!\n");
}
else
{

    r3 = y2 - y1;
    if (d2 > d1){
    
        r1 = d2 - d1;
}
    else{
    
        m2 = m2 - 1;
        d2 = d2 + 30;
        r1 = d2 - d1;
}
    if (m2 > m1)
{
        r2 = m2 - m1;
}
    else
{
        y2 = y2 - 1;
        m2 = m2 + 12;
        r2 = m2 - m1;
        r3 = r3-1;
}

    printf("Your age is %d days %d months %d years", r1, r2, r3);
}






    return 0;
}


