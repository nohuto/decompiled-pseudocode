/*
 * XREFs of KxWaitForLockChainValid @ 0x140291730
 * Callers:
 *     CcSetDirtyInMask @ 0x14021C370 (CcSetDirtyInMask.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402213C0 (ExpAcquireSharedStarveExclusive.c)
 *     CcSetDirtyPinnedData @ 0x140242420 (CcSetDirtyPinnedData.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14025B1B0 (ExpAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14025C890 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14025D990 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14025DED0 (ExpAcquireResourceSharedLite.c)
 *     MiAddWorkingSetEntries @ 0x14026D700 (MiAddWorkingSetEntries.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 *     PoQueryWatchdogTime @ 0x140290430 (PoQueryWatchdogTime.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     CcCopyWriteWontFlush @ 0x140290880 (CcCopyWriteWontFlush.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140290DA0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x140290FB0 (IopDereferenceVpbAndFree.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402911D0 (ExpSetResourceOwnerPointerEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402916B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IopCheckDeviceAndDriver @ 0x14030E9F0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14030EE30 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x14030F5C0 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x14030F780 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14030F910 (IopIncrementDeviceObjectRefCount.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     ExpReleaseResourceForThreadLite @ 0x14033ABF0 (ExpReleaseResourceForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14033B5E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140340900 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140340CC0 (ExpWorkerFactoryCheckCreate.c)
 *     MiProcessWorkingSets @ 0x14035F6F0 (MiProcessWorkingSets.c)
 *     CcCanIWrite @ 0x140362960 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x140363460 (CcCanIWriteStreamEx.c)
 *     NtSetInformationWorkerFactory @ 0x140366B30 (NtSetInformationWorkerFactory.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C3440 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceShared @ 0x1403C3C70 (ExAcquireFastResourceShared.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForLockChainValid(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
    {
      HvlNotifyLongSpinWait(v2);
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
