/*
 * XREFs of sub_1800BF120 @ 0x1800BF120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800BF070 @ 0x1800BF070 (sub_1800BF070.c)
 */

void *__fastcall sub_1800BF120(void *a1, char a2)
{
  sub_1800BF070((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
