/*
 * XREFs of sub_18013DFE8 @ 0x18013DFE8
 * Callers:
 *     sub_180075330 @ 0x180075330 (sub_180075330.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18013DF30 @ 0x18013DF30 (sub_18013DF30.c)
 */

void *__fastcall sub_18013DFE8(void *a1, char a2)
{
  sub_18013DF30((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
