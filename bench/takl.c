#include "fast.h"
int f_LISTN(int arglist);int LISTN(int N);
int f_TAKL(int arglist);int TAKL(int X,int Y,int Z);
int f_LISTN(int arglist){
int arg1;
arg1 = Fnth(0,arglist);
return(fast_inverse(LISTN(fast_convert(arg1))));
}
int f_TAKL(int arglist){
int arg1,arg2,arg3;
arg1 = Fnth(0,arglist);
arg2 = Fnth(1,arglist);
arg3 = Fnth(2,arglist);
return(fast_inverse(TAKL(fast_convert(arg1),fast_convert(arg2),fast_convert(arg3))));
}
int LISTN(int N){
int res;
if(CELLRANGE(N)) Fshelterpush(N);
if(Ffreecell() < 900) Fgbc();
res = ({int res;
if(fast_not(fast_numeqp(fast_convert(fast_immediate(0)),fast_convert(N))) != NIL){
res = Fcons(fast_inverse(N),fast_inverse(LISTN(fast_minus(fast_convert(N),fast_convert(fast_immediate(1))))));}
 else res = NIL;res;})
;
if(CELLRANGE(N)) Fshelterpop();
return(res);}
int TAKL(int X,int Y,int Z){
int res;
int temp1,temp2,temp3;
TAKLloop:
if(CELLRANGE(X)) Fshelterpush(X);
if(CELLRANGE(Y)) Fshelterpush(Y);
if(CELLRANGE(Z)) Fshelterpush(Z);
if(Ffreecell() < 900) Fgbc();
res = ({int res;
if(fast_not(fast_smallerp(fast_convert(Flength(Y)),fast_convert(Flength(X)))) != NIL){
res = Z;}
else{
{
temp1 = TAKL(fast_convert(fast_cdr(X)),Y,Z);
temp2 = TAKL(fast_convert(fast_cdr(Y)),Z,X);
temp3 = TAKL(fast_convert(fast_cdr(Z)),X,Y);
if(CELLRANGE(X)) Fshelterpop();
if(CELLRANGE(Y)) Fshelterpop();
if(CELLRANGE(Z)) Fshelterpop();
X = temp1;
Y = temp2;
Z = temp3;
goto TAKLloop;};}res;})
;
if(CELLRANGE(Z)) Fshelterpop();
if(CELLRANGE(Y)) Fshelterpop();
if(CELLRANGE(X)) Fshelterpop();
return(res);}
void init_tfunctions(void){
(deftfunc)("LISTN" , f_LISTN);
(deftfunc)("TAKL" , f_TAKL);
}void init_declare(void){
Fsetcatchsymbols(NIL);Fset_cdr(Fmakesym("LL-18"),LISTN(Fmakeint(18)));Fset_opt(Fmakesym("LL-18"),FAST_CONSTN);
Fset_cdr(Fmakesym("LL-12"),LISTN(Fmakeint(12)));Fset_opt(Fmakesym("LL-12"),FAST_CONSTN);
Fset_cdr(Fmakesym("LL-6"),LISTN(Fmakeint(6)));Fset_opt(Fmakesym("LL-6"),FAST_CONSTN);
Feval(Fcons(Fmakesym("DEFMACRO"),Fcons(Fmakesym("SHORTERP"),Fcons(Fcons(Fmakesym("X"),Fcons(Fmakesym("Y"),NIL)),Fcons(Fcons(Fmakesym("QUASI-QUOTE"),Fcons(Fcons(Fmakesym("<"),Fcons(Fcons(Fmakesym("LENGTH"),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("X"),NIL)),NIL)),Fcons(Fcons(Fmakesym("LENGTH"),Fcons(Fcons(Fmakesym("UNQUOTE"),Fcons(Fmakesym("Y"),NIL)),NIL)),NIL))),NIL)),NIL)))));
}