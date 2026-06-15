/*
 * XREFs of sub_1800F7D20 @ 0x1800F7D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_1800F7D20(_QWORD *a1, char a2)
{
  *a1 = &off_180148180;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
