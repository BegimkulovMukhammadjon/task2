#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float q, w;
    int e;
    int a, s, d, z, x, c;
    //proga #2
    printf("\n\n\n\n(1) Dani chisla x, y. Proverit istinnost viskazivaniya: «Tochka s koordinatami (x, y) lejit v zashtrihovannoy oblasti».(Kvadrat minus romb, kvadrat minus krug i pervaya chetvert)");
    printf("\nVvedite koordinati tochki (x:y)(drobnuyu chast videlyat zapyatimi): ");
    scanf("%f:%f", &q, &w);



    if (
        (q > 2 - abs(w)) && (q < -2 + abs(w)) && (abs(q) < 2) && (abs(w) < 2)
        //naxodim formulu funktsiy po znacheniyu ix grafikof
        )
    {
        printf("Tochka vhodit v perviy risunok\n");//opredelyaem prinadlejnost
    }
    else {
        printf("Tochka ne vhodit v perviy risunok\n");
    };
    if (
        ( (q * q + w * w >= 4) && !(q >= 0 && w >= 0) ) && (abs(q) < 2) && (abs(w) < 2)
        )
    { printf("Tochka vhodit vo vtoroy risunok\n");
    }
    else {
        printf("Tochka ne vhodit vo vtoroy risunok\n");
    };



    //proga #4 printf("\n\n\n\n(1) Dani dlini storon dvuh treugolnikov. Opredelit podobni li eti treugolniki.");
    printf("\nVvedite dlinu vsex tryox storon pervogo treugolnika (cherez probel) ");
    scanf("%d",&a);
    scanf("%d", &s);
    scanf("%d", &d);


    if (a > s && a > d) //pervoe chislo naibolshee

    {
        if (d >= s) // 1>3>2
        {
            e = d;
            d = s;
            s = e; // menyayu mestami  2 i 3
            } // esli 1>2>3 , nichego menyat ne nujno
    }
    else if (s >= a && s >= d) //vtoroe chislo naibolshee
    {
        if (a >= d) //2>1>3
        {
            e = s;
            s = a;
            a = e; //menyayu mestami 2 i 1
        }
        else {    //2>3>1
                e = s;
                s = a;
                a = e; //menyayu mestami 2 i 1
                e = d;
                d = s;
                s = e; // menyayu mestami 2 i 3
        }


}
else { //tretye chislo naibolshee
        if (a >= s) //3>1>2
        {
            e = d;
            d = a;
            a = e; //menyayu mestami 3 i 1
            e = d;
            d = s;
            s = e; // menyayu mestami 2 i 3
        }
        else {//3>2>1
                e = d;
                d = a;
                a = e; //menyayu mestami 3 i 1
        }


}
z = a; x = s; c = d;
 printf("\n %d %d %d",z,x,c); //proverochka, UBRAT V GOTOVOM KODE!!!
printf("\nVvedite dlinu vsex tryox storon vtorogo treugolnika (cherez probel) ");
scanf("%d", &a);
scanf("%d", &s);
scanf("%d", &d);
if (a > s && a > d) //pervoe chislo naibolshee
{
    if (d > s) // 1>3>2
    {
        e = d;
        d = s;
        s = e; // menyayu mestami 2 i 3
    }
    // esli 1>2>3 , nichego menyat ne nujno

}
else if
    (s > a && s > d) //vtoroe chislo naibolshee
    {
        if (a > d) //2>1>3
        {
            e = s;
            s = a;
            a = e; //menyayu mestami 2 i 1
        }
        else {    //2>3>1
                e = s;
                s = a;
                a = e; //menyayu mestami 2 i 1
                e = d;
                d = s;
                s = e; // menyayu mestami 2 i 3
        }


}
else { //tretye chislo naibolshee

        if (a > s) //3>1>2
        {
            e = d;
            d = a;
            a = e; //menyayu mestami 3 и 1
            e = d;
            d = s;
            s = e; // menyayu mestami 2 и 3
        }
    else {//3>2>1
         e = d;
         d = a;
         a = e; //menyayu mestami 3 i 1

    }


}

printf("\n %d %d %d \n",a,s,d); //ppoverka ,UBRAT V GOTOVOM KODE!!!
if (float(a)/ float(z) == float(s) / float(x) && float(s) / float(x) == float(d) / float(c))
{
    printf("Podobni");
}
else {
    printf("Ne podobni");
}


//proga #6-1
printf("\n\n\n\n(1) Dano tseloe chislo v diapazone 20–69, opredelyayushee vozrast v godax). Vivesti stroku-opisanie ukazannogo vozrasta, obespechiv pravilnoe soglasovanie chisla so slovom «god», naprimer: 20 — «dvadsat let», 32 —«tritsat dva goda», 41 — «sorok odin god».");
printf("Vvedite chislo s  20-69 ");
scanf("%d", &e);
switch (e/10)
{
case 2: printf("dvadsyat");
    break;
case 3: printf("tridtsat");
    break;
case 4: printf("sorok");
    break;
case 5: printf("pyatdesyat");
    break;
case 6: printf("shestdesyat");
    break;
}
switch (e % 10)
{
case 1: printf("odin god");
    break;
case 2: printf("dva");
    break;
case 3: printf("tri");
    break;
case 4: printf("chetiri");
    break;
case 5: printf("pyat let");
    break;
case 6: printf("shest");
    break;
case 7: printf("sem");
    break;
case 8: printf("vosem");
    break;
case 9: printf("devyat");
    break;
}
switch (e % 10)
{
    case 1: printf("god"); break;
    case 2:
    case 3:
    case 4: printf("goda"); break;
    defoult:printf("let");
}

return 0;
}
