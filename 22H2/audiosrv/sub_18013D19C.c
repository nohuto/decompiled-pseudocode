/*
 * XREFs of sub_18013D19C @ 0x18013D19C
 * Callers:
 *     sub_1800752C0 @ 0x1800752C0 (sub_1800752C0.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18013D0B0 @ 0x18013D0B0 (sub_18013D0B0.c)
 */

void *__fastcall sub_18013D19C(void *a1, char a2)
{
  sub_18013D0B0((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
