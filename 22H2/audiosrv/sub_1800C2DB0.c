/*
 * XREFs of sub_1800C2DB0 @ 0x1800C2DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800C2AC4 @ 0x1800C2AC4 (sub_1800C2AC4.c)
 */

void *__fastcall sub_1800C2DB0(void *a1, char a2)
{
  sub_1800C2AC4((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
