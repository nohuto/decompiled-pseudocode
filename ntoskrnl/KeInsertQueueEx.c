/*
 * XREFs of KeInsertQueueEx @ 0x140292940
 * Callers:
 *     IoSetIoCompletionEx3 @ 0x1402928A0 (IoSetIoCompletionEx3.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 * Callees:
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, unsigned int a3, char a4)
{
  char v4; // r12
  _QWORD *v5; // rsi
  unsigned int v6; // r15d
  BOOL v7; // r13d
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // r14
  _QWORD *p_Lock; // rcx
  bool v14; // r15
  int v15; // ecx
  int v16; // eax
  _QWORD *v17; // rdx
  _DWORD *SchedulerAssist; // r9
  __int64 v20; // rdx
  unsigned __int8 IsThreadRunning; // al
  unsigned __int8 v22; // [rsp+70h] [rbp+8h]
  unsigned int v23; // [rsp+80h] [rbp+18h]
  unsigned int v24; // [rsp+88h] [rbp+20h]

  v23 = a3;
  v4 = 0;
  v5 = (_QWORD *)(a1 + 8);
  v6 = a3;
  v7 = a4 != 0;
  CurrentIrql = KeGetCurrentIrql();
  v22 = CurrentIrql;
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
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, a2, IsThreadRunning);
  }
  if ( v6 )
  {
    if ( (*(_BYTE *)(a1 + 1) & 2) != 0 )
      v6 = 0;
    v23 = v6;
  }
  p_Lock = &CurrentThread->Header.Lock;
  if ( CurrentThread[1].WaitBlock[1].Object )
    p_Lock = CurrentThread[1].WaitBlock[1].Object;
  v14 = v7 && *(_BYTE *)(p_Lock[68] + 1850LL) == 2;
  KiAcquireKobjectLockSafe(a1);
  v24 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v5 == v5 )
  {
    v15 = *(_DWORD *)(a1 + 4);
    v16 = v15 + 1;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 40) < *(_DWORD *)(a1 + 44) || v14)
      && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)a1 || CurrentThread->WaitReason != 15)
      && (unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a1, a2) )
    {
      *a2 = 0LL;
      goto LABEL_15;
    }
    v15 = *(_DWORD *)(a1 + 4);
    v16 = v15 + 1;
  }
  *(_DWORD *)(a1 + 4) = v16;
  v17 = *(_QWORD **)(a1 + 32);
  if ( *v17 != a1 + 24 )
    __fastfail(3u);
  *a2 = a1 + 24;
  a2[1] = v17;
  *v17 = a2;
  *(_QWORD *)(a1 + 32) = a2;
  if ( !v15 && (_QWORD *)*v5 != v5 )
    KiWakeOtherQueueWaiters(CurrentPrcb, a1);
LABEL_15:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( v7 )
    v4 = 3;
  KiExitDispatcher((__int64)CurrentPrcb, v4, (struct _PROCESSOR_NUMBER)1, v23, v22);
  return v24;
}
