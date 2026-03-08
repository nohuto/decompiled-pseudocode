/*
 * XREFs of KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402916B0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     CcFlushCachePreProcess @ 0x1403373A0 (CcFlushCachePreProcess.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x14040F2AC (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x14040F630 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpConvertFastResourceExclusiveToShared2 @ 0x14040FE4C (ExpConvertFastResourceExclusiveToShared2.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140410B38 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x140410CE8 (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140410F34 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpReleaseFastResourceShared2 @ 0x14041109C (ExpReleaseFastResourceShared2.c)
 *     PnprMirrorMarkedPages @ 0x140A9A0AC (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLockFromDpcLevel(PKLOCK_QUEUE_HANDLE LockHandle)
{
  _KSPIN_LOCK_QUEUE *volatile Next; // rcx
  unsigned __int64 *volatile Lock; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(LockHandle, retaddr);
    return;
  }
  _m_prefetchw(LockHandle);
  Next = LockHandle->LockQueue.Next;
  if ( !Next )
  {
    if ( LockHandle == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                              0LL,
                                              (signed __int64)LockHandle) )
      return;
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(LockHandle);
  }
  LockHandle->LockQueue.Next = 0LL;
  Lock = LockHandle->LockQueue.Lock;
  if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)&Next->Lock, (__int64)Lock)) & 4) != 0 )
  {
    _InterlockedOr(v4, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)&Next->Lock >> 5) & 0x7F], 0LL));
  }
}
