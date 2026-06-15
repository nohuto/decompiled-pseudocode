/*
 * XREFs of sub_1800B82B0 @ 0x1800B82B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_1800B82B0(_QWORD *a1, char a2)
{
  *a1 = off_1801467A0;
  sub_180006A30((volatile signed __int32 *)(a1[1] - 24LL));
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
