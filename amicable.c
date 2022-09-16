   #include<stdio.h>

int main()
{
    //1
    int i;
    int fN,sN;

    //2
    int fDivisorSum = 0;
    int sDivisorSum = 0;

    //3
    printf("Enter two numbers to check if Amicable or not : ");
    scanf("%d %d",&fN,&sN);

    //4
    for(int i=1;i<fN;i++){
    //5
        if(fN % i == 0){
            fDivisorSum = fDivisorSum + i;
        }
    }

    //6
    for(int i=1;i<sN;i++){
        if(sN % i == 0){
            sDivisorSum = sDivisorSum + i;
        }
    }

    //7
    if((fN == sDivisorSum) && (sN == fDivisorSum)){
        printf("%d and %d are Amicable numbers\n",fN,sN);
    }else{
        printf("%d and %d are not Amicable numbers\n",fN,sN);
    }

}
