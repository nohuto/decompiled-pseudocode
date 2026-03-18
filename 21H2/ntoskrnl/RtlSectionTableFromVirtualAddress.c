/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1402D6F40
 * Callers:
 *     RtlAddressInSectionTable @ 0x1402D6EE8 (RtlAddressInSectionTable.c)
 *     KeQueryKvaShadowRegion @ 0x1403851F0 (KeQueryKvaShadowRegion.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140757C9C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     EtwpIsValidImageAddress @ 0x140758BF0 (EtwpIsValidImageAddress.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x140962AC8 (KiTpIsSupportedKernelTracepointLocation.c)
 *     KiShadowProcessorAllocation @ 0x140A5A148 (KiShadowProcessorAllocation.c)
 *     KiVerifyXcpt15 @ 0x140AD6320 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140AD6354 (CcInitializeBcbProfiler.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlSectionTableFromVirtualAddress(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // r10d
  int v5; // edx
  unsigned int v6; // ecx
  unsigned __int64 v8; // rax

  v3 = *(unsigned __int16 *)(a1 + 20) + a1 + 24;
  v4 = *(unsigned __int16 *)(a1 + 6);
  if ( a1 <= 0x7FFFFFFEFFFFLL )
  {
    if ( v3 > 0x7FFFFFFEFFFFLL )
      return 0LL;
    v8 = v3 + 40LL * *(unsigned __int16 *)(a1 + 6);
    if ( v8 < v3 || v8 >= 0x7FFFFFFEFFFFLL )
      return 0LL;
  }
  v5 = 0;
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v3 + 12);
    if ( a3 >= v6 && a3 < *(_DWORD *)(v3 + 16) + v6 )
      break;
    v3 += 40LL;
    if ( ++v5 >= v4 )
      return 0LL;
  }
  return v3;
}
