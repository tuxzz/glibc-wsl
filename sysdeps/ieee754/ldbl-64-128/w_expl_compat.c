#include <math_ldbl_opt.h>
#undef weak_alias
#define weak_alias(n,a)
#include <sysdeps/ieee754/ldbl-128/w_expl_compat.c>
#if LIBM_SVID_COMPAT
long_double_symbol (libm, __expl, expl);
#endif
