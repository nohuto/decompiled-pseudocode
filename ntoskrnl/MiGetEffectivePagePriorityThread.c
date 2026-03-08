/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x14028A260
 * Callers:
 *     MiInitializeImageProtos @ 0x140213DD0 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x1402140A4 (MiGetPageForHeader.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiInitializePfn @ 0x140289DB0 (MiInitializePfn.c)
 *     MiPrivateFixup @ 0x1402A180C (MiPrivateFixup.c)
 *     MmCopyMemory @ 0x1402A1CE0 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x1402FBFE0 (MiPrefetchRestOfCluster.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     MiUnlockWsle @ 0x1403443C0 (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MmPrefetchVirtualAddresses @ 0x14067E600 (MmPrefetchVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x14075BCB0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x14028A290 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1384);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return PsGetPagePriorityThread(a1);
}
