#ifndef SAH_H_INCLUDED
#define SAH_H_INCLUDED
typedef struct{
char c1, c2;
	int r1, r2;
}move;

typedef struct{
	char table[8][8];
	move mv;
}config;

move * all_moves(char table[][8], char tomove);


#endif // SAH_H_INCLUDED
