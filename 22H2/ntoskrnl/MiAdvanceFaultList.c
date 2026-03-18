/*
 * XREFs of MiAdvanceFaultList @ 0x1402EE7F4
 * Callers:
 *     MiDispatchFault @ 0x140237F10 (MiDispatchFault.c)
 *     MiResolvePrivateZeroFault @ 0x14026A260 (MiResolvePrivateZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14026A860 (MiCompletePrivateZeroFault.c)
 *     MiCopyDataPageToImagePage @ 0x14028B350 (MiCopyDataPageToImagePage.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402DFD70 (MiBuildMdlForMappedFileFault.c)
 *     MiCreateSharedZeroPages @ 0x1402E0DC0 (MiCreateSharedZeroPages.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MiComputeFaultCluster @ 0x1402EE628 (MiComputeFaultCluster.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14063C334 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAdvanceFaultList(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 result; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx

  v2 = a1[3];
  v3 = a1[1];
  v4 = ((unsigned __int64)(*(_DWORD *)(v3 + 16 * v2) & 0xFFF) + *(_QWORD *)(v3 + 16 * v2 + 8) + 4095LL) >> 12;
  result = a1[4] + 1LL;
  a1[4] = result;
  if ( result == v4 )
  {
    a1[4] = 0LL;
    v6 = v2 + 1;
    v7 = a1[2];
    a1[3] = v6;
    if ( v6 < v7 )
    {
      result = 2 * v6;
      if ( !*(_QWORD *)(v3 + 16 * v6 + 8) )
        v6 = v7;
      a1[3] = v6;
    }
  }
  return result;
}
