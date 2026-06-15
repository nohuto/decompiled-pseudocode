/*
 * XREFs of sub_180109C50 @ 0x180109C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180109B18 @ 0x180109B18 (sub_180109B18.c)
 */

_QWORD *__fastcall sub_180109C50(_QWORD *a1, char a2)
{
  sub_180109B18(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
