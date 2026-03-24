/*
 * XREFs of HalAcpiGetTable @ 0x1403CA210
 * Callers:
 *     HalpDbgInitSystem @ 0x1409A1280 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x1402E77D0 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
