/*
 * XREFs of KePulseEvent @ 0x14035F580
 * Callers:
 *     MmResourcesAvailable @ 0x140311DB0 (MmResourcesAvailable.c)
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 *     KeBalanceSetManager @ 0x140390D00 (KeBalanceSetManager.c)
 *     DifKePulseEventWrapper @ 0x1405E1CD0 (DifKePulseEventWrapper.c)
 *     MiPulseLowAvailableEvent @ 0x140651230 (MiPulseLowAvailableEvent.c)
 *     MiPulseCommitSignal @ 0x140653E9C (MiPulseCommitSignal.c)
 *     NtPulseEvent @ 0x1407ECF70 (NtPulseEvent.c)
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  char v4; // bl
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  LIST_ENTRY *p_WaitListHead; // r12
  struct _LIST_ENTRY *Flink; // r13
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  char v13; // al
  __int64 v14; // r8
  struct _LIST_ENTRY *v15; // rax
  __int64 v16; // rbx
  struct _LIST_ENTRY *v17; // rcx
  char v18; // al
  bool v19; // zf
  __int64 v20; // rdi
  _QWORD *v21; // r15
  unsigned __int8 v22; // cl
  _DWORD *v23; // r9
  __int64 v24; // rdx
  struct _KPRCB *v25; // r14
  _KTHREAD *v26; // rbp
  __int64 v27; // r8
  int v28; // r8d
  __int64 *v29; // rdx
  __int64 v30; // rdi
  _QWORD *v31; // r15
  unsigned __int8 v32; // cl
  _DWORD *v33; // r9
  __int64 v34; // rdx
  struct _KPRCB *v35; // r14
  _KTHREAD *CurrentThread; // rbp
  __int64 v37; // r8
  int v38; // r8d
  __int64 *v39; // rdx
  unsigned __int8 v40; // [rsp+30h] [rbp-58h]
  LONG SignalState; // [rsp+90h] [rbp+8h]
  __int64 v44; // [rsp+A8h] [rbp+20h]

  v4 = Event->Header.Type & 0x7F;
  CurrentIrql = KeGetCurrentIrql();
  v40 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v44 = (__int64)CurrentPrcb;
  KiAcquireKobjectLockSafe(&Event->Header.Lock);
  SignalState = Event->Header.SignalState;
  if ( !SignalState )
  {
    Event->Header.SignalState = 1;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( !v4 )
    {
      while ( 1 )
      {
        if ( Flink == p_WaitListHead )
        {
          Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
          p_WaitListHead->Flink = p_WaitListHead;
          goto LABEL_6;
        }
        v12 = (__int64)Flink;
        Flink = Flink->Flink;
        v13 = *(_BYTE *)(v12 + 16);
        if ( v13 == 1 )
          break;
        if ( v13 == 2 )
        {
          *(_BYTE *)(v12 + 17) = 5;
          v30 = *(_QWORD *)(v12 + 24);
          *(_QWORD *)v12 = 0LL;
          v31 = (_QWORD *)(v30 + 8);
          v32 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 <= 0xFu )
          {
            v33 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v32 == 2 )
              LODWORD(v34) = 4;
            else
              v34 = (-1LL << (v32 + 1)) & 4;
            v33[5] |= v34;
          }
          v35 = KeGetCurrentPrcb();
          CurrentThread = v35->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v37) = KeIsThreadRunning(v35->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v12, v37);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v30);
          if ( (_QWORD *)*v31 == v31
            || *(_DWORD *)(v30 + 40) >= *(_DWORD *)(v30 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v30 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v35, v30, v12) )
          {
            v38 = *(_DWORD *)(v30 + 4);
            *(_DWORD *)(v30 + 4) = v38 + 1;
            v39 = *(__int64 **)(v30 + 32);
            if ( *v39 != v30 + 24 )
              goto LABEL_73;
            *(_QWORD *)v12 = v30 + 24;
            *(_QWORD *)(v12 + 8) = v39;
            *v39 = v12;
            *(_QWORD *)(v30 + 32) = v12;
            if ( !v38 && (_QWORD *)*v31 != v31 )
              KiWakeOtherQueueWaiters((__int64)v35, v30);
          }
          else
          {
            *(_QWORD *)v12 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v30, 0xFFFFFF7F);
          CurrentPrcb = (struct _KPRCB *)v44;
        }
        else if ( v13 == 4 )
        {
          *(_BYTE *)(v12 + 17) = 5;
          Event->Header.SignalState = 0;
          KiInsertQueueDpc(*(_QWORD *)(v12 + 24), (__int64)Event, v12, 0LL, 0);
        }
        else
        {
          v14 = 256LL;
LABEL_13:
          KiTryUnwaitThread((__int64)CurrentPrcb, v12, v14, 0LL);
        }
      }
      v14 = *(unsigned __int16 *)(v12 + 18);
      goto LABEL_13;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( Flink == p_WaitListHead )
          goto LABEL_6;
        v15 = Flink->Flink;
        v16 = (__int64)Flink;
        Flink = v15;
        v17 = *(struct _LIST_ENTRY **)(v16 + 8);
        if ( v15->Blink != (struct _LIST_ENTRY *)v16 || v17->Flink != (struct _LIST_ENTRY *)v16 )
LABEL_73:
          __fastfail(3u);
        v17->Flink = v15;
        v15->Blink = v17;
        v18 = *(_BYTE *)(v16 + 16);
        if ( v18 == 1 )
          break;
        if ( v18 == 2 )
        {
          *(_BYTE *)(v16 + 17) = 5;
          v20 = *(_QWORD *)(v16 + 24);
          *(_QWORD *)v16 = 0LL;
          v21 = (_QWORD *)(v20 + 8);
          v22 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 <= 0xFu )
          {
            v23 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v22 == 2 )
              LODWORD(v24) = 4;
            else
              v24 = (-1LL << (v22 + 1)) & 4;
            v23[5] |= v24;
          }
          v25 = KeGetCurrentPrcb();
          v26 = v25->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v27) = KeIsThreadRunning(v25->CurrentThread);
            EtwTraceEnqueueWork(v26, v16, v27);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v20);
          if ( (_QWORD *)*v21 == v21
            || *(_DWORD *)(v20 + 40) >= *(_DWORD *)(v20 + 44)
            || v26->Queue == (_DISPATCHER_HEADER *volatile)v20 && v26->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v25, v20, v16) )
          {
            v28 = *(_DWORD *)(v20 + 4);
            *(_DWORD *)(v20 + 4) = v28 + 1;
            v29 = *(__int64 **)(v20 + 32);
            if ( *v29 != v20 + 24 )
              goto LABEL_73;
            *(_QWORD *)v16 = v20 + 24;
            *(_QWORD *)(v16 + 8) = v29;
            *v29 = v16;
            *(_QWORD *)(v20 + 32) = v16;
            if ( !v28 && (_QWORD *)*v21 != v21 )
              KiWakeOtherQueueWaiters((__int64)v25, v20);
          }
          else
          {
            *(_QWORD *)v16 = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
          v19 = Event->Header.SignalState-- == 1;
          if ( v19 )
            goto LABEL_6;
          CurrentPrcb = (struct _KPRCB *)v44;
        }
        else if ( v18 == 4 )
        {
          *(_BYTE *)(v16 + 17) = 5;
          Event->Header.SignalState = 0;
          KiInsertQueueDpc(*(_QWORD *)(v16 + 24), (__int64)Event, v16, 0LL, 0);
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v16, 256LL, 0LL);
        }
      }
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), 0LL) )
      {
        v19 = Event->Header.SignalState-- == 1;
        if ( v19 )
          break;
      }
    }
  }
LABEL_6:
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher(v44, Wait != 0 ? 3 : 0, (struct _PROCESSOR_NUMBER)1, Increment, v40);
  return SignalState;
}
