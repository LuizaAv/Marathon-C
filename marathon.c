#include <stdio.h>

//1. Հայտարարել int տիպի փոփոխական, որի արժեքը մուտքագրվելու է օգտվողի կողմից։ 
/*	int main()
{
	int num;
	printf("Please enter an integer \n");
	scanf("%d", &num);
	printf("Entered number is %d \n", num);
}*/


//2. Հայտարարել double տիպի փոփոխական, որի արժեքը մուտքագրվելու է օգտվողի կողմից։
/*
	int main()
{
	double num;
	printf("Please enter a  double num \n");
	scanf("%lf", &num);
	printf("Entered number is %f \n", num);

}*/

//3.Հայտարարել char տիպի փոփոխական, որի արժեքը մուտքագրվելու է օգտվողի կողմից
/*
int main()
{
	char a;
	printf("Please enter a char \n", a);
	scanf("%c", &a);
	printf("The endered char is %c \n", a);

}*/

// 4. Գրեl ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երկու ամբողջ թիվ և պահել դրանց գումարը “total” անունով փոփոխականում:

/*int main() {
	int num1;
	int num2;
	int total = 0;
	printf("Please enter first number \n");
	scanf("%d", &num1);
	printf("Please enter second number \n");
	scanf("%d", &num2);
	printf("The summery of numbers' is %d \n", num1 + num2);

}*/

// 5. Գրեl ծրագիր, որը թույլ կտա օգտվողին մուտքագրել իր տարիքը և պահել այն “age” անունով փոփոխականում։ Էկրանին պետք է տպի հետևյալ ֆորմատով՝ « "You are [age] years old."։
/*
int main()
{
	int age;
	printf("Please enter your age \n");
	scanf("%d", &age);
	printf("You are %d years old \n", age);
}*/


// 6. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել որոշակի x ամբողջ թվային փոփոխականի արժեքը և կտպի էկրանին (4 * x + 21 * x * x - 12) արտահայտության արդյունքը։
/*
int main()

{
	int x;
	printf("Please enter an integer variable \n");
	scanf("%d", &x);
	printf("%d \n", 4 * x + 21 * x * x -12);
}*/

//7. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել որոշակի x իրական թվային փոփոխականի արժեքը և կտպի էկրանին (x / (5 + 2) + 30 * x - 51 ) արտահայտության արդյունքը։

/*
int main()

{
	float x;
	printf("Please enter a real number variable \n");
	scanf("%f", &x);
	printf("%lf \n", (x / (5+2)) + 30 * x - 51);
}*/


// 8. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել որոշակի x և y ամբողջ թվային փոփոխականների արժեքները և կտպի էկրանին (x * y + 21 * x / y - 200) արտահայտության արդյունքը:

/*
int main()

{
	int x;
	int y;
	printf("Please enter an integer \n");
	scanf("%d", &x);
	printf("Please enter next integer \n");
	scanf("%d", &y);
	printf("%d \n", (x * y + 21 * x / y -200) );
}*/

// 9. Ստեղծել sym անունով char տիպի փոփոխական։ Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել sym անունով փոփոխականի արժեքը, որը լինելու է լատինական այբուբենի մեծատառ։ Տպել էկրանին մուտքագրված տառին համապատասխանող փոքրատառը։
/*
int main()
{
	char sym;
	printf("Please enter an Uppercase letter \n");
	scanf("%c", &sym);
	printf("The lowercase of entered letter is %c \n", sym + 32);
}*/

// 10 . Ստեղծել sym անունով char տիպի փոփոխական։ Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել sym անունով փոփոխականի արժեքը։ Տպել էկրանին true եթե մուտքագրված սիմվոլը թվանշան է հակառակ դեպքում տպել false:

/*
int main()
{
	char sym;
	printf("Please enter a character \n");
	scanf("%c", &sym);
	if(sym >= 48 && sym <= 5``{
		printf("True \n");
	}else{
		printf("False \n");
	}
}*/


  
// 11. Գրել  ծրագիր, որը թույլ է տալիս օգտագործողին մուտքագրել տեքստ և հաշվում է տեքստի ձայնավորների և բաղաձայնների քանակը: Տպում է էկրանին քանակը։

