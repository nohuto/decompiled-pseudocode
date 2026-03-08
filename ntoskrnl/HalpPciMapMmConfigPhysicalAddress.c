/*
 * XREFs of HalpPciMapMmConfigPhysicalAddress @ 0x1402D7B28
 * Callers:
 *     HalpPciAccessMmConfigSpace @ 0x1402D79A4 (HalpPciAccessMmConfigSpace.c)
 * Callees:
 *     HalpRemapVirtualAddress64 @ 0x1402D7C00 (HalpRemapVirtualAddress64.c)
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 */

__int64 __fastcall HalpPciMapMmConfigPhysicalAddress(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10

  if ( HalpPciMmConfigVirtualAddress )
  {
    LOBYTE(a3) = 1;
    HalpRemapVirtualAddress64(HalpPciMmConfigVirtualAddress, a1, a3);
  }
  else
  {
    v3 = HalpMap(a1, 1, 0, 1, 4);
    HalpPciMmConfigVirtualAddress = v3;
  }
  return v3;
}
