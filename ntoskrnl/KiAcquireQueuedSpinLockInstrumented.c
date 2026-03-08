/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E
 * Callers:
 *     CcSetDirtyInMask @ 0x14021C370 (CcSetDirtyInMask.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402213C0 (ExpAcquireSharedStarveExclusive.c)
 *     CcSetDirtyPinnedData @ 0x140242420 (CcSetDirtyPinnedData.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14025B1B0 (ExpAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14025DED0 (ExpAcquireResourceSharedLite.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiAddWorkingSetEntries @ 0x14026D700 (MiAddWorkingSetEntries.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 *     PoQueryWatchdogTime @ 0x140290430 (PoQueryWatchdogTime.c)
 *     CcCopyWriteWontFlush @ 0x140290880 (CcCopyWriteWontFlush.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140290DA0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x140290FB0 (IopDereferenceVpbAndFree.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402911D0 (ExpSetResourceOwnerPointerEx.c)
 *     IoAcquireCancelSpinLock @ 0x1402CFAA0 (IoAcquireCancelSpinLock.c)
 *     IopCheckDeviceAndDriver @ 0x14030E9F0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14030EE30 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x14030F5C0 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x14030F780 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14030F910 (IopIncrementDeviceObjectRefCount.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     MiObtainSystemCacheView @ 0x140335220 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x1403354D0 (MiReleaseSystemCacheView.c)
 *     KxAcquireQueuedSpinLock @ 0x140336C10 (KxAcquireQueuedSpinLock.c)
 *     CcUninitializeCacheMap @ 0x140336C50 (CcUninitializeCacheMap.c)
 *     CcFlushCachePreProcess @ 0x1403373A0 (CcFlushCachePreProcess.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     IoGetAttachedDeviceReference @ 0x140337BB0 (IoGetAttachedDeviceReference.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceForThreadLite @ 0x14033A350 (ExReleaseResourceForThreadLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x14033ABF0 (ExpReleaseResourceForThreadLite.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140340900 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140340CC0 (ExpWorkerFactoryCheckCreate.c)
 *     ExpBoostIoAfterAcquire @ 0x140356B60 (ExpBoostIoAfterAcquire.c)
 *     MiProcessWorkingSets @ 0x14035F6F0 (MiProcessWorkingSets.c)
 *     CcCanIWrite @ 0x140362960 (CcCanIWrite.c)
 *     CcCanIWriteStreamEx @ 0x140363460 (CcCanIWriteStreamEx.c)
 *     NtSetInformationWorkerFactory @ 0x140366B30 (NtSetInformationWorkerFactory.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C3440 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceShared @ 0x1403C3C70 (ExAcquireFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1403C5540 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x1403C5A70 (ExpReleaseFastResourceShared.c)
 *     ExDisownFastResource @ 0x1403C6EF0 (ExDisownFastResource.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x140457CE8 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x1405FE910 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall KiAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int InterruptCount; // ebp
  int v6; // r14d
  int v7; // r9d
  int v8; // esi
  char v9; // di
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v6 = 0;
  v7 = 0;
  v8 = (int)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v9 = 1;
    result = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v6 = result;
  }
  else
  {
    v9 = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v10 = _InterlockedExchange64(a2, a1);
  if ( v10 )
  {
    result = KxWaitForLockOwnerShipWithIrql(a1, v10, a3, 0LL);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v7 = result;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
  }
  if ( v9 )
  {
    v11 = __rdtsc();
    return PerfLogSpinLockAcquire(v8, v11, (int)v11 - v6, v7, InterruptCount, 1);
  }
  return result;
}
