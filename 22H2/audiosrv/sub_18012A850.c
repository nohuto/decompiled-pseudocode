/*
 * XREFs of sub_18012A850 @ 0x18012A850
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18012A7B8 @ 0x18012A7B8 (sub_18012A7B8.c)
 */

void *__fastcall sub_18012A850(void *a1, char a2)
{
  sub_18012A7B8((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_180033A70(a1);
  return a1;
}
