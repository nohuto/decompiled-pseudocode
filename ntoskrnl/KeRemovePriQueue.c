/*
 * XREFs of KeRemovePriQueue @ 0x140352720
 * Callers:
 *     ExpWorkerThread @ 0x140352200 (ExpWorkerThread.c)
 * Callees:
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     HalRequestSoftwareInterrupt @ 0x140230830 (HalRequestSoftwareInterrupt.c)
 *     KiFastExitThreadWait @ 0x140239300 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiProcessThreadWaitList @ 0x1402508F0 (KiProcessThreadWaitList.c)
 *     PoGetFrequencyBucket @ 0x140254EC0 (PoGetFrequencyBucket.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140256710 (KiEndThreadAccountingPeriodEx.c)
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     KiSwitchPriQueue @ 0x1402FBDD4 (KiSwitchPriQueue.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14033FBD0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAdjustRealtimePriorityFloor @ 0x14033FCCC (KiAdjustRealtimePriorityFloor.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiAttemptFastRemovePriQueue @ 0x140352DB0 (KiAttemptFastRemovePriQueue.c)
 *     KiGetProcessorEfficiencyClass @ 0x14036A2D4 (KiGetProcessorEfficiencyClass.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiBeginCounterAccumulation @ 0x140571C80 (KiBeginCounterAccumulation.c)
 *     KiGetDueTimeWithThreadTimerDelay @ 0x140577DA8 (KiGetDueTimeWithThreadTimerDelay.c)
 */

struct _KPRCB *__fastcall KeRemovePriQueue(ULONG_PTR a1, char a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // dl
  unsigned __int8 *p_WaitIrql; // r14
  __int64 v8; // rcx
  unsigned int v9; // r12d
  unsigned __int8 v10; // bp
  $FF35E1D90CD8CB7063F56392666DF2F1 *v11; // r15
  int v12; // r9d
  __int64 Queue; // r8
  __int64 v14; // r8
  unsigned int v15; // edi
  __int64 v16; // rdi
  unsigned __int64 DueTimeWithThreadTimerDelay; // rax
  __int64 v18; // rcx
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *v20; // rcx
  struct _KPRCB *result; // rax
  _DWORD *SchedulerAssist; // r10
  __int64 v23; // r8
  __int64 v24; // rbp
  int v25; // edi
  __int64 QueuePriority; // rax
  struct _KPRCB *v27; // rdi
  struct _KPRCB *v28; // rdi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int64 CycleTime; // r14
  unsigned __int64 v32; // rax
  bool v33; // zf
  unsigned __int64 v34; // r11
  struct _KPRCB *v35; // rcx
  signed __int32 *v36; // r8
  unsigned __int64 v37; // rcx
  int v38; // r8d
  int v39; // edx
  _DISPATCHER_HEADER *volatile v40; // rcx
  signed __int32 v41; // eax
  signed __int32 v42; // ett
  unsigned int FrequencyBucket; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  unsigned __int8 ProcessorEfficiencyClass; // al
  __int64 v47; // r9
  unsigned __int64 *v48; // rdx
  __int64 v49; // r10
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v51; // r11
  unsigned __int8 v52; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v54; // rdx
  _DWORD *v55; // r9
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rdi
  int v59; // ecx
  unsigned __int64 v60; // r11
  unsigned __int8 v61; // r8
  _DWORD *v62; // r10
  __int64 v63; // rdx
  _BYTE *v64; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  int v67; // [rsp+30h] [rbp-68h] BYREF
  int v68; // [rsp+34h] [rbp-64h] BYREF
  int v69; // [rsp+38h] [rbp-60h] BYREF
  __int64 v70; // [rsp+40h] [rbp-58h]
  int v73; // [rsp+B0h] [rbp+18h] BYREF
  int v74; // [rsp+B8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v70 = 0LL;
  v73 = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    p_WaitIrql = &CurrentThread->WaitIrql;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v23) = 4;
      else
        v23 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v23;
    }
    p_WaitIrql = &CurrentThread->WaitIrql;
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v8 = 1LL;
  if ( a4 )
  {
    if ( *(int *)(a4 + 4) < 0 )
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      p_WaitIrql = &CurrentThread->WaitIrql;
      v8 = *v51 + CurrentThread->RelativeTimerBias;
      v9 = 2;
      v70 = UnbiasedInterruptTime - v8;
    }
    else
    {
      v9 = 1;
      v70 = *(_QWORD *)a4;
    }
  }
  else
  {
    v9 = 0;
  }
  while ( 1 )
  {
    v10 = *p_WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = a2;
      if ( a3 )
        CurrentThread->MiscFlags |= 0x10u;
      v74 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v74);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || v10 )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
      {
        v52 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v52 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v54 = CurrentPrcb->SchedulerAssist;
          v33 = (v54[5] & 0xFFFF0003) == 0;
          v54[5] &= 0xFFFF0003;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      v8 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v8 <= 0xFu )
      {
        v55 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)v8 == 2 )
        {
          LODWORD(v56) = 4;
        }
        else
        {
          v8 = (unsigned int)(unsigned __int8)v8 + 1;
          v56 = (-1LL << v8) & 4;
        }
        v55[5] |= v56;
      }
      *p_WaitIrql = 0;
    }
    v11 = &CurrentThread->320;
    if ( a3 )
    {
      if ( CurrentThread->Alerted[a2] )
      {
        v57 = 257;
        CurrentThread->Alerted[a2] = 0;
        v58 = 257LL;
        v12 = 0;
      }
      else if ( !a2
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        v12 = 0;
        if ( CurrentThread->Alerted[0] )
        {
          v57 = 257;
          CurrentThread->Alerted[0] = 0;
          v58 = 257LL;
        }
        else
        {
          v57 = 0;
          v58 = 0LL;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        v57 = 192;
        v58 = 192LL;
        v12 = 0;
      }
      if ( !v57 )
      {
LABEL_16:
        CurrentThread->WaitBlockFill6[68] = 5;
        CurrentThread->WaitReason = 15;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_17;
      }
    }
    else
    {
      v12 = 0;
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !a2 )
        goto LABEL_16;
      v58 = 192LL;
    }
    CurrentThread->ThreadLock = 0LL;
    KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), v10);
    if ( v58 )
      return (struct _KPRCB *)v58;
    v12 = 0;
