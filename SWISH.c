#include <stdio.h>
int main()
{
    int price, discount, final_price=0,discount_price;
    scanf("%d %d",&price,&discount);
    final_price = price;
    
    
    while(price>1){
        discount_price =(price*discount)/100;
        final_price = (final_price) + (price - discount_price);
        price = price - discount_price;
    }
    
    printf("%d",final_price);
    return 0;
}
