/*
 * XREFs of KeAbPostReleaseEx @ 0x1402E3DB0
 * Callers:
 *     ExTryAcquirePushLockExclusiveEx @ 0x1402053F0 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MiCoalesceFreePages @ 0x140235610 (MiCoalesceFreePages.c)
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x140266BAC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     PfLockSharedTryAcquire @ 0x14026E1F4 (PfLockSharedTryAcquire.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     MiReferenceControlArea @ 0x1402D6FD4 (MiReferenceControlArea.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1402E0CD0 (ExTryAcquirePushLockSharedEx.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402E2190 (MiWaitForCollidedFaultComplete.c)
 *     ExTryToAcquireFastMutex @ 0x1402E3D10 (ExTryToAcquireFastMutex.c)
 *     KiWaitForAllObjects @ 0x1402ED1E0 (KiWaitForAllObjects.c)
 *     MiLockControlAreaSectionExtend @ 0x1402F963C (MiLockControlAreaSectionExtend.c)
 *     MiLockAddressSpaceToo @ 0x1403168D0 (MiLockAddressSpaceToo.c)
 *     MiTryLockVad @ 0x1403818A8 (MiTryLockVad.c)
 *     ExpReleaseFastResourceShared @ 0x14038E280 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x14038E5D0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038E9B0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038EC80 (ExAcquireFastResourceShared.c)
 *     ExDisownFastResource @ 0x14038F020 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038F4C0 (ExpReleaseFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140390300 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140390A70 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x1405081DC (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x14053F858 (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x140542620 (MiWaitForExtentDeletions.c)
 *     MiProcessTransitionHeatBatch @ 0x14055FD3C (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1405B3DE0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405B3EB0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1405E9260 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14069B388 (CmpTryToLockHashEntryExclusive.c)
 *     CmpTryToLockKcbExclusive @ 0x1406A2964 (CmpTryToLockKcbExclusive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087268C (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140875CB0 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140884290 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408DFC40 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140980070 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     KiForceSymbolReferences @ 0x140A915EC (KiForceSymbolReferences.c)
 * Callees:
 *     KeAbEntryFree @ 0x1402C91B0 (KeAbEntryFree.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

char __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v5; // bl
  __int64 v6; // rdx
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0;
  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = (__int64)&CurrentThread->LockEntries[(unsigned __int8)(a2 >> 1)];
    if ( (*(_QWORD *)(v2 + 32) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL) != BugCheckParameter2 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, v2, 0LL);
  }
  else
  {
    CurrentThread = (struct _KTHREAD *)(a2 - 16LL * *(unsigned __int8 *)(a2 + 24));
  }
  --CurrentThread->SpecialApcDisable;
  v5 = ++CurrentThread->AbAllocationRegionCount;
  *(_BYTE *)(v2 + 26) &= ~1u;
  KeAbEntryFree(v2, a2, &v8);
  v6 = (signed __int64)(v2 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v5 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v6;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v6);
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
