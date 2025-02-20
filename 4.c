#include <stdio.h>
#include <string.h>

 struct Book {
 char title [200];
 char author [40];
 double price;
};
int main(){
struct Book myBook;
strcpy(myBook.title,"The Master mind");
strcpy(myBook.author,"R.M.Jase-el");
myBook.price = 15.36;
printf("Book title: %s\n",myBook.title);
printf("author: %s\n",myBook.author);
printf("price:$%.2f\n",myBook.price);

}

