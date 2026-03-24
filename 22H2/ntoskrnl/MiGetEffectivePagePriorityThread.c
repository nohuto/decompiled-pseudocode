/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x140339E94
 * Callers:
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiIssueHardFault @ 0x14028F030 (MiIssueHardFault.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MmCopyMemory @ 0x14030C030 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x14032AA04 (MiPrefetchRestOfCluster.c)
 *     MiInitializeImageProtos @ 0x140336F8C (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x14033763C (MiGetPageForHeader.c)
 *     MiUnlockWsle @ 0x140338C2C (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x140339070 (NtLockVirtualMemory.c)
 *     MiSetPagesModified @ 0x140534FF0 (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x1406FA310 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1406FB400 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140242140 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1304);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return PsGetPagePriorityThread(a1);
}