LABEL_17:
    Queue = (__int64)CurrentThread->Queue;
    if ( a1 != Queue )
    {
      KiSwitchPriQueue((__int64)CurrentThread, a1, Queue);
      v12 = 0;
    }
    CurrentThread->WaitBlock[0].WaitType = 3;
    v14 = 128LL;
    CurrentThread->WaitBlockFill4[17] = 4;
    v15 = 0;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
      v12 = 0;
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v67 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v67);
        while ( CurrentThread->ThreadLock );
      }
      v24 = KiAttemptFastRemovePriQueue(a1);
      if ( v24 )
      {
        v25 = v73;
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != v73 )
        {
          v39 = CurrentThread->QueuePriority & 0x100;
          if ( !v39 )
          {
            v40 = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&v40[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&v40[22].WaitListHead + v73);
            v25 = v73;
          }
          CurrentThread->QueuePriority = (unsigned __int8)v25 | v39;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement((__int64)CurrentThread, &v73, 0);
        KiAdjustRealtimePriorityFloor((ULONG_PTR)CurrentThread, v25);
        if ( v25 != CurrentThread->Priority )
        {
          v28 = KeGetCurrentPrcb();
          if ( v28->NestingLevel )
          {
            CycleTime = CurrentThread->CycleTime;
          }
          else
          {
            _disable();
            v28->NestingLevel = 1;
            v29 = __rdtsc();
            v30 = v29 - v28->StartCycles;
            CycleTime = v30 + CurrentThread->CycleTime;
            CurrentThread->CycleTime = CycleTime;
            v32 = ((v30 * v28->CpuCycleScalingFactor) >> 16) + CurrentThread->CurrentRunTime;
            if ( v32 > 0xFFFFFFFF )
              LODWORD(v32) = -1;
            v28->StartCycles = v29;
            v33 = (CurrentThread->Header.Size & 0xBE) == 0;
            CurrentThread->CurrentRunTime = v32;
            if ( !v33 )
              KiEndThreadAccountingPeriodEx((__int64)v28, (__int64)CurrentThread, v30, 0LL);
            v34 = __rdtsc();
            v28->CycleTime += v34 - v28->StartCycles;
            if ( (CurrentThread->Header.Size & 0x20) != 0 )
            {
              FrequencyBucket = PoGetFrequencyBucket((__int64)v28);
              ProcessorEfficiencyClass = KiGetProcessorEfficiencyClass(v28, v44, v45, FrequencyBucket);
              v48 = &v28->Cycles[v47][ProcessorEfficiencyClass];
              *v48 += v49;
            }
            if ( (CurrentThread->Header.Size & 0x40) != 0 )
            {
              v64 = CurrentThread->SchedulerAssist;
              if ( v64 )
                v64[64] = 1;
            }
            v28->StartCycles = v34;
            if ( (CurrentThread->Header.Size & 2) != 0 )
              KiBeginCounterAccumulation(CurrentThread, 0LL);
            v33 = v28->InterruptRequest == 0;
            v28->NestingLevel = 0;
            if ( !v33 )
            {
              v28->InterruptRequest = 0;
              HalRequestSoftwareInterrupt(2);
            }
            v35 = KeGetCurrentPrcb();
            v36 = (signed __int32 *)v35->SchedulerAssist;
            if ( v36 )
            {
              _m_prefetchw(v36);
              v41 = *v36;
              do
              {
                v42 = v41;
                v41 = _InterlockedCompareExchange(v36, v41 & 0xFFDFFFFF, v41);
              }
              while ( v42 != v41 );
              if ( (v41 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v35);
            }
            _enable();
          }
          v37 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
          v38 = v73;
          CurrentThread->QuantumTarget = v37;
          KiSetPriorityThread((__int64)CurrentThread, 0LL, v38);
        }
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_44;
      }
      v12 = 0;
      CurrentThread->ThreadLock = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      break;
    v16 = v70;
    DueTimeWithThreadTimerDelay = v70;
    if ( v9 == 2 )
    {
      KiQueryUnbiasedInterruptTime();
      DueTimeWithThreadTimerDelay = KiGetDueTimeWithThreadTimerDelay(CurrentThread, (unsigned int)(v59 + 2), v16, 0LL);
    }
    else
    {
      if ( !v9 )
        goto LABEL_24;
      if ( !v70 )
        goto LABEL_77;
      v60 = MEMORY[0xFFFFF78000000014];
    }
    if ( v60 > DueTimeWithThreadTimerDelay )
    {
LABEL_77:
      v24 = 258LL;
      goto LABEL_44;
    }
LABEL_24:
    v68 = v12;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v68);
      while ( CurrentThread->ThreadLock );
    }
    v18 = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = v18 | 0x100;
    v19 = (struct _LIST_ENTRY *)(a1 + 8);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 4 * v18 + 536));
    CurrentThread->ThreadLock = 0LL;
    v20 = *(struct _LIST_ENTRY **)(a1 + 8);
    if ( v20->Blink != (struct _LIST_ENTRY *)(a1 + 8) )
      goto LABEL_141;
    v11->WaitBlock[0].WaitListEntry.Flink = v20;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v19;
    v20->Blink = (struct _LIST_ENTRY *)v11;
    v19->Flink = (struct _LIST_ENTRY *)v11;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait((ULONG_PTR)CurrentThread, (__int64 *)&CurrentThread->320, v9, v16, 0LL);
    CurrentThread->WaitReason = 0;
    if ( result != (struct _KPRCB *)256 )
      return result;
    v61 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v61 <= 0xFu )
    {
      v62 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v61 == 2 )
      {
        LODWORD(v63) = 4;
      }
      else
      {
        v8 = (unsigned int)v61 + 1;
        v63 = (-1LL << (v61 + 1)) & 4;
      }
      v62[5] |= v63;
    }
    *p_WaitIrql = v61;
  }
  v69 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v69);
    while ( CurrentThread->ThreadLock );
  }
  if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 )
  {
    CurrentThread->Queue = 0LL;
    Flink = CurrentThread->QueueListEntry.Flink;
    Blink = CurrentThread->QueueListEntry.Blink;
    if ( Flink->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
LABEL_141:
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  CurrentThread->ThreadLock = 0LL;
  v24 = 128LL;
LABEL_44:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  CurrentThread->WaitReason = 0;
  v27 = KeGetCurrentPrcb();
  if ( v27->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)v27, 1u, 0, 2u);
  LOBYTE(v14) = 1;
  KiFastExitThreadWait((__int64)v27, (__int64)CurrentThread, v14);
  return (struct _KPRCB *)v24;
}
