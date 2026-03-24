/*
 * XREFs of KxWaitForLockChainValid @ 0x1402DCF80
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203110 (NtWaitForWorkViaWorkerFactory.c)
 *     MiProcessWorkingSets @ 0x140207B60 (MiProcessWorkingSets.c)
 *     MiTrimOrAgeWorkingSet @ 0x140208210 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x140208B00 (MiAgeWorkingSet.c)
 *     MiAddWorkingSetEntries @ 0x140212380 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022CF70 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x14022E970 (ExpApplyPriorityBoost.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140235D30 (MiUnlinkFreeOrZeroedPage.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402424E0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140242860 (ExpWorkerFactoryCheckCreate.c)
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     CcCanIWrite @ 0x140293850 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x140293B50 (CcCanIWriteStreamEx.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14029EDE0 (ExpAcquireSharedStarveExclusive.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402A9B00 (MiInsertProtectedStandbyPage.c)
 *     MiSetVaAgeList @ 0x1402ADD40 (MiSetVaAgeList.c)
 *     CcSetDirtyInMask @ 0x1402B6B00 (CcSetDirtyInMask.c)
 *     MiRemoveWsle @ 0x1402B9670 (MiRemoveWsle.c)
 *     MiAgePte @ 0x1402B9AD0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x1402BACE0 (MiLogPageAccess.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402CBCD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402CC770 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x1402CD0C0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402CD8D0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IopCheckDeviceAndDriver @ 0x1402D3AF0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1402D40D0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402D4340 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x1402D5240 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402D5350 (IopIncrementDeviceObjectRefCount.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     IoReleaseCancelSpinLock @ 0x1402DB6D0 (IoReleaseCancelSpinLock.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1402DB910 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtSetInformationWorkerFactory @ 0x1402DBAE0 (NtSetInformationWorkerFactory.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402DCAE0 (ExpSetResourceOwnerPointerEx.c)
 *     IopGetMountFlag @ 0x1403452E0 (IopGetMountFlag.c)
 *     MiZeroLargePageThread @ 0x1403AEB30 (MiZeroLargePageThread.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14038FA40 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390820 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxWaitForLockChainValid(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 result; // rax

  v5 = 0;
  do
  {
    if ( (++v5 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
    {
      HvlNotifyLongSpinWait(v5);
    }
    else
    {
      _mm_pause();
    }
    result = *a1;
  }
  while ( !*a1 );
  return result;
}
