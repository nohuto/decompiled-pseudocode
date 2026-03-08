/*
 * XREFs of KeTerminateThread @ 0x140353168
 * Callers:
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiProcessThreadWaitList @ 0x1402508F0 (KiProcessThreadWaitList.c)
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402AF3E4 (KiRemoveThreadFromSchedulingGroup.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     ExQueueWorkItemEx @ 0x140353EB0 (ExQueueWorkItemEx.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1403548F8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     KeDisableProfiling @ 0x1405719BC (KeDisableProfiling.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 */

struct _KPRCB *__fastcall KeTerminateThread(ULONG_PTR BugCheckParameter1)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // cl
  __int64 *v6; // rsi
  __int64 *v7; // rdx
  __int64 **v8; // rax
  __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // r12
  __int64 v11; // r9
  _QWORD *v12; // r14
  __int64 i; // rax
  signed __int64 *v14; // r8
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  __int64 v17; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v20; // rdx
  __int64 v21; // rsi
  char v22; // al
  __int64 v23; // r8
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rbp
  unsigned __int8 v27; // cl
  struct _KPRCB *v28; // r13
  _KTHREAD *CurrentThread; // r15
  _QWORD *v30; // rcx
  int v31; // r8d
  __int64 *v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // r9
  __int64 v35; // rdx
  signed __int32 v36[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  int v38; // [rsp+80h] [rbp+8h] BYREF
  __int64 v39; // [rsp+88h] [rbp+10h]

  v1 = (*(_DWORD *)(BugCheckParameter1 + 116) & 0x1000) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v1 )
    KeBugCheckEx(0x107u, BugCheckParameter1, 0LL, 0LL, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter1 + 360);
  if ( v3 )
    KeDisableProfiling(BugCheckParameter1, *(_QWORD *)(v3 + 8));
  v4 = *(_QWORD *)(BugCheckParameter1 + 544);
  *(_BYTE *)(BugCheckParameter1 + 643) = 22;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v20) = 4;
    else
      v20 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v20;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v6 = (__int64 *)(BugCheckParameter1 + 760);
  if ( *(_QWORD *)(BugCheckParameter1 + 760) == *(_QWORD *)(BugCheckParameter1 + 768) )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&KiProcessListLock, &LockHandle);
    v24 = *(_QWORD *)(v4 + 848);
    v25 = *(_QWORD **)(v4 + 856);
    if ( *(_QWORD *)(v24 + 8) != v4 + 848 || *v25 != v4 + 848 )
LABEL_59:
      __fastfail(3u);
    *v25 = v24;
    *(_QWORD *)(v24 + 8) = v25;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v4);
  v7 = (__int64 *)*v6;
  v8 = *(__int64 ***)(BugCheckParameter1 + 768);
  if ( *(__int64 **)(*v6 + 8) != v6 || *v8 != v6 )
    goto LABEL_59;
  *v8 = v7;
  v7[1] = (__int64)v8;
  _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
  if ( *(_QWORD *)(BugCheckParameter1 + 104) )
    KiRemoveThreadFromSchedulingGroup(BugCheckParameter1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v9 = *(_QWORD *)(BugCheckParameter1 + 232);
  if ( v9 )
    KiActivateWaiterQueueWithNoLocks(BugCheckParameter1, v9, BugCheckParameter1 + 520);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)BugCheckParameter1);
  v12 = (_QWORD *)(BugCheckParameter1 + 8);
  *(_DWORD *)(BugCheckParameter1 + 4) = 1;
  for ( i = *(_QWORD *)(BugCheckParameter1 + 8); (_QWORD *)i != v12; i = v39 )
  {
    v21 = i;
    v39 = *(_QWORD *)i;
    v22 = *(_BYTE *)(i + 16);
    if ( v22 == 1 )
    {
      v23 = *(unsigned __int16 *)(v21 + 18);
LABEL_32:
      KiTryUnwaitThread((__int64)CurrentPrcb, v21, v23, 0LL);
      continue;
    }
    if ( v22 == 2 )
    {
      *(_BYTE *)(v21 + 17) = 5;
      v26 = *(_QWORD *)(v21 + 24);
      *(_QWORD *)v21 = 0LL;
      v27 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
      {
        v34 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v27 == 2 )
          LODWORD(v35) = 4;
        else
          v35 = (-1LL << (v27 + 1)) & 4;
        v34[5] |= v35;
      }
      v28 = KeGetCurrentPrcb();
      CurrentThread = v28->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v33) = KeIsThreadRunning(v28->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v21, v33);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v26);
      v30 = (_QWORD *)(v26 + 8);
      if ( (_QWORD *)*v30 == v30
        || *(_DWORD *)(v26 + 40) >= *(_DWORD *)(v26 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v26 && CurrentThread->WaitReason == 15 )
      {
LABEL_50:
        v31 = *(_DWORD *)(v26 + 4);
        *(_DWORD *)(v26 + 4) = v31 + 1;
        v32 = *(__int64 **)(v26 + 32);
        if ( *v32 != v26 + 24 )
          goto LABEL_59;
        *(_QWORD *)v21 = v26 + 24;
        *(_QWORD *)(v21 + 8) = v32;
        *v32 = v21;
        *(_QWORD *)(v26 + 32) = v21;
        if ( !v31 && (_QWORD *)*v30 != v30 )
          KiWakeOtherQueueWaiters((__int64)v28, v26);
      }
      else
      {
        if ( !KiWakeQueueWaiter((__int64)v28, v26, v21) )
        {
          v30 = (_QWORD *)(v26 + 8);
          goto LABEL_50;
        }
        *(_QWORD *)v21 = 0LL;
      }
      _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
      continue;
    }
    if ( v22 != 4 )
    {
      v23 = 256LL;
      goto LABEL_32;
    }
    *(_BYTE *)(v21 + 17) = 5;
    *(_DWORD *)(BugCheckParameter1 + 4) = 0;
    KiInsertQueueDpc(*(_QWORD *)(v21 + 24), BugCheckParameter1, v21, 0LL, 0);
  }
  *(_QWORD *)(BugCheckParameter1 + 16) = BugCheckParameter1 + 8;
  *v12 = v12;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter1, 0xFFFFFF7F);
  *(_BYTE *)(BugCheckParameter1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  v14 = (signed __int64 *)(BugCheckParameter1 + 1192);
  _m_prefetchw(&PsReaperListHead);
  v15 = PsReaperListHead;
  do
  {
    *v14 = v15;
    v16 = v15;
    v15 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v14, v15);
  }
  while ( v15 != v16 );
  if ( v15 )
  {
    if ( qword_140C37EF8 && _interlockedbittestandreset((volatile signed __int32 *)&qword_140C37EF8, 0) )
    {
      v17 = 0xFFFFLL;
      goto LABEL_20;
    }
  }
  else
  {
    v17 = 0xFFFFFFFFLL;
LABEL_20:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2LL, v17) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_140C37EF8, 0);
  }
  _InterlockedOr(v36, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v38 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v38);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  return KiSwapThread(BugCheckParameter1, (__int64)CurrentPrcb, 0LL, v11);
}
