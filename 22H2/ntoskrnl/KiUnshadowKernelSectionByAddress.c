/*
 * XREFs of KiUnshadowKernelSectionByAddress @ 0x140410550
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140A89C48 (KiShadowProcessorAllocation.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1402F7190 (RtlSectionTableFromVirtualAddress.c)
 *     MmDeleteShadowMapping @ 0x140A3C840 (MmDeleteShadowMapping.c)
 */

__int64 KiUnshadowKernelSectionByAddress()
{
  unsigned __int64 v0; // rax
  _DWORD *v1; // rax
  unsigned int v2; // edx

  v0 = RtlImageNtHeader(0x140000000LL);
  v1 = (_DWORD *)RtlSectionTableFromVirtualAddress(
                   v0,
                   0x140000000LL,
                   (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
  v2 = v1[2];
  if ( v2 <= v1[4] )
    v2 = v1[4];
  return MmDeleteShadowMapping(0x140000000LL + (unsigned int)v1[3], (v2 + 4095) & 0xFFFFF000);
}
