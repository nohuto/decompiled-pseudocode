/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1402F7190
 * Callers:
 *     RtlAddressInSectionTable @ 0x1402F7138 (RtlAddressInSectionTable.c)
 *     KeQueryKvaShadowRegion @ 0x1403CF778 (KeQueryKvaShadowRegion.c)
 *     KiShadowKernelSectionByAddress @ 0x1404104F4 (KiShadowKernelSectionByAddress.c)
 *     KiUnshadowKernelSectionByAddress @ 0x140410550 (KiUnshadowKernelSectionByAddress.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140755C38 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     EtwpIsValidImageAddress @ 0x14077E5E8 (EtwpIsValidImageAddress.c)
 *     KiTpIsSupportedKernelTracepointLocation @ 0x1409766E0 (KiTpIsSupportedKernelTracepointLocation.c)
 *     KiVerifyXcpt15 @ 0x140B18320 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x140B18354 (CcInitializeBcbProfiler.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
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
