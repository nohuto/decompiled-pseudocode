/*
 * XREFs of unknown_libname_300 @ 0x1800E39E8
 * Callers:
 *     sub_1800E6D70 @ 0x1800E6D70 (sub_1800E6D70.c)
 *     sub_180133BDC @ 0x180133BDC (sub_180133BDC.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 *__fastcall unknown_libname_300(__int64 *a1)
{
  unsigned __int64 v1; // rdx

  v1 = a1[3];
  if ( v1 >= 8 )
    sub_1800472E0(*a1, 2 * v1 + 2);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  return a1;
}
