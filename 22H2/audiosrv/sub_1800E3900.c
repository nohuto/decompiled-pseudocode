/*
 * XREFs of sub_1800E3900 @ 0x1800E3900
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800E3474 @ 0x1800E3474 (sub_1800E3474.c)
 */

void *__fastcall sub_1800E3900(void *a1, char a2)
{
  sub_1800E3474((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
