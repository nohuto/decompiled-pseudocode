/*
 * XREFs of sub_1800E3940 @ 0x1800E3940
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004E954 @ 0x18004E954 (sub_18004E954.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

void *__fastcall sub_1800E3940(void *a1, char a2)
{
  sub_18004E954((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
