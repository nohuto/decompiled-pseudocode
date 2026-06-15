/*
 * XREFs of sub_1800BDBD0 @ 0x1800BDBD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800BDAD4 @ 0x1800BDAD4 (sub_1800BDAD4.c)
 */

_QWORD *__fastcall sub_1800BDBD0(_QWORD *a1, char a2)
{
  sub_1800BDAD4(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
