/*
 * XREFs of sub_1800F9E98 @ 0x1800F9E98
 * Callers:
 *     sub_1801352FC @ 0x1801352FC (sub_1801352FC.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 */

void **__fastcall sub_1800F9E98(void **a1, void **a2)
{
  if ( a1 != a2 )
  {
    sub_18002A504(a1, *a2);
    *a2 = 0LL;
  }
  return a1;
}
