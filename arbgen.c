#include "acb_dirichlet.h"
int main(){arb_t r;slong i,d=2057;fmpz_t a;fmpz_init(a);arb_init(r);for(i=1;i<=3140;i++){fmpz_set_ui(a,i);acb_dirichlet_hardy_z_zero(r,a,d*3.3333);arb_printn(r,d,ARB_STR_NO_RADIUS);printf("\n");}}
