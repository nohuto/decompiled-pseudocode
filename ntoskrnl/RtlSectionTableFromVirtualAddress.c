/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x14035D7C0
 * Callers:
 *     RtlAddressInSectionTable @ 0x14035D764 (RtlAddressInSectionTable.c)
 *     KeQueryKvaShadowRegion @ 0x1403CA1C8 (KeQueryKvaShadowRegion.c)
 *     EtwpIsValidImageAddress @ 0x140775684 (EtwpIsValidImageAddress.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1407EA480 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x140973640 (KiTpIsSupportedKernelTracepointLocation.c)
 *     KiShadowProcessorAllocation @ 0x140A8666C (KiShadowProcessorAllocation.c)
 *     KiVerifyXcpt15 @ 0x140B14320 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140B14354 (CcInitializeBcbProfiler.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlSectionTableFromVirtualAddress(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // r9
  int v5; // r8d
  unsigned int v6; // r10d
  unsigned __int64 v7; // rdx
  unsigned int v8; // ecx
  unsigned __int64 v10; // r9

  v4 = a1 + *(unsigned __int16 *)(a1 + 20);
  v5 = 0;
  v6 = *(unsigned __int16 *)(a1 + 6);
  v7 = v4 + 24;
  if ( a1 <= 0x7FFFFFFEFFFFLL )
  {
    v10 = v4 + 40LL * *(unsigned __int16 *)(a1 + 6) + 23;
    if ( !*(_WORD *)(a1 + 6) )
      v10 = v7;
    if ( v10 < v7 || v10 > 0x7FFFFFFEFFFFLL )
      return 0LL;
  }
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v7 + 12);
    if ( a3 >= v8 && a3 < *(_DWORD *)(v7 + 16) + v8 )
      break;
    v7 += 40LL;
    if ( ++v5 >= v6 )
      return 0LL;
  }
  return v7;
}
