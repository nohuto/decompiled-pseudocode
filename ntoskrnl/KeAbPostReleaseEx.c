/*
 * XREFs of KeAbPostReleaseEx @ 0x140248520
 * Callers:
 *     MiCoalesceFreePages @ 0x140278FE0 (MiCoalesceFreePages.c)
 *     KiWaitForAllObjects @ 0x1402936D0 (KiWaitForAllObjects.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiLockControlAreaSectionExtend @ 0x1402A4EFC (MiLockControlAreaSectionExtend.c)
 *     ExTryToAcquireFastMutex @ 0x1402D5440 (ExTryToAcquireFastMutex.c)
 *     MiReferenceControlArea @ 0x140331908 (MiReferenceControlArea.c)
 *     MiLockAddressSpaceToo @ 0x140332B7C (MiLockAddressSpaceToo.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140357B60 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1403584B0 (ExTryAcquirePushLockExclusiveEx.c)
 *     PfLockSharedTryAcquire @ 0x14035B800 (PfLockSharedTryAcquire.c)
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 *     MiTryLockVad @ 0x1403C0FF8 (MiTryLockVad.c)
 *     ExAcquireFastResourceShared @ 0x1403C3C70 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C43D0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C48B0 (ExAcquireFastResourceExclusive.c)
 *     ExpReleaseFastResourceShared @ 0x1403C5A70 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1403C5EA4 (ExpReleaseFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x1403C6EF0 (ExDisownFastResource.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1403C8900 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1403C9690 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquireFastResourceWithFlags @ 0x14040CD00 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x14040D530 (ExAcquireFastResourceExclusive2.c)
 *     ExTryToConvertFastResourceSharedToExclusive2 @ 0x14040F0B8 (ExTryToConvertFastResourceSharedToExclusive2.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x14040F630 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpReleaseFastResourceExclusive2 @ 0x140410E88 (ExpReleaseFastResourceExclusive2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140410F34 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpReleaseFastResourceShared2 @ 0x14041109C (ExpReleaseFastResourceShared2.c)
 *     IopProcessIoTracking @ 0x140457588 (IopProcessIoTracking.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1405C6628 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1406075A0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140607670 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     MiChangingSubsectionProtos @ 0x1406399E8 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x14063DE84 (MiWaitForExtentDeletions.c)
 *     MiProcessTransitionHeatBatch @ 0x140652050 (MiProcessTransitionHeatBatch.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x14067FEF0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     MmPrefetchPagesEx @ 0x1406A387C (MmPrefetchPagesEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406B5654 (IopWaitAndAcquireFileObjectLock.c)
 *     MiPrefetchControlArea @ 0x14078DBC4 (MiPrefetchControlArea.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14078EC04 (CmpTryToLockHashEntryExclusive.c)
 *     CmpTryToLockKcbExclusive @ 0x140790CD8 (CmpTryToLockKcbExclusive.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1407926EC (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     AlpcpReceiveMessagePort @ 0x1407CD3A0 (AlpcpReceiveMessagePort.c)
 *     ObpDeleteNameCheck @ 0x1407D85E0 (ObpDeleteNameCheck.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x1407DD1A8 (ObpLockUnrelatedDirectoryShared.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14085C738 (CmpWaitOnHiveWriteQueue.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140861C00 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A70420 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     KiForceSymbolReferences @ 0x140B92408 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x140248730 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v2; // rax
  struct _KTHREAD *CurrentThread; // rcx

  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = (ULONG_PTR)(&CurrentThread[1].Process + 12 * (unsigned __int8)(a2 >> 1));
    if ( (*(_QWORD *)v2 & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL) != BugCheckParameter2 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, v2, 0LL);
  }
  else
  {
    LODWORD(CurrentThread) = a2 - 96 * *(unsigned __int8 *)(a2 + 16) - 1696;
  }
  _disable();
  *(_BYTE *)(v2 + 18) = 0;
  return KiAbEntryFreeAndEnableInterrupts(v2, (_DWORD)CurrentThread, BugCheckParameter2, 1, 0LL);
}
