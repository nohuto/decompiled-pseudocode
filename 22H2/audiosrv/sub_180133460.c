/*
 * XREFs of sub_180133460 @ 0x180133460
 * Callers:
 *     sub_1801333A0 @ 0x1801333A0 (sub_1801333A0.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_1800B6B28 @ 0x1800B6B28 (sub_1800B6B28.c)
 */

void *__fastcall sub_180133460(void *a1, char a2)
{
  sub_1800B6B28((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_180033A70(a1);
  return a1;
}
