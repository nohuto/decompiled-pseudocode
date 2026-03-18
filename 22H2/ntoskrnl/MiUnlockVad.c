/*
 * XREFs of MiUnlockVad @ 0x140289B80
 * Callers:
 *     MiLockAddressSpaceToo @ 0x14028940C (MiLockAddressSpaceToo.c)
 *     MiDeleteEmptyPageTables @ 0x1403571A0 (MiDeleteEmptyPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x140619158 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406192E8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C114 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630CA0 (MiInsertViewOfPhysicalSection.c)
 *     MiCanDeleteEnclave @ 0x1406471B8 (MiCanDeleteEnclave.c)
 *     MiWaitForVadDeletion @ 0x140660CC8 (MiWaitForVadDeletion.c)
 *     MiFindPlaceholderVadToReplace @ 0x140660D70 (MiFindPlaceholderVadToReplace.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiUnlockVadRange @ 0x1406AFF64 (MiUnlockVadRange.c)
 *     MiAllocateVirtualMemory @ 0x1406F72D0 (MiAllocateVirtualMemory.c)
 *     MiReserveUserMemory @ 0x14071F450 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FAC8 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CD0F4 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30D50 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A320A8 (MiCoalescePlaceholderAllocations.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35650 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteVadHotPatchState @ 0x140A36A4C (MiDeleteVadHotPatchState.c)
 *     MiPrepareToHotPatchVad @ 0x140A3AF5C (MiPrepareToHotPatchVad.c)
 *     MiProcessPatchImageCfg @ 0x140A3B088 (MiProcessPatchImageCfg.c)
 *     MiInitializeVsmEnclave @ 0x140A3E010 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E508 (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x140A3E960 (MiTerminateEnclave.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 */

int __fastcall MiUnlockVad(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  *(_BYTE *)(a1 + 1384) &= ~0x80u;
  v2 = a2 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 40);
  LODWORD(v4) = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LODWORD(v4) = KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  }
  return (int)v4;
}