/*
int main()
{
	char array[20];
	int countVowel = 0;
	int countConst = 0;
	printf("Please enter characters \n");
	scanf("%s",&array);
	
	for(int i = 0; i < sizeof(array)/sizeof(array[0]); ++i){
		if(array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' || array [i] == 'U' || array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u'){
		++countVowel;
		}else if(array[i] >= 65 && array[i] <= 122){
			++countConst;
		}
	}

	printf("You have entered %d vowels and %d consonants \n", countVowel, countConst);
}
*/

// 12.Գրել  ծրագիր, մուտքագրված տողի համար ստուգում է, թե արդյոք այն պալինդրոմ է (կարդում է նույնը սկզբից և վերջից): 
/*
#include <string.h>
#include <stdbool.h>
int main()

{
	char str[5] = {'a','a','s','a', 'a'};
	bool flag = false;
	for(int i = 0; i < strlen(str)/2 ; ++i){
		if(str[i] == str[strlen(str)-i-1]){
			flag = true;
		}else{
			printf("The text is not palindrome \n");
			return 0;
		}
	}
	if(flag){
		printf("The text is palindrome \n ");
	}
}*/

// 13. Գրել  ծրագիր, որը փոխակերպում է Ցելսիուսով մուտքագրված ջերմաստիճանը Ֆարենհեյթի՝ օգտագործելով «(Celsius * 9/5) + 32» բանաձևը և տպում է էկրանին  արդյունքը՝ օգտագործելով «printf»:

/*
int main(){
	int num = 0;
	printf("Please enter the num in Celsius \n");
	scanf("%d", &num);
	printf("The number in Farenheit is %d \n", num * (9/5) +32);
	
}
*/

/* 14. Գրել ծրագիր, թույլ է տալի օգտվողին մուտքագրել իր տարիքը և տպում է էկրանին  հաղորդագրություն հետևյալ պայմանների հիման վրա.
  a.Եթե տարիքը 18-ից պակաս է,  տպեք էկրանին «Դուք անչափահաս եք»:
   b.Եթե տարիքը 18-ից 65 տարեկան է (ներառյալ), տպեք էկրանին  «Դուք չափահաս եք»:
   c. Եթե տարիքը 65-ից բարձր է, տպեք էկրանին  «Դու տարեց քաղաքացի ես»: */
/*
int main() {
	int age;
	printf("Please enter your age \n");
	scanf("%d", &age);
	if(age < 18){
		printf("Your are not adult \n");
	}else if(age >= 18 && age <= 65){
		printf("You are an adult \n");
	}else{
		printf("You are old citizen\n");
	}

}*/

/* 15. Գրել ծրագիր, որը կարդում է աշակերտի ստացած գնահատականները առարկայից և ցուցադրում համապատասխան գնահատականը՝  ըստ հետևյալ պայմանների.
    - Գնահատականը եթե 90-ից 100 (ներառյալ)՝ A դասարան
    - Գնահատականը եթե 80-ից 89-ը՝ B դասարան
    - Գնահատականը եթե 70-ից 79-ը՝ C դասարան
    - Գնահատականը եթե 60-ից 69-ը՝ D դասարան
    - 60-ից ցածր գնահատականներ. Դասարան E */

