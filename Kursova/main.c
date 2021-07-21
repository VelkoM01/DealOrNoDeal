#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,l,m,k1, k[15]={3000,250,20000,100,5000,40000,1,750,100000,1500,500,50000,30000,1000,10000},lstart=1,ustart=100000, kk, k4[4], sum1=0, o1,o2,o3, l1=14000,u1=28000,l2=4000, u2=10000,l3=1000,u3=7000, result,k8[4],sum2=0,sum3=0,k12[4], last, nb;
    char deal[30], last1[30], change[30];

    printf("Choose your box 1-15:\n");
    scanf("%d", &k1);
    kk=k[k1-1];
    if(k1>0 && k1<16)
    {
        printf("Your choice is box number %d, now choose 4 more boxes 1-15:\n", k1);
    }
    else
    {
        printf("Your choice is not valid, please choose box from 1-15:\n");
        scanf("%d", &k1);
    }

    for(j=0;j<4;j++)
    {
        scanf("%d", &k4[j]);
        if(k4[j]!=k1 && k4[j]>0 && k4[j]<16)
        {
            printf("Your pick: %d with %d leva\n", k4[j], k[k4[j]-1]);
        }
        else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum1=sum1+k[k4[j]-1];

    }

     if(sum1<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
            printf("Pick another 4 boxes:(opened:%d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3]);
            for(l=0;l<4;l++)
            {
                scanf("%d", &k8[l]);
        if(k8[l]!=k1 && k8[l]>0 && k8[l]<16 && k8[l]!=k4[0] && k8[l]!=k4[1] && k8[l]!=k4[2] && k8[l]!=k4[3])
        {
            printf("Your pick: %d with %d leva\n", k8[l], k[k8[l]-1]);
        }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum2=sum2+k[k8[l]-1];

            }
             if(sum2<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {

printf("Pick another 4 boxes:(opened:%d %d %d %d %d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3]);
            for(m=0;m<4;m++)
            {
                scanf("%d", &k12[m]);
        if(k12[m]!=k1 && k12[m]>0 && k12[m]<16 && k12[m]!=k4[0] && k12[m]!=k4[1] && k12[m]!=k4[2] && k12[m]!=k4[3] && k12[m]!=k8[0] && k12[m]!=k8[1] && k12[m]!=k8[2] && k12[m]!=k8[3])
        {
            printf("Your pick: %d with %d leva\n", k12[m], k[k12[m]-1]);
        }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum3=sum3+k[k12[m]-1];


        }
        if(sum3<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
 printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }

            }
        }

    }
    if(sum3>=10000 && sum3<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
         printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }


        }

    }
     if(sum3>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
       {
        printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }
       }
            }
        }

    }
    if(sum2>=10000 && sum2<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
            printf("Do you want to change your box:(yes/no)\n");
            scanf("%s", &change);
            if(strcmp(change,"yes")==0)
            {
                printf("Choose your next box:(opened:%d %d %d %d %d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3]);
                scanf("%d", &nb);
                k1=nb;
            }
printf("Pick another 4 boxes:(opened:%d %d %d %d %d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3]);
            for(m=0;m<4;m++)
            {
                scanf("%d", &k12[m]);
        if(k12[m]!=k1 && k12[m]>0 && k12[m]<16 && k12[m]!=k4[0] && k12[m]!=k4[1] && k12[m]!=k4[2] && k12[m]!=k4[3] && k12[m]!=k8[0] && k12[m]!=k8[1] && k12[m]!=k8[2] && k12[m]!=k8[3])
        {
            printf("Your pick: %d with %d leva\n", k12[m], k[k12[m]-1]);
        }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum3=sum3+k[k12[m]-1];


        }
        if(sum3<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
 printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }

            }
        }

    }
    if(sum3>=10000 && sum3<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
         printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }


        }

    }
     if(sum3>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
       {
        printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }
       }


        }

    }
     if(sum2>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
printf("Pick another 4 boxes:(opened:%d %d %d %d %d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3]);
            for(m=0;m<4;m++)
            {
                scanf("%d", &k12[m]);
        if(k12[m]!=k1 && k12[m]>0 && k12[m]<16 && k12[m]!=k4[0] && k12[m]!=k4[1] && k12[m]!=k4[2] && k12[m]!=k4[3] && k12[m]!=k8[0] && k12[m]!=k8[1] && k12[m]!=k8[2] && k12[m]!=k8[3])
        {
            printf("Your pick: %d with %d leva\n", k12[m], k[k12[m]-1]);
        }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum3=sum3+k[k12[m]-1];


        }
        if(sum3<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
 printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }

            }
        }

    }
    if(sum3>=10000 && sum3<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
         printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }


        }

    }
     if(sum3>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
       {
        printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }
       }


        }

    }
        }


    if(sum1>=10000 && sum1<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
            printf("Do you want to change your box:(yes/no)\n");
            scanf("%s", &change);
            if(strcmp(change,"yes")==0)
            {
                printf("Choose your next box:(opened:%d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3]);
                scanf("%d", &nb);
                k1=nb;
            }
            printf("Pick another 4 boxes:(opened:%d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3]);
            for(l=0;l<4;l++)
            {
                scanf("%d", &k8[l]);
        if(k8[l]!=k1 && k8[l]>0 && k8[l]<16 && k8[l]!=k4[0] && k8[l]!=k4[1] && k8[l]!=k4[2] && k8[l]!=k4[3])
        {
            printf("Your pick: %d with %d leva\n", k8[l], k[k8[l]-1]);
        }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum2=sum2+k[k8[l]-1];

            }
             if(sum2<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
printf("Pick another 4 boxes:(opened:%d %d %d %d %d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3]);
            for(m=0;m<4;m++)
            {
                scanf("%d", &k12[m]);
        if(k12[m]!=k1 && k12[m]>0 && k12[m]<16 && k12[m]!=k4[0] && k12[m]!=k4[1] && k12[m]!=k4[2] && k12[m]!=k4[3] && k12[m]!=k8[0] && k12[m]!=k8[1] && k12[m]!=k8[2] && k12[m]!=k8[3])
        {
            printf("Your pick: %d with %d leva\n", k12[m], k[k12[m]-1]);
        }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum3=sum3+k[k12[m]-1];


        }
        if(sum3<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
 printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }

            }
        }

    }
    if(sum3>=10000 && sum3<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
         printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }


        }

    }
     if(sum3>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
       {
        printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }
       }

            }
        }

    }
    if(sum2>=10000 && sum2<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
           printf("Do you want to change your box:(yes/no)\n");
            scanf("%s", &change);
            if(strcmp(change,"yes")==0)
            {
                printf("Choose your next box:(opened:%d %d %d %d %d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3]);
                scanf("%d", &nb);
                k1=nb;
            }
printf("Pick another 4 boxes:(opened:%d %d %d %d %d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3]);
            for(m=0;m<4;m++)
            {
                scanf("%d", &k12[m]);
        if(k12[m]!=k1 && k12[m]>0 && k12[m]<16 && k12[m]!=k4[0] && k12[m]!=k4[1] && k12[m]!=k4[2] && k12[m]!=k4[3] && k12[m]!=k8[0] && k12[m]!=k8[1] && k12[m]!=k8[2] && k12[m]!=k8[3])
        {
            printf("Your pick: %d with %d leva\n", k12[m], k[k12[m]-1]);
        }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum3=sum3+k[k12[m]-1];


        }
        if(sum3<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
 printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }

            }
        }

    }
    if(sum3>=10000 && sum3<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
         printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }


        }

    }
     if(sum3>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
       {
        printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }
       }


        }

    }
     if(sum2>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
printf("Pick another 4 boxes:(opened:%d %d %d %d %d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3]);
            for(m=0;m<4;m++)
            {
                scanf("%d", &k12[m]);
        if(k12[m]!=k1 && k12[m]>0 && k12[m]<16 && k12[m]!=k4[0] && k12[m]!=k4[1] && k12[m]!=k4[2] && k12[m]!=k4[3] && k12[m]!=k8[0] && k12[m]!=k8[1] && k12[m]!=k8[2] && k12[m]!=k8[3])
        {
            printf("Your pick: %d with %d leva\n", k12[m], k[k12[m]-1]);
        }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum3=sum3+k[k12[m]-1];


        }
        if(sum3<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
 printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }

            }
        }

    }
    if(sum3>=10000 && sum3<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
         printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }


        }

    }
     if(sum3>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
       {
        printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }
       }
        }

    }
        }


     if(sum1>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
            printf("Pick another 4 boxes:(opened:%d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3]);
            for(l=0;l<4;l++)
            {
                scanf("%d", &k8[l]);
        if(k8[l]!=k1 && k8[l]>0 && k8[l]<16 && k8[l]!=k4[0] && k8[l]!=k4[1] && k8[l]!=k4[2] && k8[l]!=k4[3])
        {
            printf("Your pick: %d with %d leva\n", k8[l], k[k8[l]-1]);
        }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum2=sum2+k[k8[l]-1];


            }
             if(sum2<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
printf("Pick another 4 boxes:(opened:%d %d %d %d %d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3]);
            for(m=0;m<4;m++)
            {
                scanf("%d", &k12[m]);
        if(k12[m]!=k1 && k12[m]>0 && k12[m]<16 && k12[m]!=k4[0] && k12[m]!=k4[1] && k12[m]!=k4[2] && k12[m]!=k4[3] && k12[m]!=k8[0] && k12[m]!=k8[1] && k12[m]!=k8[2] && k12[m]!=k8[3])
        {
            printf("Your pick: %d with %d leva\n", k12[m], k[k12[m]-1]);
        }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum3=sum3+k[k12[m]-1];


        }
if(sum3<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
  printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }

            }
        }

    }
    if(sum3>=10000 && sum3<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
  printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }


        }

    }
     if(sum3>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
       {
  printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }
       }

    }

            }
        }


    if(sum2>=10000 && sum2<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
            printf("Do you want to change your box:(yes/no)\n");
            scanf("%s", &change);
            if(strcmp(change,"yes")==0)
            {
                printf("Choose your next box:(opened:%d %d %d %d %d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3]);
                scanf("%d", &nb);
                k1=nb;
            }
printf("Pick another 4 boxes:(opened:%d %d %d %d %d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3]);
            for(m=0;m<4;m++)
            {
                scanf("%d", &k12[m]);
        if(k12[m]!=k1 && k12[m]>0 && k12[m]<16 && k12[m]!=k4[0] && k12[m]!=k4[1] && k12[m]!=k4[2] && k12[m]!=k4[3] && k12[m]!=k8[0] && k12[m]!=k8[1] && k12[m]!=k8[2] && k12[m]!=k8[3])
        {
            printf("Your pick: %d with %d leva\n", k12[m], k[k12[m]-1]);
        }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum3=sum3+k[k12[m]-1];


        }
if(sum3<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
  printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }

            }
        }

    }
    if(sum3>=10000 && sum3<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
  printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }


        }

    }
     if(sum3>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
       {
  printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }
       }

    }

        }


     if(sum2>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
printf("Pick another 4 boxes:(opened:%d %d %d %d %d %d %d %d %d)\n",k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3]);
            for(m=0;m<4;m++)
            {
                scanf("%d", &k12[m]);
        if(k12[m]!=k1 && k12[m]>0 && k12[m]<16 && k12[m]!=k4[0] && k12[m]!=k4[1] && k12[m]!=k4[2] && k12[m]!=k4[3] && k12[m]!=k8[0] && k12[m]!=k8[1] && k12[m]!=k8[2] && k12[m]!=k8[3])
        {
            printf("Your pick: %d with %d leva\n", k12[m], k[k12[m]-1]);
        }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        sum3=sum3+k[k12[m]-1];


        }
        if(sum3<10000)
    {
        o1=(rand()%(u1-l1+1)+l1);
        printf("Bank offers you %d leva.\n", o1);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o1;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
 printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }

            }
        }

    }
    if(sum3>=10000 && sum3<=30000)
    {
        o2=(rand()%(u2-l2+1)+l2);
        printf("Bank offers you %d leva.\n", o2);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o2;
            printf("You won %d leva, congrats!",result);
        }
       else
        {
         printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }


        }

    }
     if(sum3>30000)
    {
        o3=(rand()%(u3-l3+1)+l3);
        printf("Bank offers you %d leva.\n", o3);
        printf("Deal or no deal:(yes/no)\n");
        scanf("%s", &deal);
        if(strcmp(deal, "yes")==0)
        {
            result=o3;
            printf("You won %d leva, congrats!",result);
        }
       else
       {
        printf("Now you have your box %d, do you want to change it?(yes/no):\n", k1);
        scanf("%s", &last1);
        if(strcmp(last1, "no")==0)
        {
            result=k[k1-1];
            printf("You won %d leva!",result);
        }
        else
        {
            printf("Choose one of the two boxes left:(opened:%d %d %d %d %d %d %d %d %d %d %d %d %d):", k1, k4[0],k4[1],k4[2],k4[3],k8[0],k8[1],k8[2],k8[3], k12[0],k12[1],k12[2],k12[3]);
            scanf("%d", &last);
            if(last!=k1 && last>0 && last<16 && last!=k4[0] && last!=k4[1] && last!=k4[2] && last!=k4[3] && last!=k8[0] && last!=k8[1] && last!=k8[2] && last!=k8[3]&& last!=k12[0] && last!=k12[1] && last!=k12[2] && last!=k12[3])
            {
                result=k[last-1];
            printf("You won %d leva!",result);
            }  else
        {
            printf("You have already opened this box or it doesn't exsist!");
            exit(0);
        }
        }
       }

    }
        }
    }




    return 0;
}
