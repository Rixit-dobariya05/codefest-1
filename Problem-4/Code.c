#include<stdio.h>

int main()

{

    FILE *value,*output;

    int    a1[30],a2[30],a3[50],i,j,k=0,l=0,m=0,noc,t,a,b,c;

     value=fopen("input.txt","r");

     output=fopen("output.txt","w");

    //input

    fscanf(value,"%d\n",&noc);

    while(noc!=0&&!feof(value))

    {

        a=0;

    while(fscanf(value,"%c")!="]")

    {

        fscanf(value,"%c",&t);

        fscanf(value,"%d",&a1[a]);

        a++;

    }

    b=0;

    while(fscanf(value,"%c")!="]")

    {

        fscanf(value,"%c",&t);

        fscanf(value,"%d",&a2[b]);

        b++;

    }

    c=0;

    while(fscanf(value,"%c")!="]")

    {

        fscanf(value,"%c",&t);

        fscanf(value,"%d",&a3[c]);

        c++;

    }

    //input

    l=0;    

    j=0;

 for(i=0;i<c;i++)//the aorder of 1

    {

            if(a3[i]==a1[j])

            {

                l++;

                j++;

            }

   }

k=0;

m=0;

    for(i=0;i<c;i++)//the order of 2

    {

            if(a3[i]==a2[k])

            {

               m++;

               k++;

            }

   }

       if(l==a&&m==b)

        fprintf(output,"Valid\n");

    else

        fprintf(output,"Invalid\n");

}

fclose(value);

fclose(output);

}
