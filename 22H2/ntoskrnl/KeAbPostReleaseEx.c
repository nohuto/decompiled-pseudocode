/*
 * XREFs of KeAbPostReleaseEx @ 0x1402BD4C0
 * Callers:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x140288198 (MiReferenceControlArea.c)
 *     MiLockAddressSpaceToo @ 0x14028940C (MiLockAddressSpaceToo.c)
 *     MiLockControlAreaSectionExtend @ 0x140293024 (MiLockControlAreaSectionExtend.c)
 *     MiCoalesceFreePages @ 0x1402D4970 (MiCoalesceFreePages.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     PfLockSharedTryAcquire @ 0x1402FA288 (PfLockSharedTryAcquire.c)
 *     KeWaitForMultipleObjects @ 0x140310FC0 (KeWaitForMultipleObjects.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14032F640 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14032F790 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExTryToAcquireFastMutex @ 0x14033DAE0 (ExTryToAcquireFastMutex.c)
 *     KiWaitForAllObjects @ 0x14034A8FC (KiWaitForAllObjects.c)
 *     MiTryLockVad @ 0x1403C68B8 (MiTryLockVad.c)
 *     ExAcquireFastResourceShared @ 0x1403C8B20 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C9280 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C9760 (ExAcquireFastResourceExclusive.c)
 *     ExpReleaseFastResourceShared @ 0x1403CA920 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1403CAD54 (ExpReleaseFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x1403CBDA0 (ExDisownFastResource.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1403CD420 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1403CEC40 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquireFastResourceWithFlags @ 0x140411A70 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x140412330 (ExAcquireFastResourceExclusive2.c)
 *     ExTryToConvertFastResourceSharedToExclusive2 @ 0x140413EE8 (ExTryToConvertFastResourceSharedToExclusive2.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414460 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpReleaseFastResourceExclusive2 @ 0x140415CB8 (ExpReleaseFastResourceExclusive2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140415D64 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpReleaseFastResourceShared2 @ 0x140415ECC (ExpReleaseFastResourceShared2.c)
 *     IopProcessIoTracking @ 0x14045F528 (IopProcessIoTracking.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1405C8AD8 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1406099F0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140609AC0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     MiChangingSubsectionProtos @ 0x14063BE64 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x1406402E4 (MiWaitForExtentDeletions.c)
 *     MiProcessTransitionHeatBatch @ 0x1406546A4 (MiProcessTransitionHeatBatch.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1406802F8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1406832D0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8840 (CmpCreateKeyControlBlock.c)
 *     ObpCloseHandle @ 0x1406E7730 (ObpCloseHandle.c)
 *     AlpcpReceiveMessagePort @ 0x14073B9A0 (AlpcpReceiveMessagePort.c)
 *     MmPrefetchPagesEx @ 0x14073EBE8 (MmPrefetchPagesEx.c)
 *     ObpDeleteNameCheck @ 0x140740650 (ObpDeleteNameCheck.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140765710 (IopWaitAndAcquireFileObjectLock.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x1407AA85C (ObpLockUnrelatedDirectoryShared.c)
 *     MiPrefetchControlArea @ 0x1407DCE8C (MiPrefetchControlArea.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1407DDD28 (CmpTryToLockHashEntryExclusive.c)
 *     CmpTryToLockKcbExclusive @ 0x1407E00A8 (CmpTryToLockKcbExclusive.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1407E1CC8 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140860638 (CmpWaitOnHiveWriteQueue.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140866420 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140A73120 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     KiForceSymbolReferences @ 0x140B96628 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x1402BD6D0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
