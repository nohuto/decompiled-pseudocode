/*
 * XREFs of sub_1801324A0 @ 0x1801324A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_1800691D8 @ 0x1800691D8 (sub_1800691D8.c)
 */

void *__fastcall sub_1801324A0(void *a1, char a2)
{
  sub_1800691D8((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_180033A70(a1);
  return a1;
}
