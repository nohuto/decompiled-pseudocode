/*
 * XREFs of HalpHvInitSystem @ 0x1409A1320
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvInitDiscard @ 0x140A6EDBC (HalpHvInitDiscard.c)
 */

__int64 __fastcall HalpHvInitSystem(int a1)
{
  if ( a1 == 7 )
    HalpHvInitDiscard();
  return 0LL;
}
