/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x14021B200
 * Callers:
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140317C38 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x140350FC0 (MmOutSwapWorkingSet.c)
 *     MiCrcStillIntact @ 0x1403674C4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14052B5E8 (MiIsVadEligibleForCommitRelease.c)
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406DAFE8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiProcessVaRangesInfoClass @ 0x1406FAC44 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPrivateCommit(__int64 a1)
{
  int v1; // edx
  int v2; // eax

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x100000;
  if ( (v1 & 0x70) != 0 )
  {
    if ( v2 || (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
    {
      v1 = *(_DWORD *)(a1 + 48);
      if ( (v1 & 0x70) == 0x20 )
        return 1LL;
    }
    else
    {
      v1 = *(_DWORD *)(a1 + 48);
    }
  }
  else if ( !v2 || (v1 & 0x400000) == 0 && (v1 & 0xC0000u) < 0x80000 )
  {
    return 1LL;
  }
  return (v1 & 0x70) == 0x40;
}
