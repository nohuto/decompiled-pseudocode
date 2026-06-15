/*
 * XREFs of sub_180109BD0 @ 0x180109BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_180109BD0(_QWORD *a1, char a2)
{
  *a1 = off_18014ADD0;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
