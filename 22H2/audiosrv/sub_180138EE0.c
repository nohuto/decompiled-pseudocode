/*
 * XREFs of sub_180138EE0 @ 0x180138EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_180138EE0(_QWORD *a1, char a2)
{
  *a1 = off_18014B3A0;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
