#define NUM	1
#define IDENT 2
#define RNUM 3
#define ENUM 4
#define RENUM 5
#define MARK 6
#define TYPE 7
#include "t1yylex.c"

int main(){
	int code;
	while((code = yylex())){
		switch(code){
			case NUM:	printf("num: %s\n", yytext); break;
			case IDENT: printf("id: %s\n", yytext); break;
			case RNUM: printf("RNUM: %s\n", yytext); break;
			case ENUM: printf("ENUM: %s\n", yytext); break;
			case RENUM: printf("RENUM %s\n", yytext); break;
			case MARK: printf("MARK %s\n", yytext); break;
			case TYPE: printf("TYPE %s\n", yytext); break;
			}
	}


	return 0;
}