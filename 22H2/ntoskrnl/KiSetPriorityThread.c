/*
 * XREFs of KiSetPriorityThread @ 0x14022FC10
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14021BC50 (PsImpersonateContainerOfThread.c)
 *     KeSetPriorityBoost @ 0x14022F060 (KeSetPriorityBoost.c)
 *     KeClearSystemPriority @ 0x14022F920 (KeClearSystemPriority.c)
 *     KeRemovePriQueue @ 0x140241B40 (KeRemovePriQueue.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1402422D0 (KiTryUnwaitThreadWithPriority.c)
 *     KeSetPriorityThread @ 0x140257340 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1402586C0 (KeSetBasePriorityThread.c)
 *     KiAbApplyWakeupBoost @ 0x140271FFC (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x140272404 (KiAbSetMinimumThreadPriority.c)
 *     KiSetPriorityBoost @ 0x140315DB0 (KiSetPriorityBoost.c)
 *     KeBoostPriorityThread @ 0x140353A70 (KeBoostPriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14035AEA4 (KeSetPriorityAndQuantumProcess.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14035EACC (KiAbThreadUnboostCpuPriority.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E508 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x140520C00 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     KiSelectReadyThreadEx @ 0x14022F830 (KiSelectReadyThreadEx.c)
 *     KiComputePriorityFloor @ 0x140230730 (KiComputePriorityFloor.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140230760 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x1402307C0 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x1402308B0 (KiAcquireThreadStateLock.c)
 *     KiIsThreadRankNonZero @ 0x14024CDC0 (KiIsThreadRankNonZero.c)
 *     KiReleaseThreadStateLock @ 0x14035B9E0 (KiReleaseThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14035BA40 (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x14035BAA0 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14035BAD0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSendSoftwareInterrupt @ 0x14035E910 (KiSendSoftwareInterrupt.c)
 *     KiSetSchedulerAssistPriority @ 0x140520894 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiSetPriorityThread(_KTHREAD *a1, __int64 a2, unsigned __int8 a3)
{
  int v3; // edi
  unsigned int v6; // ebp
  char v7; // al
  __int64 v8; // r9
  int Priority; // r15d
  char v10; // r14
  struct _KPRCB *v11; // rsi
  _KTHREAD *NextThread; // r12
  _KTHREAD **p_NextThread; // r13
  bool v14; // cc
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *v19; // rcx
  __int64 v20; // rax
  _KTHREAD *v21; // rbp
  char v22; // cl
  _BYTE *v23; // rax
  __int64 v24; // rdx
  bool v25; // zf
  __int64 Number; // rcx
  char v27; // al
  __int64 ready; // rax
  _KTHREAD *v29; // rbp
  char v30; // cl
  char IsThreadRankNonZero; // al
  _BYTE *SchedulerAssist; // rax
  __int64 v33; // rdx
  bool v34; // zf
  _DWORD *v35; // r8
  struct _KPRCB *v36; // rax
  __int64 v37; // rcx
  struct _KPRCB *v38; // [rsp+60h] [rbp+8h] BYREF
  __int64 v39; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v6 = (char)KiComputePriorityFloor(a1, a3);
  if ( a1->Priority == v6 )
    return 0;
  v7 = KiAcquireThreadStateLock(a1, &v38, &v39);
  Priority = a1->Priority;
  v10 = 0;
  if ( v7 != 2 )
  {
    if ( v7 == 1 )
    {
      v11 = v38;
      KiRemoveThreadFromAnyReadyQueue(v38, v39, a1, (unsigned int)Priority);
      KiUpdateThreadPriority(0LL, a1, v6, 0LL);
      KiPrepareReadyThreadForRescheduling(a1, v6, a2);
    }
    else if ( v7 == 3 )
    {
      v11 = v38;
      LOBYTE(v8) = 1;
      KiUpdateThreadPriority(v38, a1, v6, v8);
      if ( (int)v6 < Priority )
      {
        ready = KiSelectReadyThreadEx(v11, a1, 0);
        v29 = (_KTHREAD *)ready;
        if ( ready )
        {
          if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
          {
            IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v11);
            v30 = 1;
            if ( !IsThreadRankNonZero )
              v30 = v29->Priority;
          }
          else
          {
            v30 = *(_BYTE *)(ready + 195);
          }
          *v11->PriorityState = v30;
          SchedulerAssist = v11->SchedulerAssist;
          if ( SchedulerAssist )
          {
            v33 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( v29 != v11->IdleThread )
              v33 = (unsigned int)v30;
            KiSetSchedulerAssistPriority(v11->SchedulerAssist, v33, 0LL);
            SchedulerAssist = v11->SchedulerAssist;
          }
          v34 = v29 == v11->IdleThread;
          v11->NextThread = v29;
          if ( SchedulerAssist )
            SchedulerAssist[16] = v34;
          if ( v29->WaitBlockFill6[68] == 1 )
            v29->ReadyTime = v29->ReadyTime - v29->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
          v29->WaitBlockFill6[68] = 3;
          KiInsertDeferredReadyList(a2, a1);
          v11 = v38;
        }
      }
      else
      {
        v3 = v6;
      }
    }
    else
    {
      KiUpdateThreadPriority(0LL, a1, v6, 0LL);
      v11 = v38;
    }
    goto LABEL_9;
  }
  v11 = v38;
  NextThread = v38->NextThread;
  p_NextThread = &v38->NextThread;
  LOBYTE(v8) = NextThread == 0LL;
  KiUpdateThreadPriority(v38, a1, v6, v8);
  v14 = (int)v6 <= Priority;
  if ( (int)v6 >= Priority )
    goto LABEL_4;
  if ( NextThread )
  {
    v14 = (int)v6 <= Priority;
LABEL_4:
    if ( v14 || NextThread )
      goto LABEL_9;
    if ( a1->WaitBlockFill6[68] == 2 )
      v3 = v6;
    goto LABEL_8;
  }
  v11 = v38;
  if ( a1->WaitBlockFill6[68] != 2 )
  {
    if ( v38->ReadySummary >> (v6 + 1) )
      a1->WaitRegister.Flags |= 0x10u;
    goto LABEL_9;
  }
  v20 = KiSelectReadyThreadEx(v38, a1, 0);
  v21 = (_KTHREAD *)v20;
  if ( v20 )
  {
    if ( (*(_BYTE *)(v20 + 2) & 4) != 0 )
    {
      v27 = KiIsThreadRankNonZero(v20, v11);
      v22 = 1;
      if ( !v27 )
        v22 = v21->Priority;
    }
    else
    {
      v22 = *(_BYTE *)(v20 + 195);
    }
    *v11->PriorityState = v22;
    v23 = v11->SchedulerAssist;
    if ( v23 )
    {
      v24 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( v21 != v11->IdleThread )
        v24 = (unsigned int)v22;
      KiSetSchedulerAssistPriority(v11->SchedulerAssist, v24, 0LL);
      v23 = v11->SchedulerAssist;
    }
    v25 = v21 == v11->IdleThread;
    *p_NextThread = v21;
    if ( v23 )
      v23[16] = v25;
    if ( v21->WaitBlockFill6[68] == 1 )
      v21->ReadyTime = v21->ReadyTime - v21->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    v21->WaitBlockFill6[68] = 3;
    v10 = 1;
LABEL_8:
    v11 = v38;
  }
LABEL_9:
  KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  KiReleaseThreadStateLock(v15, v11, v39);
  if ( v10 )
  {
    LODWORD(v16) = KeGetPcr()->Prcb.Number;
    Number = v38->Number;
    if ( (_DWORD)v16 != (_DWORD)Number )
    {
      LOBYTE(v16) = 2;
      KiSendSoftwareInterrupt(Number, v16);
    }
  }
  if ( v3 > 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (KiVelocityFlags & 2) != 0 )
    {
      v19 = v38->SchedulerAssist;
      if ( v19 )
      {
        if ( CurrentPrcb->SchedulerAssist
          && CurrentPrcb != v38
          && v3 >= 8
          && ((*v19 & 0x100000) != 0 || (*v19 & 0x40000) != 0 && (unsigned __int8)*v19 < v3) )
        {
          v25 = HvlpVirtualProcessorsIdentityMapped == 0;
          v35 = CurrentPrcb->SchedulerAssist;
          v36 = v38;
          v35[3] = 2;
          v37 = v36->Number;
          if ( v25 )
            LODWORD(v37) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)v37 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v37] << 6);
          v35[2] = v37;
          __writemsr(0x400000C2u, (unsigned int)v37);
        }
      }
    }
  }
  return 1;
}
