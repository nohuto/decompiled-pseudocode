/*
 * XREFs of HalAcpiGetTable @ 0x140394D60
 * Callers:
 *     HalpAddDevice @ 0x140836770 (HalpAddDevice.c)
 *     HalpDbgInitSystem @ 0x140A8F2C0 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140336E50 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
