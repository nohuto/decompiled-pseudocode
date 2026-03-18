/*
 * XREFs of KxWaitForLockChainValid @ 0x14031A4F0
 * Callers:
 *     CcCanIWrite @ 0x14020F1A0 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x14020FCA0 (CcCanIWriteStreamEx.c)
 *     MiProcessWorkingSets @ 0x14021FA30 (MiProcessWorkingSets.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14023B4B0 (ExpAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14023CB90 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D860 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14023DDA0 (ExpAcquireResourceSharedLite.c)
 *     CcUnpinFileDataEx @ 0x14025D6F0 (CcUnpinFileDataEx.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402604E0 (ExpReleaseResourceForThreadLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402632C0 (ExpAcquireSharedStarveExclusive.c)
 *     MiAddWorkingSetEntries @ 0x14026BC00 (MiAddWorkingSetEntries.c)
 *     ExpApplyPriorityBoost @ 0x1402A8420 (ExpApplyPriorityBoost.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9090 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCheckDeviceAndDriver @ 0x1402AF020 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1402AF410 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402AFD80 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x1402AFF60 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1402B00F0 (IopIncrementDeviceObjectRefCount.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402B8950 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402B8D10 (ExpWorkerFactoryCheckCreate.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAD10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     CcSetDirtyInMask @ 0x1402C8FC0 (CcSetDirtyInMask.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     CcSetDirtyPinnedData @ 0x1402FC580 (CcSetDirtyPinnedData.c)
 *     NtSetInformationWorkerFactory @ 0x140302E90 (NtSetInformationWorkerFactory.c)
 *     PoQueryWatchdogTime @ 0x1403191F0 (PoQueryWatchdogTime.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     CcCopyWriteWontFlush @ 0x140319640 (CcCopyWriteWontFlush.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140319B60 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x140319D70 (IopDereferenceVpbAndFree.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140319F90 (ExpSetResourceOwnerPointerEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14031A470 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C82F0 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceShared @ 0x1403C8B20 (ExAcquireFastResourceShared.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CCC60 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CCC90 (HvlNotifyLongSpinWait.c)
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
