/*
 * XREFs of sub_1800BF0E0 @ 0x1800BF0E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800BEF90 @ 0x1800BEF90 (sub_1800BEF90.c)
 */

void *__fastcall sub_1800BF0E0(void *a1, char a2)
{
  sub_1800BEF90((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
