/*
 * XREFs of sub_1800BDC10 @ 0x1800BDC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800BDB5C @ 0x1800BDB5C (sub_1800BDB5C.c)
 */

_QWORD *__fastcall sub_1800BDC10(_QWORD *a1, char a2)
{
  sub_1800BDB5C(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
