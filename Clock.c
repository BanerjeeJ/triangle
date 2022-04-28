#include <stdio.h>
#include <Windows.h>
int main()
{
    int h,m,s;
    int d=1000;//we add a delay of 1000 milliseconds and we will use it in function sleep
    printf("Set time : \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 ||m>60 ||s>60)
    {
        printf("ERROR !\n");
        exit(0);

    }
while(1)//this is an ifinite loop and will repeat itself to infinity
{
    s++;
    if(s>59)
    {
        m++;
        s=0;
    }
    if(m>59)
    {
        h++;
        h=0;
    }
    if(h>12)
    {
        h=1;
    }
    printf("\n Clock : ");
    printf("\n %02d:%02d:%02d",h,m,s);//this will write thye time in 00:00:00 format
    Sleep(d);//this function sleeps down the while loop in order to make it more real
    system("cls");
    
}

}
