/*
 * XREFs of KeSetActualBasePriorityThread @ 0x14022FF20
 * Callers:
 *     MiZeroLargePages @ 0x140231E90 (MiZeroLargePages.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140265340 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14026730C (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140267590 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14026782C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1402680B8 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     IoApplyPriorityInfoThread @ 0x140277BC0 (IoApplyPriorityInfoThread.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140312490 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140312670 (SmKmStoreHelperWorker.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14032998C (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiStoreUpdateMemoryConditions @ 0x14033A2F4 (MiStoreUpdateMemoryConditions.c)
 *     MiWakeModifiedPageWriter @ 0x140350344 (MiWakeModifiedPageWriter.c)
 *     MiFlushAllHintedStorePages @ 0x1403503A0 (MiFlushAllHintedStorePages.c)
 *     PfpServiceMainThreadUnboost @ 0x140382BC0 (PfpServiceMainThreadUnboost.c)
 *     PfpServiceMainThreadBoost @ 0x14038C848 (PfpServiceMainThreadBoost.c)
 *     PopCreatePowerThread @ 0x1403A4B38 (PopCreatePowerThread.c)
 *     MiMappedPageWriter @ 0x1403B70D0 (MiMappedPageWriter.c)
 *     MiModifiedPageWriter @ 0x1403BEA70 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403C81C0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiSetZeroPageThreadPriority @ 0x14054FDF4 (MiSetZeroPageThreadPriority.c)
 *     MiDeletePartitionResources @ 0x140561858 (MiDeletePartitionResources.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     EtwpLogger @ 0x1406BE4D0 (EtwpLogger.c)
 *     NtSetSystemInformation @ 0x140707C50 (NtSetSystemInformation.c)
 *     ExpWorkQueueManagerThread @ 0x1407AFC80 (ExpWorkQueueManagerThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407C9594 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxEmergencyWorker @ 0x1407D4FF0 (PopFxEmergencyWorker.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x14022F230 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSelectReadyThreadEx @ 0x14022F830 (KiSelectReadyThreadEx.c)
 *     KiProcessDeferredReadyList @ 0x140230540 (KiProcessDeferredReadyList.c)
 *     KiComputePriorityFloor @ 0x140230730 (KiComputePriorityFloor.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140230760 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x1402307C0 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x1402308B0 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x14024CDC0 (KiIsThreadRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402DE7EC (KiAbQueueAutoBoostDpc.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402F76C0 (KiPriQueueThreadPriorityChanged.c)
 *     KiReleaseThreadStateLock @ 0x14035B9E0 (KiReleaseThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14035BA40 (KiPrepareReadyThreadForRescheduling.c)
 *     KiInsertDeferredReadyList @ 0x14035BAA0 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14035BAD0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSendSoftwareInterrupt @ 0x14035E910 (KiSendSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140520894 (KiSetSchedulerAssistPriority.c)
 *     EtwTracePriority @ 0x1405A7DE4 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // r14
  _DWORD *v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // r12d
  struct _KPRCB *v9; // rcx
  char v10; // al
  unsigned __int64 updated; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r14d
  int v15; // ecx
  __int64 v16; // r9
  int v17; // r15d
  int v18; // r13d
  struct _KPRCB *v19; // rsi
  _KTHREAD *NextThread; // r12
  bool v21; // cc
  __int64 ready; // rax
  _KTHREAD *v23; // r14
  char v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rdx
  _BYTE *v27; // rcx
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  struct _KPRCB *v31; // rdx
  int *v32; // rcx
  struct _SINGLE_LIST_ENTRY *v33; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  int v35; // ecx
  __int64 Number; // rcx
  char IsThreadRankNonZero; // al
  char Priority; // dl
  _BYTE *v39; // rcx
  __int64 v40; // rdx
  bool v41; // zf
  __int64 v42; // rax
  _KTHREAD *v43; // r14
  char v44; // al
  char v45; // cl
  _DWORD *v46; // rcx
  _DWORD *v47; // rcx
  _BYTE *v48; // rax
  __int64 v49; // rdx
  bool v50; // zf
  _DWORD *SchedulerAssist; // r9
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // ecx
  _DWORD *v57; // r8
  struct _KPRCB *v58; // rax
  __int64 v59; // rcx
  int v60; // eax
  unsigned __int8 v61; // [rsp+38h] [rbp-9h]
  __int64 v62; // [rsp+40h] [rbp-1h] BYREF
  __int64 v63; // [rsp+48h] [rbp+7h] BYREF
  _KTHREAD **p_NextThread; // [rsp+50h] [rbp+Fh]
  unsigned int v65; // [rsp+A8h] [rbp+67h]
  int v66; // [rsp+B0h] [rbp+6Fh] BYREF
  int v67; // [rsp+B8h] [rbp+77h] BYREF
  struct _KPRCB *v68; // [rsp+C0h] [rbp+7Fh] BYREF

  v66 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 1LL;
  v63 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v61 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v67 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  v6 = CurrentPrcb->SchedulerAssist;
  if ( v6 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v52 = v6[6];
      v6[6] = v52 + 1;
      if ( v52 == -1 )
LABEL_94:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v46 = CurrentPrcb->SchedulerAssist;
    if ( v46 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v53 = v46[6] - 1;
        v46[6] = v53;
        if ( !v53 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v67);
    while ( *(_QWORD *)(a1 + 64) );
    v47 = CurrentPrcb->SchedulerAssist;
    if ( v47 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v54 = v47[6];
        v47[6] = v54 + 1;
        if ( v54 == -1 )
          goto LABEL_94;
      }
    }
  }
  v7 = *(char *)(a1 + 563);
  *(_BYTE *)(a1 + 645) = 0;
  v8 = v7;
  v9 = KeGetCurrentPrcb();
  v65 = v7;
  if ( (char)v66 < (char)v7 )
  {
    if ( *(_BYTE *)(a1 + 871) )
    {
      v33 = (struct _SINGLE_LIST_ENTRY *)(a1 + 816);
      if ( *(_QWORD *)(a1 + 816) == 1LL )
      {
        p_AbSelfIoBoostsList = &v9->AbSelfIoBoostsList;
        if ( v9 != (struct _KPRCB *)-34672LL )
        {
          v33->Next = p_AbSelfIoBoostsList->Next;
          p_AbSelfIoBoostsList->Next = v33;
          _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
          KiAbQueueAutoBoostDpc(v9);
        }
      }
    }
  }
  *(_BYTE *)(a1 + 563) = v66;
  v10 = *(_BYTE *)(a1 + 564);
  if ( v10 )
  {
    if ( (v10 & 0xF) != 0 )
      *(_DWORD *)(a1 + 872) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a1 + 564) = 0;
  }
  if ( v66 != *(char *)(a1 + 195) )
  {
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
    v12 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a1 + 651);
    if ( (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
    v13 = (unsigned __int8)v66;
    *(_QWORD *)(a1 + 32) = v12;
    v68 = 0LL;
    v62 = 0LL;
    v14 = (char)KiComputePriorityFloor(a1, v13);
    if ( *(char *)(a1 + 195) != v14 )
    {
      v15 = (unsigned __int8)KiAcquireThreadStateLock(a1, &v68, &v62);
      v17 = 0;
      v18 = *(char *)(a1 + 195);
      if ( v15 == 2 )
      {
        v19 = v68;
        NextThread = v68->NextThread;
        p_NextThread = &v68->NextThread;
        LOBYTE(v16) = NextThread == 0LL;
        KiUpdateThreadPriority(v68, a1, v14, v16);
        v21 = (int)v14 <= v18;
        if ( (int)v14 < v18 )
        {
          if ( !NextThread )
          {
            v19 = v68;
            if ( *(_BYTE *)(a1 + 388) != 2 )
            {
              v8 = v65;
              if ( v68->ReadySummary >> (v14 + 1) )
                *(_BYTE *)(a1 + 112) |= 0x10u;
              goto LABEL_20;
            }
            ready = KiSelectReadyThreadEx(v68, (_KTHREAD *)a1, 0);
            v23 = (_KTHREAD *)ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v19);
                Priority = 1;
                if ( !IsThreadRankNonZero )
                  Priority = v23->Priority;
              }
              else
              {
                Priority = *(_BYTE *)(ready + 195);
              }
              *v19->PriorityState = Priority;
              v39 = v19->SchedulerAssist;
              if ( v39 )
              {
                if ( v23 == v19->IdleThread )
                  v40 = (unsigned int)KiVpThreadSystemWorkPriority;
                else
                  v40 = (unsigned int)Priority;
                KiSetSchedulerAssistPriority(v39, v40, 0LL);
                v39 = v19->SchedulerAssist;
              }
              v41 = v23 == v19->IdleThread;
              *p_NextThread = v23;
              if ( v39 )
                v39[16] = v41;
              if ( v23->WaitBlockFill6[68] == 1 )
                v23->ReadyTime = v23->ReadyTime - v23->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
              v19 = v68;
              v8 = v65;
              v23->WaitBlockFill6[68] = 3;
              v24 = 1;
              goto LABEL_21;
            }
            goto LABEL_19;
          }
          v21 = (int)v14 <= v18;
        }
        if ( v21 || NextThread )
        {
LABEL_19:
          v8 = v65;
LABEL_20:
          v24 = 0;
LABEL_21:
          KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
          KiReleaseThreadStateLock(v25, v19, v62);
          if ( v24 )
          {
            LODWORD(v26) = KeGetPcr()->Prcb.Number;
            Number = v68->Number;
            if ( (_DWORD)v26 != (_DWORD)Number )
            {
              LOBYTE(v26) = 2;
              KiSendSoftwareInterrupt(Number, v26);
            }
          }
          if ( v17 > 0 )
          {
            v31 = KeGetCurrentPrcb();
            if ( (KiVelocityFlags & 2) != 0 )
            {
              v32 = (int *)v68->SchedulerAssist;
              if ( v32 )
              {
                if ( v31->SchedulerAssist )
                {
                  if ( v31 != v68 && v17 >= 8 )
                  {
                    v55 = *v32;
                    v56 = *v32 & 0x40000;
                    if ( (v55 & 0x100000) != 0 || v56 && (unsigned __int8)v55 < v17 )
                    {
                      v41 = HvlpVirtualProcessorsIdentityMapped == 0;
                      v57 = v31->SchedulerAssist;
                      v58 = v68;
                      v57[3] = 2;
                      v59 = v58->Number;
                      if ( v41 )
                        LODWORD(v59) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)v59 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v59] << 6);
                      v57[2] = v59;
                      __writemsr(0x400000C2u, (unsigned int)v59);
                    }
                  }
                }
              }
            }
          }
          CurrentIrql = v61;
          goto LABEL_24;
        }
        v19 = v68;
        v8 = v65;
        if ( *(_BYTE *)(a1 + 388) != 2 )
          goto LABEL_20;
      }
      else
      {
        v35 = v15 - 1;
        if ( !v35 )
        {
          v19 = v68;
          KiRemoveThreadFromAnyReadyQueue(v68, v62, a1, (unsigned int)v18);
          KiUpdateThreadPriority(0LL, a1, v14, 0LL);
          KiPrepareReadyThreadForRescheduling(a1, v14, &v63);
          goto LABEL_20;
        }
        if ( v35 != 2 )
        {
          KiUpdateThreadPriority(0LL, a1, v14, 0LL);
          v19 = v68;
          goto LABEL_20;
        }
        v19 = v68;
        LOBYTE(v16) = 1;
        KiUpdateThreadPriority(v68, a1, v14, v16);
        if ( (int)v14 < v18 )
        {
          v42 = KiSelectReadyThreadEx(v19, (_KTHREAD *)a1, 0);
          v43 = (_KTHREAD *)v42;
          if ( v42 )
          {
            if ( (*(_BYTE *)(v42 + 2) & 4) != 0 )
            {
              v44 = KiIsThreadRankNonZero(v42, v19);
              v45 = 1;
              if ( !v44 )
                v45 = v43->Priority;
            }
            else
            {
              v45 = *(_BYTE *)(v42 + 195);
            }
            *v19->PriorityState = v45;
            v48 = v19->SchedulerAssist;
            if ( v48 )
            {
              v49 = (unsigned int)KiVpThreadSystemWorkPriority;
              if ( v43 != v19->IdleThread )
                v49 = (unsigned int)v45;
              KiSetSchedulerAssistPriority(v19->SchedulerAssist, v49, 0LL);
              v48 = v19->SchedulerAssist;
            }
            v50 = v43 == v19->IdleThread;
            v19->NextThread = v43;
            if ( v48 )
              v48[16] = v50;
            if ( v43->WaitBlockFill6[68] == 1 )
              v43->ReadyTime = v43->ReadyTime - v43->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v43->WaitBlockFill6[68] = 3;
            KiInsertDeferredReadyList(&v63, a1);
            v19 = v68;
          }
          goto LABEL_20;
        }
      }
      v17 = v14;
      goto LABEL_20;
    }
  }
LABEL_24:
  v27 = *(_BYTE **)(a1 + 232);
  if ( v27 && (*v27 & 0x7F) == 0x15 )
  {
    KiPriQueueThreadPriorityChanged(v27, a1);
  }
  else
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    v28 = KeGetCurrentPrcb();
    v29 = v28->SchedulerAssist;
    if ( v29 )
    {
      if ( v28->NestingLevel <= 1u )
      {
        v60 = v29[6] - 1;
        v29[6] = v60;
        if ( !v60 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
  }
  KiProcessDeferredReadyList(CurrentPrcb, &v63, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1329, v8, v66, (__int64)&v66);
  return v8;
}
