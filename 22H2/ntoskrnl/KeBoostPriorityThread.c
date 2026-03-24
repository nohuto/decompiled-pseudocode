/*
 * XREFs of KeBoostPriorityThread @ 0x140353A70
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     ExpCreateWorkerThread @ 0x1406FD7FC (ExpCreateWorkerThread.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022D9F0 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14022F230 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x14022FC10 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x1402306D0 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1402C82E0 (KiAbProcessContextSwitch.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiRequestSoftwareInterrupt @ 0x14035E984 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140405AF0 (KiSwapContext.c)
 *     EtwTracePriority @ 0x1405A7DE4 (EtwTracePriority.c)
 */

char __fastcall KeBoostPriorityThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  void *v4; // rax
  int v5; // ebp
  int v7; // r13d
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // r14
  _DWORD *v11; // rcx
  int v12; // r12d
  int v13; // eax
  unsigned __int64 updated; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  ULONG_PTR v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KPRCB *v21; // rsi
  _DWORD *v22; // rcx
  _KTHREAD *NextThread; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  _DWORD *v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  _DWORD *v33; // rcx
  int v34; // eax
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  bool v37; // zf
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  int v40; // eax
  _QWORD *v42[9]; // [rsp+30h] [rbp-48h] BYREF
  int v43; // [rsp+80h] [rbp+8h] BYREF
  int v44; // [rsp+90h] [rbp+18h] BYREF
  int v45; // [rsp+98h] [rbp+20h]

  v4 = &KiInitialProcess;
  v5 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return (char)v4;
  v42[0] = 0LL;
  v7 = 0;
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
  v43 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v28 = v11[6];
        v11[6] = v28 + 1;
        if ( v28 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v27 = CurrentPrcb->SchedulerAssist;
    if ( v27 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v29 = v27[6] - 1;
        v27[6] = v29;
        if ( !v29 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v43, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v12 = *(char *)(a1 + 195);
  v45 = v12;
  if ( v12 < 16 && !*(_BYTE *)(a1 + 564) )
  {
    v13 = v5 + *(char *)(a1 + 563);
    if ( v13 > v12 )
    {
      v7 = v5 + *(char *)(a1 + 563);
      if ( v13 >= 16 )
        v7 = 15;
      if ( (_KTHREAD *)a1 != CurrentThread || CurrentPrcb->NestingLevel )
      {
        updated = *(_QWORD *)(a1 + 72);
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
        _enable();
      }
      v15 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
      if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
      *(_QWORD *)(a1 + 32) = v15;
      KiSetPriorityThread((_KTHREAD *)a1, (__int64)v42, v7);
    }
  }
  KiReleaseThreadLockSafe(a1);
  LOBYTE(v4) = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, v42);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      LOBYTE(v4) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)v4 )
      {
        LOBYTE(v16) = 2;
        LOBYTE(v4) = KiRequestSoftwareInterrupt(CurrentPrcb, v16);
      }
    }
    goto LABEL_21;
  }
  v17 = (ULONG_PTR)CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
    v21 = KeGetCurrentPrcb();
    v44 = 0;
    v22 = v21->SchedulerAssist;
    if ( v22 )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v30 = v22[6];
        v22[6] = v30 + 1;
        if ( v30 == -1 )
LABEL_55:
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v31 = v21->SchedulerAssist;
      if ( v31 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v32 = v31[6] - 1;
          v31[6] = v32;
          if ( !v32 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      do
        KeYieldProcessorEx(&v44, v18, v19, v20);
      while ( CurrentPrcb->PrcbLock );
      v33 = v21->SchedulerAssist;
      if ( v33 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v34 = v33[6];
          v33[6] = v34 + 1;
          if ( v34 == -1 )
            goto LABEL_55;
        }
      }
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v17, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    v12 = v45;
    if ( NextThread->WaitBlockFill6[68] == 1 )
    {
      v24 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
      NextThread->ReadyTime = v24 + MEMORY[0xFFFFF78000000320];
    }
    NextThread->WaitBlockFill6[68] = 2;
    *(_BYTE *)(v17 + 643) = 32;
    *(_BYTE *)(v17 + 390) = CurrentIrql;
    KiQueueReadyThread((__int64)CurrentPrcb, v17, v24, v25);
    LOBYTE(v26) = CurrentIrql;
    if ( !(unsigned __int8)KiSwapContext(v17, NextThread, v26) )
      goto LABEL_19;
    if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 )
      goto LABEL_61;
    goto LABEL_58;
  }
  if ( (*(_DWORD *)(v17 + 116) & 0x40) == 0 )
    goto LABEL_19;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
  {
LABEL_58:
    if ( (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      v37 = (v36[5] & 0xFFFF0003) == 0;
      v36[5] &= 0xFFFF0003;
      if ( v37 )
        KiRemoveSystemWorkPriorityKick(v35);
    }
  }
LABEL_61:
  __writecr8(1uLL);
  *(_DWORD *)(v17 + 116) &= ~0x40u;
  KiDeliverApc(0, 0, 0LL);
LABEL_19:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v37 = (v40 & v39[5]) == 0;
      v39[5] &= v40;
      if ( v37 )
        KiRemoveSystemWorkPriorityKick(v38);
    }
  }
  LOBYTE(v4) = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_21:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 && v7 )
    LOBYTE(v4) = EtwTracePriority(a1, 1328, v12, v7, 0LL);
  return (char)v4;
}
