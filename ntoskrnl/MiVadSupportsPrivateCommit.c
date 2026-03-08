/*
 * XREFs of MiVadSupportsPrivateCommit @ 0x14031EE80
 * Callers:
 *     MiVadSupportsCombine @ 0x1402285E0 (MiVadSupportsCombine.c)
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140615D8C (MiIsVadEligibleForCommitRelease.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140619C68 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406A0D38 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiProcessVaRangesInfoClass @ 0x14075C744 (MiProcessVaRangesInfoClass.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
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
