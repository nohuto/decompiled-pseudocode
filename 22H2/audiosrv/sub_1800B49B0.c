/*
 * XREFs of sub_1800B49B0 @ 0x1800B49B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800B494C @ 0x1800B494C (sub_1800B494C.c)
 */

_QWORD *__fastcall sub_1800B49B0(_QWORD *a1, char a2)
{
  sub_1800B494C(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
