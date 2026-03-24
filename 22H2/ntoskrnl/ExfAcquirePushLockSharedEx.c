/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x140273540
 * Callers:
 *     ExfAcquirePushLockShared @ 0x140273520 (ExfAcquirePushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1402CAAE0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1402E51D0 (ExAcquireAutoExpandPushLockShared.c)
 *     InsertEventEntryInLookUpTable @ 0x14036D608 (InsertEventEntryInLookUpTable.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x140390440 (ExpAcquireFannedOutPushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x140390ECC (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140393C54 (ExpSaAllocatorFree.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405D71A8 (WbGetWarbirdEncryptionSegment.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14060E474 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060E73C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14060EA3C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x14060F814 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F914 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x14060FFA4 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140610198 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140610CEC (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140611AFC (ExpWnfAcquireSubscriptionByName.c)
 *     WbAllocateUserMemory @ 0x1406672B4 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x14066759C (WbAllocateSlots.c)
 *     WbRemoveWarbirdProcess @ 0x1406872A4 (WbRemoveWarbirdProcess.c)
 *     sub_14068BA0C @ 0x14068BA0C (sub_14068BA0C.c)
 *     ExpWnfNotifySubscription @ 0x14068E4D4 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x14068E674 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x14069E568 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406A3528 (ExpWnfEnumerateScopeInstances.c)
 *     WbGetHeapExecutedBlock @ 0x1406C6744 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x1406C7890 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1406C7E04 (WbGetWarbirdProcess.c)
 *     ExRegisterExtension @ 0x14079DC30 (ExRegisterExtension.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095BA1C (ExpKdPullRemoteFileForUser.c)
 *     WheaConfigureErrorSource @ 0x1409A00B0 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409B38B0 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     KeAbPreWait @ 0x140273740 (KeAbPreWait.c)
 *     RtlBackoff @ 0x140273780 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x140273804 (ExpOptimizePushLockList.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     memset @ 0x140413800 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(unsigned __int64 *a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  signed __int64 v11; // rcx
  signed __int64 result; // rax
  bool v13; // cl
  bool v14; // zf
  signed __int64 v15; // rax
  int i; // ecx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF

  memset(Object, 0, sizeof(Object));
  v21 = 0;
  _m_prefetchw(a1);
  v9 = *a1;
  while ( 1 )
  {
    v10 = (v9 >> 1) & 1;
    if ( (v9 & 1) == 0 || !v10 && (v9 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      break;
    if ( a2 )
      KeAbPreWait(a2);
    v13 = 0;
    Object[7] = a2;
    HIDWORD(Object[6]) = 2;
    Object[5] = 0LL;
    if ( v10 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      v6 = (unsigned __int64)Object | v9 & 8 | 7;
      v13 = (v9 & 4) == 0;
    }
    else
    {
      LODWORD(Object[6]) = -2;
      Object[4] = Object;
      v6 = (unsigned __int64)Object + 3;
    }
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6, v9);
    v14 = v9 == v15;
    v9 = v15;
    if ( !v14 )
      goto LABEL_24;
    if ( v13 )
      ExpOptimizePushLockList(a1);
    Object[2] = &Object[1];
    Object[1] = &Object[1];
    LOWORD(Object[0]) = 1;
    BYTE2(Object[0]) = 6;
    HIDWORD(Object[0]) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v7 = __rdtsc();
        v8 = v7 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          v6 = 0LL;
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v18 = v7;
          v19 = __rdtsc();
          v6 = (unsigned __int64)HIDWORD(v19) << 32;
          v7 = v19;
          if ( v19 <= v18 || v19 >= v8 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0; ; ++i )
        {
          v6 = HIDWORD(Object[6]);
          if ( (Object[6] & 0x200000000LL) == 0 || i == ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6] )
            break;
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Object[6] + 1, 1u) )
      KeWaitForSingleObject(Object, WrPushLock, 0, 0, 0LL);
LABEL_25:
    if ( a2 )
      a2 = KeAbPreAcquire(a3);
  }
  v11 = (v9 | 1) + 16;
  if ( v10 )
    v11 = v9 | 1;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v11, v9);
  if ( v9 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_24:
    RtlBackoff(&v21, v6, v7, v8);
    v9 = *a1;
    _m_prefetchw(a1);
    goto LABEL_25;
  }
  return result;
}
