LONG __stdcall KeReleaseSemaphore(PRKSEMAPHORE Semaphore, KPRIORITY Increment, LONG Adjustment, BOOLEAN Wait)
{
  unsigned __int8 CurrentIrql; // r13
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  LONG SignalState; // ecx
  LONG v11; // eax
  struct _KSEMAPHORE *Flink; // r12
  struct _KSEMAPHORE *v13; // rax
  __int64 v14; // rbx
  struct _KSEMAPHORE **v15; // rcx
  char v16; // al
  bool v17; // zf
  __int64 v19; // rdi
  _QWORD *v20; // r15
  unsigned __int8 v21; // cl
  _DWORD *v22; // r9
  __int64 v23; // rdx
  struct _KPRCB *v24; // r14
  _KTHREAD *CurrentThread; // rbp
  unsigned __int8 IsThreadRunning; // al
  int v27; // r8d
  __int64 *v28; // rdx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  __int64 v33; // [rsp+80h] [rbp+8h]
  LONG v35; // [rsp+90h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v8) = 4;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v33 = (__int64)CurrentPrcb;
  KiAcquireKobjectLockSafe(Semaphore);
  SignalState = Semaphore->Header.SignalState;
  v35 = SignalState;
  v11 = SignalState + Adjustment;
  if ( SignalState + Adjustment > Semaphore->Limit || v11 < SignalState )
  {
    _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      v29 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(3221225543LL);
  }
  Semaphore->Header.SignalState = v11;
  if ( !SignalState )
  {
    Flink = (struct _KSEMAPHORE *)Semaphore->Header.WaitListHead.Flink;
    while ( Flink != (struct _KSEMAPHORE *)&Semaphore->Header.WaitListHead )
    {
      v13 = *(struct _KSEMAPHORE **)&Flink->Header.Lock;
      v14 = (__int64)Flink;
      Flink = v13;
      v15 = *(struct _KSEMAPHORE ***)(v14 + 8);
      if ( v13->Header.WaitListHead.Flink != (struct _LIST_ENTRY *)v14 || *v15 != (struct _KSEMAPHORE *)v14 )
LABEL_45:
        __fastfail(3u);
      *v15 = v13;
      v13->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v15;
      v16 = *(_BYTE *)(v14 + 16);
      switch ( v16 )
      {
        case 1:
          if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
          {
            v17 = Semaphore->Header.SignalState-- == 1;
            if ( v17 )
              goto LABEL_17;
          }
          break;
        case 2:
          *(_BYTE *)(v14 + 17) = 5;
          v19 = *(_QWORD *)(v14 + 24);
          *(_QWORD *)v14 = 0LL;
          v20 = (_QWORD *)(v19 + 8);
          v21 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 <= 0xFu )
          {
            v22 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v21 == 2 )
              LODWORD(v23) = 4;
            else
              v23 = (-1LL << (v21 + 1)) & 4;
            v22[5] |= v23;
          }
          v24 = KeGetCurrentPrcb();
          CurrentThread = v24->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v24->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v14, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v19);
          if ( (_QWORD *)*v20 == v20
            || *(_DWORD *)(v19 + 40) >= *(_DWORD *)(v19 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v19 && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v24, v19, v14) )
          {
            v27 = *(_DWORD *)(v19 + 4);
            *(_DWORD *)(v19 + 4) = v27 + 1;
            v28 = *(__int64 **)(v19 + 32);
            if ( *v28 != v19 + 24 )
              goto LABEL_45;
            *(_QWORD *)v14 = v19 + 24;
            *(_QWORD *)(v14 + 8) = v28;
            *v28 = v14;
            *(_QWORD *)(v19 + 32) = v14;
            if ( !v27 && (_QWORD *)*v20 != v20 )
              KiWakeOtherQueueWaiters(v24, v19);
          }
          else
          {
            *(_QWORD *)v14 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
          v17 = Semaphore->Header.SignalState-- == 1;
          if ( v17 )
            goto LABEL_17;
          CurrentPrcb = (struct _KPRCB *)v33;
          break;
        case 4:
          *(_BYTE *)(v14 + 17) = 5;
          Semaphore->Header.SignalState = 0;
          KiInsertQueueDpc(*(_QWORD *)(v14 + 24), (__int64)Semaphore, v14, 0LL, 0);
          break;
        default:
          KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL);
          break;
      }
    }
  }
LABEL_17:
  _InterlockedAnd(&Semaphore->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher(v33, Wait != 0 ? 3 : 0, (struct _PROCESSOR_NUMBER)1, Increment, CurrentIrql);
  return v35;
}
