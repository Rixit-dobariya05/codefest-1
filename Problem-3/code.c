#include<stdio.h>
int get_max_profit(int[]);
int main()
{
    FILE *value,*output;
    int i=0,max,hr=9,mi=30,k,ans,noc,price[36],j;
    char t;
    value=fopen("input.txt","r");
    output=fopen("output.txt","w");
    fscanf(value,"%d\n",&noc);
    while(noc!=0)
    {    while(!feof(value))
        {
            fscanf(value,"%c",&t);
            fscanf(value,"%d",&price[i]);
            i++;
            if(i==35)
            {
                i=0;
                break;
            }
        }
        ans=get_max_profit(price);
        max=price[0];
        for(i=0;i<36;i++)
        {
            if(max<price[i])//find maximum
            {
                max=price[i];
                k=i;
            } 
        }
        for(i=0;i<k;i++)
        {
            mi=mi+10;
            if(mi==60)
            {
                mi=0;
                hr++;
                if(hr==13)
                    hr=1;
            }
        }
       fprintf(output,"[%d,%.2d.%.2d]\n",ans,hr,mi);
       noc--;
    }
    fclose(value);
    fclose(output);
    return 0;
}
int get_max_profit(int paytm_prices[36])
{
    int min=paytm_prices[0],max=paytm_prices[0],i;
    for(i=0;i<36;i++)
    {
        if(min>paytm_prices[i])//find minimmum
           min=paytm_prices[i];
        if(max<paytm_prices[i])//find maximum
            max=paytm_prices[i]; 
    }
    return (max-min);
}
