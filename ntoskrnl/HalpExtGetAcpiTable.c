/*
 * XREFs of HalpExtGetAcpiTable @ 0x14050B500
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalpExtGetAcpiTable(__int64 a1, int a2, int a3, int a4)
{
  return HalpAcpiGetTable(HalpExtLoaderBlock, a2, a3, a4);
}
