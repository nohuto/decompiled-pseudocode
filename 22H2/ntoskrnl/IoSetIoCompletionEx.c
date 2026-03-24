/*
 * XREFs of IoSetIoCompletionEx @ 0x1402E6D30
 * Callers:
 *     PspSendReliableJobNotification @ 0x14065F2BC (PspSendReliableJobNotification.c)
 *     NtSetIoCompletionEx @ 0x14065F390 (NtSetIoCompletionEx.c)
 *     PspNotificationPacketCallback @ 0x1406977B0 (PspNotificationPacketCallback.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140242C80 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024BE60 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     KeInsertQueueEx @ 0x1402E6F10 (KeInsertQueueEx.c)
 *     KeIsThreadRunning @ 0x140512F94 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A7700 (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x14070250C (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  unsigned int v7; // r14d
  int v8; // esi
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rbx
  _QWORD *v12; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // r13
  __int64 v16; // r9
  int v17; // edx
  _QWORD *v18; // rcx
  __int64 MiniCompletionPacket; // rax
  unsigned __int8 IsThreadRunning; // al

  v7 = 0;
  v8 = (int)SchedulerAssist;
  v9 = a3;
  v10 = a2;
  v11 = a1;
  if ( a7 )
  {
    v12 = (_QWORD *)(a1 + 8);
    *(_QWORD *)(a7 + 48) = a5;
    *(_QWORD *)(a7 + 24) = a2;
    *(_QWORD *)(a7 + 32) = a3;
    *(_DWORD *)(a7 + 40) = (_DWORD)SchedulerAssist;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, a7, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v11, a2, a3, (__int64)SchedulerAssist);
    if ( (_QWORD *)*v12 == v12
      || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v11 && CurrentThread->WaitReason == 15
      || !KiWakeQueueWaiter((__int64)CurrentPrcb, v11, a7, v16) )
    {
      v17 = *(_DWORD *)(v11 + 4);
      *(_DWORD *)(v11 + 4) = v17 + 1;
      v18 = *(_QWORD **)(v11 + 32);
      if ( *v18 != v11 + 24 )
        __fastfail(3u);
      *(_QWORD *)a7 = v11 + 24;
      *(_QWORD *)(a7 + 8) = v18;
      *v18 = a7;
      *(_QWORD *)(v11 + 32) = a7;
      if ( !v17 && (_QWORD *)*v12 != v12 )
        KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v11);
    }
    _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  }
  else
  {
    LOBYTE(a1) = 1;
    MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6);
    if ( MiniCompletionPacket )
    {
      *(_QWORD *)(MiniCompletionPacket + 24) = v10;
      *(_QWORD *)(MiniCompletionPacket + 32) = v9;
      *(_DWORD *)(MiniCompletionPacket + 40) = v8;
      *(_QWORD *)(MiniCompletionPacket + 48) = a5;
      KeInsertQueueEx(v11, MiniCompletionPacket, 0LL, 0LL);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v7;
}
