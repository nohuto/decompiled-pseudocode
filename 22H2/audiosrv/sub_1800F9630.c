/*
 * XREFs of sub_1800F9630 @ 0x1800F9630
 * Callers:
 *     sub_1800F950C @ 0x1800F950C (sub_1800F950C.c)
 * Callees:
 *     sub_1800040C4 @ 0x1800040C4 (sub_1800040C4.c)
 */

void __fastcall sub_1800F9630(void **a1, void *a2)
{
  void *v4; // rcx

  v4 = *a1;
  if ( v4 )
    sub_1800040C4(v4);
  *a1 = a2;
}
