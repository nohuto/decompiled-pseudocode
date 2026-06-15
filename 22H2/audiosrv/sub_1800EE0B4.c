/*
 * XREFs of sub_1800EE0B4 @ 0x1800EE0B4
 * Callers:
 *     sub_1800E9878 @ 0x1800E9878 (sub_1800E9878.c)
 *     sub_1800E9E9B @ 0x1800E9E9B (sub_1800E9E9B.c)
 *     sub_1800EA12B @ 0x1800EA12B (sub_1800EA12B.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800EA8B0 @ 0x1800EA8B0 (sub_1800EA8B0.c)
 */

__int64 __fastcall sub_1800EE0B4(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  unsigned __int64 v4; // rdx

  v2 = a2[8];
  if ( v2 )
    sub_1800EA8B0(v2);
  v4 = a2[7];
  if ( v4 >= 8 )
    sub_1800472E0(a2[4], 2 * v4 + 2);
  a2[6] = 0LL;
  a2[7] = 7LL;
  *((_WORD *)a2 + 16) = 0;
  return sub_1800472E0((__int64)a2, 0x48uLL);
}