/*
int main()
{
	int x;
	printf("Enter your rate \n");
	scanf("%d", &x);
	if(x >= 90 && x <= 100){
		printf(" A class \n");
	}else if(x >= 80 && x <= 89){
		printf(" B class \n");
	}else if(x >= 70 && x <= 79){
		printf(" C class \n");
	}else if(x >= 60 && x <= 69){
		printf(" D class \n");
	}else if( x < 60){
		printf(" E class \n");
	}
}
*/

 /* 16. Գրեք ծրագիր, որը ստանում է մարդու հասակը (սանտիմետրերով) և ստուգում, թե արդյոք դա իրավասու է որոշակի զբոսանքի զվարճանքի այգում: Ուղևորության համար անհրաժեշտ է նվազագույնը 150 սմ բարձրություն: Ցուցադրել «Դուք համապատասխանում եք»: եթե հասակը մեծ է կամ հավասար է 150 սմ։ Հակառակ դեպքում ցուցադրեք «Ներողություն, դուք չեք համապատասխանում»:
*/
/*
int main()
{
	int height;
	printf("Please enter your height \n");
	scanf("%d",&height);
	if(height >= 150){
		printf("You are appropriate \n");
	}else{
		printf("Sorry! You aren't appropriate \n");
	}
}*/

    
// 17. Գրել ծրագիր, որը էկրանին կտպի A && B | |  !B ^ A Բուլյան արտահայտության ճշտության աղյուսակը։

/*
#include <stdbool.h>
int main() 
{
	int A = 5;
	int B = 4;
	bool first = A && B;
	bool second = !B;
	bool third = second ^ A;
	bool forth = first || third;
	printf("A && B -> %b !B -> %b !B ^ A -> %b A && B || !B ^ A -> %b \n", first, second, third, forth);
}*/


// 18.  Գրել ծրագիր, որը էկրանին կտպի A||B && !(B||A) Բուլյան արտահայտության ճշտության աղյուսակը։
/*
#include <stdbool.h>
int main()
{
	int A = 5;
	int B = 4;
	bool first = B||A;
	bool second = !first;
	bool third = B && second;
	bool forth = A||third;
	printf("B || A -> %b  !(B||A) -> %b  B && !(B || A) -> %b  A || B && !(B||A) -> %b \n", first, second, third, forth);
}
*/


// 19.  Գրել ծրագիր, որը էկրանին կտպի !(A && B)|| A && !B||A Բուլյան արտահայտության ճշտության աղյուսակը։
/*
#include <stdbool.h>
int main()
{
	int A = 5;
	int B = 4;
	bool first = A && B;
	bool second = !first;
	bool third = !B;
	bool forth = A && third;
	bool fifth = second || forth;
	bool sixth = fifth || sixth;
	printf("A && B -> %b, !(A && B) -> %b !B %b  A && !B -> %b !(A && B) || A && !B -> %b  !(A && B) || A && !B || A -> %b\n", first, second, third, forth, fifth, sixth);
}*/

/*
Վերը նշված երեք խնդիրների մեջ ճշտության աղյուսակը կարող էք տպել հետևյալ օրինակի համաձայն.
 A && B արտահայտության համար էկրանին տպել հետևյալ տեսքով
 A -> false    B -> false    A && B  -> false
 A -> false    B -> true    A && B  -> false
 A -> true    B -> false    A && B  -> false
 A -> true    B -> true    A && B  -> true*/


// 20. Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել թիվ, ստուգել և տպել՝ արդյոք թիվը զույգ է, թե կենտ:
/*
int main() 
{
	int x;
	printf("Please enter a number \n");
	scanf("%d", &x);
	if(x % 2 == 0){
		printf("%d is even \n", x);
	}else{
		printf("%d is odd \n", x);
	}
}*/


// 21. Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել տառ, ստուգել և տպել տառը բաղաձայն է, թե ձայնավոր:
/*
int main()
{
	char x;
	printf("Please enter a number \n");
	scanf("%c", &x);
	if(x == 65 || x == 97 || x == 69 || x == 101 || x == 73 || x == 105 || x == 79 || x == 111 || x == 85 || x == 117){
	printf("%c is vowel \n", x);
}else{
	printf("%c is consonant \n", x);
}
}
*/

// 22. Գրեք ծրագիր, թույլ կտա օգտվողին մուտքագրել երկու թիվ, ստուգել և տպել դրանցից ամենամեծը: 
/*
int main(){
	int num1;
	int num2;
	printf("Please enter a number \n");
	scanf("%d", &num1);
	printf("Please enter second number \n");
	scanf("%d", &num2);
	if(num1 > num2){
		printf("The greatest is %d \n", num1);
	}else{
		printf("The greatest is %d \n", num2);
	}
}*/



