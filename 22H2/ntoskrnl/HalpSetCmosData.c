/*
 * XREFs of HalpSetCmosData @ 0x1404CC290
 * Callers:
 *     HalWriteBootRegister @ 0x1409A97D8 (HalWriteBootRegister.c)
 * Callees:
 *     HalpGetSetCmosData @ 0x1404CC1CC (HalpGetSetCmosData.c)
 */

__int64 __fastcall HalpSetCmosData(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return HalpGetSetCmosData(a1, a2, a3, a4, 1);
}
