/*
 * XREFs of sub_1800D1B48 @ 0x1800D1B48
 * Callers:
 *     sub_180074710 @ 0x180074710 (sub_180074710.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800D19BC @ 0x1800D19BC (sub_1800D19BC.c)
 */

void *__fastcall sub_1800D1B48(void *a1, char a2)
{
  sub_1800D19BC((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