// 23. Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր, եթե երեք թվերից 2-ը հավասար են տպել՝ այդ երեքից ամենամեծ թիվը:
/*
int main()
{
	int num1;
	int num2;
	int num3;
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	if(num1 == num2){
		if(num1 > num3){
			printf("The greatest number is %d \n",num1 );
		}else{
			printf("The greatest number is %d \n", num3);
		}
	}else if(num2 == num3){
		if(num1 < num2){
			printf("The greatest number is %d \n", num2);
		}else{
			printf("The greatest number is %d \n", num1);
		}
	}else if(num1 == num3){
		if(num1 > num2){
			printf("The greatest number is %d \n", num1);
		}else{
			printf("The greatest number is %d \n", num2);
		}	
	}
}
*/

//24. Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել չորս թիվ, եթե չորս թվերի գումարը հավասար է 0-ի տպել ամենափոքր թիվը:
/*

int main(){
	int num1;
	int num2;
	int num3;
	int num4;

	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	
	int min = num1;
	if(min > num2){
		min = num2;
	}	

	if(min > num3){
		min = num3;
	}

	if(min > num4){
		min = num4;
	}

	printf("%d is the smallest number \n", min);
}*/


//25. Գրել ծրագիր, որը օգտվողին թույլ է տալիս մուտքագրել տարի և տպում է՝ տարին նահանջ տարի է, թե ոչ:
/*
int main()
{
	int year;
	scanf("%d", &year);

	if(year % 4 == 0 && year % 100 != 0){
			printf("The %d is leap year \n", year);
	}else if(year % 400 == 0){
			printf("The %d is leap year \n", year);
	}else{
		printf("The %d isn't leap year \n", year);
	}
}
*/	

// 26. Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր և տպում է այդ թվերի ամենամեծ ընդհանուր բաժանարարը:
/*
int main()
{
	int num1;
	int num2;
	int num3;
	scanf("%d %d %d",&num1,&num2,&num3);
	
	int min = num1;
	if(min > num2){
		min = num2;
	}
	if(min > num3){
		min = num3;
	}
	
	printf("%d \n", min);

	while(min >= 1){
		if(num1 % min == 0 && num2 % min == 0 && num3 % min == 0){	
			printf("%d \n", min);
			return 0;
		}
		min--;
	}	
}
*/

/* 27. Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թիվ, եթե թվի հինգերորդ բիթը եղավ 0 սարքում է մեկ և տպում էկրանին հակառակ դեպքում թիվը պարզապես տպել էկրանին։
*/
/*
int main(){
	int x;
	scanf("%d",&x);
	if(x >> 5 & 1){
		int new = (1 << 5) || x;
		printf("%d \n", new); 
	}else{
		printf("%d \n", x);
	}
}*/

  
// 28. Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել երկու ամբողջ թիվ, ստուգեք թվերը կարող են իրար վրա բաժանվել թե ոչ։
/*
int main()
{
	int num1;
	int num2;

	scanf("%d %d", &num1, &num2);
	if(num1 % num2 == 0 || num2 % num1 == 0){
		printf("The numbers are divisible into each other \n");
	}else{
		printf("The numbers aren't divisible into each other \n");
	}
}*/	

/* 29. Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել երկու սիմվոլները, ստուգեք արդյոք սիմվոլները արտահայտում են նույն տառի մեծատառ և փոքրատառ տեսքերը, թե՛ ոչ։
*/
/*
int main()
{
	char sym;
	char sym1;
	scanf("%c %c", &sym, &sym1);
	int dif;

	if(sym > sym1){
		dif = sym - sym1;
	}else{
		dif = sym1 - sym;
	}

	if(dif == 32){
		printf("The numbers are the same \n");
	}else{
		printf("The numbers are different \n");
	}
}*/


// 30 . Գրեք ծրագիր, որը էկրանին տպում է 0-ից 100 թվերը։
/*
int main()
{
	int start = 0;
	while(start != 101){
		printf("%d \n", start);
		++start;
	}
}
*/

