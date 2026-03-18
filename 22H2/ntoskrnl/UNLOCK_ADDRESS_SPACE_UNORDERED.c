/*
 * XREFs of UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140214DB4
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140291494 (MiDeleteFinalPageTables.c)
 *     MiDeletePartialVad @ 0x140309BA4 (MiDeletePartialVad.c)
 *     MiBeginProcessClean @ 0x140342310 (MiBeginProcessClean.c)
 *     MiDeleteEmptyPageTables @ 0x1403571A0 (MiDeleteEmptyPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x140619158 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406192E8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiCopyOnWriteCheckConditions @ 0x140666E90 (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiUnlockVadRange @ 0x1406AFF64 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MiInitializeVadCellBitMap @ 0x1406B2D54 (MiInitializeVadCellBitMap.c)
 *     MiInsertProcessVads @ 0x1406B3068 (MiInsertProcessVads.c)
 *     MiReserveUserMemory @ 0x14071F450 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FAC8 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x1407202F0 (MiMapViewOfDataSection.c)
 *     MmFreeVirtualMemory @ 0x1407455D0 (MmFreeVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748A84 (MiMapLockedPagesInUserSpace.c)
 *     MiPrepareVadDelete @ 0x14076DA04 (MiPrepareVadDelete.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30D50 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A320A8 (MiCoalescePlaceholderAllocations.c)
 *     MiAllocateEnclaveVad @ 0x140A3CCF8 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x140A42180 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x140A42390 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall UNLOCK_ADDRESS_SPACE_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax

  *(_BYTE *)(a1 + 1384) &= ~1u;
  v2 = a2 + 1224;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 1224);
  result = (_QWORD *)KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
