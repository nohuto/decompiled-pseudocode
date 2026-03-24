/*
 * XREFs of KiInsertQueueInternal @ 0x140316088
 * Callers:
 *     KiWakeOtherQueueWaiters @ 0x140242C80 (KiWakeOtherQueueWaiters.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140242C80 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024BE60 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x140512F94 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A7700 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiInsertQueueInternal(__int64 a1, __int64 *a2, __int64 a3, _DWORD *SchedulerAssist)
{
  _QWORD *v4; // rsi
  __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rbp
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // edx
  __int64 **v13; // rcx
  __int64 v14; // r8

  *a2 = 0LL;
  v4 = (_QWORD *)(a1 + 8);
  v5 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (__int64 *)((-1LL << (CurrentIrql + 1)) & 4);
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v14) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v5, v14);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, (__int64)a2, a3, (__int64)SchedulerAssist);
  if ( (_QWORD *)*v4 == v4
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || (LOBYTE(v11) = KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)v5, v10), !(_BYTE)v11) )
  {
    v12 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v12 + 1;
    v11 = a1 + 24;
    v13 = *(__int64 ***)(a1 + 32);
    if ( *v13 != (__int64 *)(a1 + 24) )
      __fastfail(3u);
    *v5 = v11;
    v5[1] = (__int64)v13;
    *v13 = v5;
    *(_QWORD *)(a1 + 32) = v5;
    if ( !v12 && (_QWORD *)*v4 != v4 )
      LOBYTE(v11) = KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a1);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v11;
}
