/*
 * XREFs of sub_18006A160 @ 0x18006A160
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 */

_QWORD *__fastcall sub_18006A160(_QWORD *a1, char a2)
{
  *a1 = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_180033A70(a1);
  return a1;
}
