/*
 * XREFs of VfMiscKeRaiseIrqlToDpcLevel_Entry @ 0x140AA4180
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckKeRaiseIrql @ 0x140AA568C (ViMiscCheckKeRaiseIrql.c)
 */

__int64 __fastcall VfMiscKeRaiseIrqlToDpcLevel_Entry(__int64 a1)
{
  LOBYTE(a1) = 2;
  return ViMiscCheckKeRaiseIrql(a1);
}
