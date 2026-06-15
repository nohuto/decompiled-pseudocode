/*
 * XREFs of sub_1801201F0 @ 0x1801201F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180120148 @ 0x180120148 (sub_180120148.c)
 */

void *__fastcall sub_1801201F0(void *a1, char a2)
{
  sub_180120148((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
