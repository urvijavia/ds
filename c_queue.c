

#include<stdio.h>
#include"circular_heder.h"
int main()
{
    int ch,val,pos;
    queue q;
    init(&q);

    while(ch!=6)
    {
        printf("enter your choice\n\n");
    printf("1.insert\n");
    printf("2.delete\n");
    printf("3.peak\n");
    printf("4.display\n");
    printf("5.change\n");
    printf("6.exit\n");
    scanf("%d",&ch);

            switch (ch)
            {
            case 1:
            printf("enter a value\n");
            scanf("%d",&val);
            insert(&q,val);
            break;

            case 2:
            val=delete(&q);
            if(val==NULL)
            {

                printf("");
            }
            else
            {
                printf("delete vale is %d\n\N\N",val);
            }
            break;


            case 3:
                peak(&q);
                break;

            case 4:
                display(&q);
                break;

            case 5:

                printf("enter a pos.\n");
                scanf("%d",&pos);
                printf("enter a new value");
                scanf("%d",&val);
                change(&q,pos,val);


                break;

            case 6:
            break;

            default:
               printf("invalid");

        }
          continue;
    }
}
