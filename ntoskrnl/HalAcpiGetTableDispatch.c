/*
 * XREFs of HalAcpiGetTableDispatch @ 0x14029C530
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTableDispatch(unsigned int a1, __int64 a2, __int64 a3)
{
  return HalpAcpiGetTable(0LL, a1, a2, a3);
}
