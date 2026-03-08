/*
 * XREFs of KxWaitForLockOwnerShip @ 0x14033B510
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
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     KiHaltOnAddress @ 0x14057DA08 (KiHaltOnAddress.c)
 */

__int64 __fastcall KxWaitForLockOwnerShip(signed __int64 a1, signed __int64 *a2)
{
  volatile signed __int64 *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // edi
  int v5; // esi
  int v6; // esi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  int i; // [rsp+24h] [rbp-2Ch]
  signed __int64 v11; // [rsp+28h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]

  v2 = (volatile signed __int64 *)(a1 + 8);
  v13 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  if ( (v3 & 4) != 0 )
    BYTE1(v13) = 1;
  *v2 |= 1uLL;
  v4 = 0;
  *a2 = a1;
  v5 = 0;
  for ( i = 0; ; v5 = i )
  {
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
    {
      v6 = v5 + 1;
      LOBYTE(v13) = 0;
      i = v6;
      if ( (KiVelocityFlags & 0x10000) != 0 && KeGetCurrentIrql() == 2 && (v6 & 1) == 0 )
      {
        v8 = *v2;
        LOBYTE(v13) = 1;
        *((_QWORD *)&v12 + 1) = v8;
        if ( (v8 & 1) != 0 )
        {
          do
          {
            if ( BYTE1(v13) )
              a1 = v8 & 0xFFFFFFFFFFFFFFFBuLL;
            else
              a1 = v8 | 4;
            v11 = a1;
            v9 = v8;
            v8 = _InterlockedCompareExchange64(v2, a1, v8);
            LOBYTE(v12) = v8;
            if ( v9 == v8 )
            {
              do
              {
                *((_QWORD *)&v12 + 1) = a1;
                KiHaltOnAddress(v2, (char *)&v12 + 8);
                v8 = *v2;
                a1 = v11;
                *(_QWORD *)&v12 = *v2;
              }
              while ( *v2 == v11 );
            }
            *((_QWORD *)&v12 + 1) = v8;
          }
          while ( (v12 & 1) != 0 );
        }
      }
      else
      {
        HvlNotifyLongSpinWait(v4);
      }
    }
    else
    {
      _mm_pause();
    }
    if ( (*v2 & 1) == 0 )
      break;
  }
  return v4;
}
