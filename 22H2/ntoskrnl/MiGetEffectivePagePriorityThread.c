/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x1402E14F0
 * Callers:
 *     MiInitializeImageProtos @ 0x14021A220 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x14021A4F4 (MiGetPageForHeader.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiIssueHardFault @ 0x1402A0F90 (MiIssueHardFault.c)
 *     MiUnlockWsle @ 0x1402A25E0 (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiInitializePfn @ 0x1402E1040 (MiInitializePfn.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MmCopyMemory @ 0x1402EDB50 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x1403674AC (MiPrefetchRestOfCluster.c)
 *     MiSetPagesModified @ 0x14062896C (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MmPrefetchVirtualAddresses @ 0x1406819E0 (MmPrefetchVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x1407A4530 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1402E1520 (PsGetPagePriorityThread.c)
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
