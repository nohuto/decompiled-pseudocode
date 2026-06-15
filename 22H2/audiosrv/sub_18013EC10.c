/*
 * XREFs of sub_18013EC10 @ 0x18013EC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_18013EC10(_QWORD *a1, char a2)
{
  *a1 = off_18014B3E0;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
