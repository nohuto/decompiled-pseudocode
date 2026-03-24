/*
 * XREFs of KiApplyForegroundBoostThread @ 0x14035B5EC
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x14035AEA4 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x14035B430 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiSelectReadyThreadEx @ 0x14022F830 (KiSelectReadyThreadEx.c)
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

char __fastcall KiApplyForegroundBoostThread(__int64 a1, __int64 a2)
{
  char v3; // si
  char v5; // al
  unsigned __int64 Number; // rcx
  struct _KPRCB *v7; // rbx
  char v9; // dl
  int v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // rdx
  int *v13; // rax
  int v14; // edx
  int v15; // eax
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  _KTHREAD *v20; // rsi
  char v21; // cl
  _BYTE *v22; // rax
  __int64 v23; // rdx
  bool v24; // zf
  bool v25; // al
  _KTHREAD **p_NextThread; // r12
  _KTHREAD *NextThread; // r14
  bool v28; // cc
  __int64 ready; // rax
  _KTHREAD *v30; // rsi
  char Priority; // cl
  _BYTE *SchedulerAssist; // rax
  __int64 v33; // rdx
  bool v34; // zf
  bool IsThreadRankNonZero; // al
  int v36; // esi
  int v37; // r15d
  volatile signed __int32 *v38; // [rsp+20h] [rbp-10h] BYREF
  char v39; // [rsp+80h] [rbp+50h]
  struct _KPRCB *v40; // [rsp+88h] [rbp+58h] BYREF

  v40 = 0LL;
  v38 = 0LL;
  v3 = 0;
  v5 = KiAcquireThreadStateLock(a1, (__int64 *)&v40, &v38);
  if ( ((unsigned __int8)(v5 - 1) <= 2u || v5 == 7) && *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2 )
  {
    if ( *(_BYTE *)(a1 + 564) )
      goto LABEL_13;
    if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
      goto LABEL_13;
    Number = (unsigned int)*(char *)(a1 + 195);
    if ( *(char *)(a1 + 195) <= 0 )
      goto LABEL_13;
    v9 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
    if ( v9 >= 16 )
      v9 = 15;
    if ( v9 <= *(char *)(a1 + 195) )
    {
LABEL_13:
      v7 = v40;
      goto LABEL_14;
    }
    v10 = 0;
    v36 = v9;
    v37 = *(char *)(a1 + 195);
    v39 = 0;
    *(_BYTE *)(a1 + 564) = (v9 - *(_BYTE *)(a1 + 195)) & 0xF;
    switch ( v5 )
    {
      case 1:
        v7 = v40;
        KiRemoveThreadFromAnyReadyQueue(v40, v38, a1, (unsigned int)Number);
        KiUpdateThreadPriority(0LL, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v36, 0);
        KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v36, a2);
        goto LABEL_17;
      case 2:
        v7 = v40;
        p_NextThread = &v40->NextThread;
        NextThread = v40->NextThread;
        KiUpdateThreadPriority((__int64)v40, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v9, NextThread == 0LL);
        v28 = v36 <= v37;
        if ( v36 < v37 )
        {
          if ( !NextThread )
          {
            v7 = v40;
            if ( *(_BYTE *)(a1 + 388) == 2 )
            {
              ready = KiSelectReadyThreadEx(v40, (_KTHREAD *)a1, 0);
              v30 = (_KTHREAD *)ready;
              if ( !ready )
                goto LABEL_17;
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                IsThreadRankNonZero = KiIsThreadRankNonZero(ready, v7);
                Priority = 1;
                if ( !IsThreadRankNonZero )
                  Priority = v30->Priority;
              }
              else
              {
                Priority = *(_BYTE *)(ready + 195);
              }
              *v7->PriorityState = Priority;
              SchedulerAssist = v7->SchedulerAssist;
              if ( SchedulerAssist )
              {
                v33 = (unsigned int)KiVpThreadSystemWorkPriority;
                if ( v30 != v7->IdleThread )
                  v33 = (unsigned int)Priority;
                KiSetSchedulerAssistPriority(v7->SchedulerAssist, v33, 0LL);
                SchedulerAssist = v7->SchedulerAssist;
              }
              v34 = v30 == v7->IdleThread;
              *p_NextThread = v30;
              if ( SchedulerAssist )
                SchedulerAssist[16] = v34;
              if ( v30->WaitBlockFill6[68] == 1 )
                v30->ReadyTime = v30->ReadyTime - v30->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
              v30->WaitBlockFill6[68] = 3;
              v39 = 1;
              goto LABEL_48;
            }
            if ( v40->ReadySummary >> (v36 + 1) )
              *(_BYTE *)(a1 + 112) |= 0x10u;
            goto LABEL_17;
          }
          v28 = v36 <= v37;
        }
        if ( v28 )
          goto LABEL_17;
        if ( NextThread )
          goto LABEL_17;
        v7 = v40;
        if ( *(_BYTE *)(a1 + 388) != 2 )
          goto LABEL_17;
        break;
      case 3:
        v7 = v40;
        KiUpdateThreadPriority((__int64)v40, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v9, 1);
        if ( v36 < v37 )
        {
          v19 = KiSelectReadyThreadEx(v7, (_KTHREAD *)a1, 0);
          v20 = (_KTHREAD *)v19;
          if ( v19 )
          {
            if ( (*(_BYTE *)(v19 + 2) & 4) != 0 )
            {
              v25 = KiIsThreadRankNonZero(v19, v7);
              v21 = 1;
              if ( !v25 )
                v21 = v20->Priority;
            }
            else
            {
              v21 = *(_BYTE *)(v19 + 195);
            }
            *v7->PriorityState = v21;
            v22 = v7->SchedulerAssist;
            if ( v22 )
            {
              v23 = (unsigned int)KiVpThreadSystemWorkPriority;
              if ( v20 != v7->IdleThread )
                v23 = (unsigned int)v21;
              KiSetSchedulerAssistPriority(v7->SchedulerAssist, v23, 0LL);
              v22 = v7->SchedulerAssist;
            }
            v24 = v20 == v7->IdleThread;
            v7->NextThread = v20;
            if ( v22 )
              v22[16] = v24;
            if ( v20->WaitBlockFill6[68] == 1 )
              v20->ReadyTime = v20->ReadyTime - v20->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
            v20->WaitBlockFill6[68] = 3;
            KiInsertDeferredReadyList(a2, a1);
            goto LABEL_48;
          }
LABEL_17:
          KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
          KiReleaseThreadStateLock(v11, v7, v38);
          if ( v39 )
          {
            v7 = v40;
            Number = v40->Number;
            if ( KeGetPcr()->Prcb.Number != (_DWORD)Number )
            {
              LOBYTE(v12) = 2;
              KiSendSoftwareInterrupt(Number, v12);
            }
          }
          if ( v10 <= 0 )
            goto LABEL_21;
          Number = (unsigned __int64)KeGetCurrentPrcb();
          if ( (KiVelocityFlags & 2) != 0 )
          {
            v7 = v40;
            v13 = (int *)v40->SchedulerAssist;
            if ( !v13 || !*(_QWORD *)(Number + 33976) || (struct _KPRCB *)Number == v40 || v10 < 8 )
              goto LABEL_21;
            v14 = *v13;
            v15 = *v13 & 0x40000;
            if ( (v14 & 0x100000) != 0 || v15 && (unsigned __int8)v14 < v10 )
            {
              v24 = HvlpVirtualProcessorsIdentityMapped == 0;
              v16 = *(_DWORD **)(Number + 33976);
              v7 = v40;
              v16[3] = 2;
              v17 = v7->Number;
              if ( v24 )
                LODWORD(v17) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)v17 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v17] << 6);
              v16[2] = v17;
              v18 = v17;
              Number = 1073742018LL;
              __writemsr(0x400000C2u, v18);
              goto LABEL_21;
            }
          }
          v7 = v40;
LABEL_21:
          v3 = 1;
LABEL_14:
          if ( v3 )
            return v3;
          goto LABEL_4;
        }
        break;
      default:
        KiUpdateThreadPriority(0LL, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v9, 0);
LABEL_48:
        v7 = v40;
        goto LABEL_17;
    }
    v10 = v36;
    goto LABEL_17;
  }
  v7 = v40;
LABEL_4:
  KiReleaseThreadStateLock(Number, v7, v38);
  return v3;
}
