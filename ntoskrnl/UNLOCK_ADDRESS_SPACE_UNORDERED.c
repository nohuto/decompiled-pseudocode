/*
 * XREFs of UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1402A54F4 (MiDeleteFinalPageTables.c)
 *     MiDeletePartialVad @ 0x1402D5768 (MiDeletePartialVad.c)
 *     MiBeginProcessClean @ 0x1402DB7FC (MiBeginProcessClean.c)
 *     MiDeleteEmptyPageTables @ 0x1402EB5E0 (MiDeleteEmptyPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x140616CA8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140616E38 (MiReleaseOutSwappedProcessCommit.c)
 *     MiCopyOnWriteCheckConditions @ 0x140664840 (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406A3620 (MiAllocateFromSubAllocatedRegion.c)
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiInitializeVadCellBitMap @ 0x140729460 (MiInitializeVadCellBitMap.c)
 *     MiInsertProcessVads @ 0x140729774 (MiInsertProcessVads.c)
 *     MiPrepareVadDelete @ 0x14075FF3C (MiPrepareVadDelete.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiUnlockVadRange @ 0x1407D73E8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 *     MiMapViewOfPhysicalSection @ 0x140A2E020 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A2F378 (MiCoalescePlaceholderAllocations.c)
 *     MiAllocateEnclaveVad @ 0x140A3A010 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x140A3F4A0 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x140A3F6B0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall UNLOCK_ADDRESS_SPACE_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *v4; // rax

  *(_BYTE *)(a1 + 1384) &= ~1u;
  v2 = a2 + 1224;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1224));
  LOBYTE(v4) = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  return (char)v4;
}
