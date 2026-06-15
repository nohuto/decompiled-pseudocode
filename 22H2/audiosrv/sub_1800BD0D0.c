/*
 * XREFs of sub_1800BD0D0 @ 0x1800BD0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180060928 @ 0x180060928 (sub_180060928.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_1800BD0D0(_QWORD *a1, char a2)
{
  sub_180060928(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
