/*
 * XREFs of sub_1800E3A30 @ 0x1800E3A30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004F040 @ 0x18004F040 (sub_18004F040.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

void *__fastcall sub_1800E3A30(void *a1, char a2)
{
  sub_18004F040((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
