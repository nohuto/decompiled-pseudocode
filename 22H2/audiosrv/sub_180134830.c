/*
 * XREFs of sub_180134830 @ 0x180134830
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1801345B0 @ 0x1801345B0 (sub_1801345B0.c)
 */

_QWORD *__fastcall sub_180134830(_QWORD *a1, char a2)
{
  sub_1801345B0(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
