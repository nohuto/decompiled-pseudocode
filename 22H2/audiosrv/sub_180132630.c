/*
 * XREFs of sub_180132630 @ 0x180132630
 * Callers:
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 */

void **__fastcall sub_180132630(void **a1, char a2)
{
  *a1 = &off_1801480F0;
  sub_180033A70(a1[2]);
  a1[2] = 0LL;
  if ( (a2 & 1) != 0 )
    sub_180033A70(a1);
  return a1;
}
