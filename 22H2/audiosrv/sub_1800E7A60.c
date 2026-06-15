/*
 * XREFs of sub_1800E7A60 @ 0x1800E7A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800E74C8 @ 0x1800E74C8 (sub_1800E74C8.c)
 */

void *__fastcall sub_1800E7A60(void *a1, char a2)
{
  sub_1800E74C8((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
