#include<stdio.h>

struct soap {

    char brand_code[10];
    int qty;
    float price;
}soaps[20];

void main(){

    int i=0,count=0;
    char action;

    do {
            printf("Enter brand code: ");
            scanf(" %[^\n]",soaps[i].brand_code);
            printf("Enter quantity of above brand: ");
            scanf("%d",&soaps[i].qty);
            printf("Enter price of this brand: ");
            scanf("%f",&soaps[i].price);

            ++i;
            ++count;

            printf("Do you have another data to be stored: ");
            scanf(" %c",&action);

    }while((action =='Y') || (action =='y'));


    printf("\nNo of brands in the shop = %d\n",count);
    printf("\tbrand code\tvalue\t\n");
    for(i=0; i<count; i++){
        printf("\t%s\t\t%.2f\n",soaps[i].brand_code,(soaps[i].qty*soaps[i].price));
    }
}
