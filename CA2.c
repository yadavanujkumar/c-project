#include<stdio.h>

int main ()
{
  int a,date,b,month,c,year;
   a = 9;                                                //here you can enter the date you were born in
   printf("Hey,Can you guess my birthday? lets see");
   while(1){
        printf("\n Enter the date you think i was born in.");
        printf(" \n for eg. 1,14,30,etc \n");
        scanf("\n %d", &date);                        // user tries to guess the date in which programmer was born in

        if ( a==date)            //here the condition is specified and accordingly further statements are printed
        {
            printf("\n you are correct!");
            break;
        }
        else if( a > date)
        {
            printf("\n oops, my birthdate is bigger then %d try again",date);
        }
        else
        {
            printf("\n oops, My birthdate is smaller then %d try again", date);
        }
}

   b = 5;                                              //here you can enter the no. of month you were born in
    printf("\nNow guess the month i was born in ");
    while (1){
        printf("\n enter the no. of month you think i was born in");
        printf("\n for eg. 1,3,7 etc \n");
        scanf("\n %d", &month);                        //here user tries to guess the month
        switch(month)
        {
        case 1:printf("\n January");
        break;
        case 2:printf("\n February");
        break;
        case 3:printf("\n March");
        break;
        case 4:printf("\n April");
        break;
        case 5:printf("\n May");
        break;
        case 6:printf("\n June");
        break;
        case 7:printf("\n July");
        break;
        case 8:printf("\n august");
        break;
        case 9:printf("\n September");
        break;
        case 10:printf("\n October");
        break;
        case 11:printf("\n November");
        break;
        case 12:printf("\n December");
        break;
        default:printf ("\n wrong input");
        break;
    }
     if ( b==month)                        //here the condition is specified and accordingly further statements are printed
        {
            printf("\n you are right!");
            break;
        }
        else if( b > month)
        {
            printf("\n oops, my birthmonth is after %d try again ",month);
        }
        else
        {
            printf("\n oops, My birthmonth is before %d try again", month);
        }
}

  c = 2003;                              //here you can enter the year you were born in
  printf("\n now guess the year i was born in");

  while(1) {
    printf("\n enter the year you think i was born in \n let me give you a little hint. \n i was born between 1990-2010 ");
    printf("\n for eg. 1997,2000,2004 \n");
    scanf("\n %d", &year);               //user tries to guess the year

    if (c==year)                        //here the condition is specified and accordingly further statements are printed
    {
        printf("\n wow,you are absolutely true!");
        break;
    }
    else if (c > year)
    {
         printf("\n oops, my birtyear is ahead of    %d try again",year);
    }
    else
    {
            printf("\n oops, My birthyear is before then %d try again", year);
    }
}
//this is final statement where date,month and year is printed which user has guessed
  printf("\n congratulations!! you have guessed the correct birthdate which is =\n %d,  %d,  %d", date,month,year);
}
