/*
 * XREFs of sub_180118B4C @ 0x180118B4C
 * Callers:
 *     unknown_libname_160 @ 0x180116EA4 (unknown_libname_160.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

BOOL __fastcall sub_180118B4C(void **a1)
{
  BOOL result; // eax

  result = sub_18006A148(*a1);
  *a1 = 0LL;
  return result;
}