// 31. Գրեք ծրագիր, որը էկրանին տպում է միայն 0-ից 100-ի կենտ թվերը:
/*
int main()
{
	int start = 0;
	while(start != 101){
		if(start % 2 != 0){
			printf("%d \n", start);
		}
		++start;
	}
}*/


/* 32. Գրեք ծրագիր, որն օգտվողին թույլ է տալիս մուտքագրել 12-ից մեծ ամբողջ թիվ և տպել այդ թիվը թվանշանների հակառակ հերթականությամբ։
*/
/*
int main()
{
	int num;
	int reverse;
	int digit;

	scanf("%d", &num);
	if(num > 12){
		while(num != 0){
			int digit = num % 10;
			reverse = reverse * 10 + digit;
			num = num / 10;
		}
	}
	printf("%d \n", reverse);
}
*/


// 33. Գրեք ծրագիր, որն օգտվողին թույլ է տալիս մուտքագրել թիվ և էկրանին տպում է այդ թվի թվանշանների գումարի արդյունքը:
/*
int main()
{
	int num;
	int digit;
	int sum = 0;
	scanf("%d",  &num);
	while(num != 0){
		digit = num % 10;
		sum += digit;
		num = num / 10;
	}
	printf("%d \n", sum);
}*/


/* 34. Գրեք ծրագիր, որը գեներացնում է Ֆիբոնաչիի հաջորդականությունը մինչև սահմանված թիվը օգտագործելով «do-while» օղակը: Խնդրեք օգտվողին մուտքագրել թիվը և ցուցադրել Ֆիբոնաչիի հաջորդականությունը:
*/
/*
int main()
{
	int num;
	scanf("%d", &num);
	
	int firstNum = 0;
	int currentNum = 1;
	int nextNumber = 1;
	int count = 1;
	
	do{
		++count;
		printf("%d \n", firstNum);
		currentNum = nextNumber;
		nextNumber = firstNum;
		firstNum = (currentNum + firstNum);

		
	}while(count <= num);

}
*/


// 35. Գրեք ծրագիր, որը տպում է էկրանին տվյալ թվի բազմապատկման աղյուսակը:Հաշվի առեք, որ թիվը պետք է դրական լինի։
/*
int main()
{
	int num;
	scanf("%d", &num);
	int i = 1;
	if(num > 0){
		while(i <= 10){
		printf("%d * %d \n", num, i);
		++i;
		}
	}
}
*/

// 36. Գրեք ծրագիր, որը հաշվարկում է բոլոր զույգ թվերի գումարը երկու տրված թվերի միջև։

/*
int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum = 0;

	int max;
	int min;

	if((num1 - num2)>0){
		min = num2;
		max = num1;
	}else{
		min = num1;
		max = num2;
	}

	while(min <= max){
		if((min) % 2 == 0){
			sum += min;
		}
		min++;
	}
	printf("%d \n", sum);
}
*/


/* 37. Գրեք ծրագիր, որը տպում է թվերի օրինաչափություն։ Խնդրեք օգտվողին մուտքագրել տողերի քանակը և տպեք էկրանին հետևյալ կերպ.

	  1	
  22 
  333
  4444  */
/*
int main()
{
	int num;
	scanf("%d",&num);
	int line;
	
	for(int i = 1; i <= num; ++i){
		for(line = 1; line <= i; ++line){
			printf("%d", i);
		
		}
		printf("\n");
	}
}*/


/* 38.     
Գրեք ծրագիր, որը էկրանին տպում է ‘*’ սիմվոլների միջոցով քառակուսու պատկերը։ Քառակուսու կողի երկարությունը մուտքագրվում է օգտվողի կողմից։ Ծրագիրը գրելուց օգտվեք ցիկլերից։ Օրինակ 5 մուտքագրելու դեպքում էկրանին կհայտնվի հետևյալ պատկերը։
 *   *   *   *   *
 *                 *
 *                 *
 *                 *
 *   *   *   *   *
*/
/*
int main()
{
	int entered;
	int i, j;

	scanf("%d", &entered);
	for(i = 1; i <= entered; i++){
		for(j = 1; j <= entered; j++){
			if(i==1 || i==entered || j==1 || j==entered){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

*/

