/*
 * XREFs of HalAcpiGetTable @ 0x1403706A0
 * Callers:
 *     HalpAddDevice @ 0x140802640 (HalpAddDevice.c)
 *     HalpDbgInitSystem @ 0x140A85F50 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
