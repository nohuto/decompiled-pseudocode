/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x140274A30
 * Callers:
 *     MiVadSupportsCombine @ 0x1402171C0 (MiVadSupportsCombine.c)
 *     MmOutSwapWorkingSet @ 0x140341B10 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14061823C (MiIsVadEligibleForCommitRelease.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C114 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiAllocateVirtualMemory @ 0x1406F72D0 (MiAllocateVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A518 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiProcessVaRangesInfoClass @ 0x1407A5514 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadSupportsPrivateCommit(__int64 a1)
{
  int v1; // eax
  int v2; // edx

  v1 = *(_DWORD *)(a1 + 48);
  v2 = v1 & 0x200000;
  if ( (v1 & 0x70) != 0 )
  {
    if ( (v2 || (*(_DWORD *)(a1 + 64) & 0x1000000) == 0) && (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 )
      return 1LL;
  }
  else if ( !v2 || (v1 & 0x800000) == 0 && (v1 & 0x180000u) < 0x100000 )
  {
    return 1LL;
  }
  return (*(_DWORD *)(a1 + 48) & 0x70) == 64;
}
