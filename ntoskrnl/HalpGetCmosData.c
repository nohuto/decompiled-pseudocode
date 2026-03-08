/*
 * XREFs of HalpGetCmosData @ 0x14039F6B0
 * Callers:
 *     HalReadBootRegister @ 0x140A8D824 (HalReadBootRegister.c)
 * Callees:
 *     HalpGetSetCmosData @ 0x14039F6CC (HalpGetSetCmosData.c)
 */

__int64 __fastcall HalpGetCmosData(int a1, int a2, int a3, int a4)
{
  return HalpGetSetCmosData(a1, a2, a3, a4, 0);
}