/* 39.
Գրեք ծրագիր, որը էկրանին տպում է ‘*’ սիմվոլների միջոցով հավասարասրուն ուղանկյուն եռանկյան պատկերը։ Եռանկյան սրունքի երկարությունը մուտքագրվում է օգտվողի կողմից։ Ծրագիրը գրելուց օգտվեք ցիկլերից։ Օրինակ 5 մուտքագրելու դեպքում էկրանին կհայտնվի հետևյալ պատկերը։
 * 
 *   * 
 *   *   *
 *   *   *   *
 *   *   *   *   *
*/

/*
int main()
{
	int entered;
	scanf("%d",&entered);
	int i, j;

	for(i=1; i<= entered; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}
*/ 
 

 /* 40. Գրեք ծրագիր, որը հիշեցնում է գուշակության խաղը։ Պահեք պատահական թիվ 1-ից 100-ի միջև, օգտագործողին թույլ տվեք մուտքագրել թիվ և տրամադրել կարծիք այն մասին, թե արդյոք գուշակությունը չափազանց բարձր է, թե շատ ցածր, մինչև ճիշտ թիվը գուշակվի:
*/
/*
int main()
{
	int num = rand() % 100+1;
	int entered;
	scanf("%d", &entered);
	if(entered == num){
		printf("You guess the number\n");
	}else{
		printf("You don't guess the number \n");
	}
}
*/


/*41.
Գրեք ծրագիր, որը նման է պարզ հաշվիչի։ Հորդորեք օգտվողին մուտքագրել երկու թիվ և գործողություն (+, -, *, /) և ցուցադրել արդյունքը: Շարունակեք օգտատիրոջից ստանալ սիմվոլներ, քանի դեռ չի մուտքագրել Q(դուս գալ ծրագրից) սիմվոլը:
*/
/*
int main()
{
	int num1;
	int num2;
	char sym;
	printf("Please enter 2 numbers \n");
	scanf("%d %d", &num1, &num2);
	printf("Enter a symbol /,*,+ or - \n");
	scanf("%c ", &sym);

	switch(sym)
	{
		case '/':
		printf("%d", num1 / num2);
		break;
		case '+':
		printf("%d", num1 + num2);
		break;
		case '-':
		printf("%d", num1 - num2);
		break;
		case '*':
		printf("%d", num1 * num2);
		break;
		default:
		printf("Not defined value \n");
	}
}
*/

// 42, Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել և թվերի միջև կկատարի AND գործողություն և կտպի էկրանին արդյունքը:

#include <stdbool.h>
int main()
{
	int num1;
	int num2;
	bool a;
	scanf("%d %d", &num1, &num2);
	a = num1 & num2;
	printf("%d \n", a);
}


/*
Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել և թվերի միջև կկատարի OR գործողություն և կտպի էկրանին արդյունքը:

Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և թվերի միջև կկատարի XOR գործողություն և կտպի էկրանին արդյունքը:

Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և որոշակի դիրքերով տեղափոխում է ամբողջ թվի բիթերը ձախ և ցուցադրում արդյունքը:

Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և հաշվում է տվյալ թվի բիթերի 0-ների և 1-երի քանակները:


Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել char-երի զանգված մուտքագրում և տպում այն հակառակ հերթականությամբ։

Գրեք ծրագիր, որը գտնում է տողի երկարությունը՝ առանց գրադարանի ստանդարտ ֆունկցիաների օգտագործման։

Գրեք ծրագիր,  որը օգտվողին թույլ կտա մուտքագրել char-երի զանգված և կհեռացնի բոլոր բացատ նիշերը(пробел) տվյալ տողից։

Գրեք ծրագիր,  որը օգտվողին թույլ կտա մուտքագրել char-երի զանգված և դուրս կբերի բոլոր թվերը:
*/
