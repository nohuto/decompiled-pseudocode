/*
 * XREFs of HalpGetCmosData @ 0x1403A4C90
 * Callers:
 *     HalReadBootRegister @ 0x140A90CB4 (HalReadBootRegister.c)
 * Callees:
 *     HalpGetSetCmosData @ 0x1403A4CAC (HalpGetSetCmosData.c)
 */

__int64 __fastcall HalpGetCmosData(int a1, int a2, int a3, int a4)
{
  return HalpGetSetCmosData(a1, a2, a3, a4, 0);
}
