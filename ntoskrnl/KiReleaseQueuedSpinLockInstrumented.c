/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78
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
 * Callees:
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 *     PerfLogSpinLockRelease @ 0x1405FE984 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseQueuedSpinLockInstrumented(volatile signed __int64 **a1, __int64 a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // rdx
  volatile signed __int64 **v6; // rdi
  volatile __int64 *v7; // rdx
  volatile signed __int64 *v8; // rax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = __rdtsc();
  _m_prefetchw(a1);
  v5 = (__int64)*a1;
  v6 = a1 + 1;
  if ( !*a1 )
  {
    if ( a1 == (volatile signed __int64 **)_InterlockedCompareExchange64(*v6, 0LL, (signed __int64)a1) )
      return PerfLogSpinLockRelease(*v6, a2, v4);
    v5 = KxWaitForLockChainValid((__int64 *)a1);
  }
  *a1 = 0LL;
  v7 = (volatile __int64 *)(v5 + 8);
  v8 = *v6;
  if ( (((unsigned __int8)v8 ^ (unsigned __int8)_InterlockedExchange64(v7, (__int64)*v6)) & 4) != 0 )
  {
    _InterlockedOr(v10, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)v7 >> 5) & 0x7F], 0LL));
  }
  return PerfLogSpinLockRelease(*v6, a2, v4);
}
