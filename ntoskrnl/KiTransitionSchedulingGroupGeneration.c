/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x1402AB0D4
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x1402ABBFC (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x14057BAA4 (KiParkCurrentProcessor.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140228010 (KiIsThreadRankNonZero.c)
 *     KiSetClockTimer @ 0x14022AC78 (KiSetClockTimer.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1402AB400 (KiChargeSchedulingGroupCycleTime.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1402AB444 (KiMoveScbThreadsToNewReadylist.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x1402AE41C (KiInsertNonMaxOverQuotaScb.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1402DA1D0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KiSetSchedulerAssistPriority @ 0x14040A730 (KiSetSchedulerAssistPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiTransitionSchedulingGroupGeneration(struct _KPRCB *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v5; // r15d
  unsigned __int64 GenerationTarget; // rcx
  __int64 v7; // rcx
  int v8; // r11d
  __int64 v9; // r10
  __int64 v10; // r10
  unsigned __int8 CurrentIrql; // bl
  __int64 NextThread; // rbp
  _QWORD *v13; // r12
  _LIST_ENTRY *Flink; // r14
  char v15; // al
  _QWORD *p_Blink; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  char *v19; // rbx
  char v20; // r8
  volatile signed __int32 *v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  char v24; // al
  unsigned __int8 *PriorityState; // r15
  unsigned __int8 v26; // bl
  char v27; // al
  unsigned __int8 v28; // bl
  void *v29; // rcx
  bool v30; // zf
  char v31; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v33; // rdx
  unsigned __int8 v34; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v36; // r8
  int v37; // eax
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 Number; // rdx
  int v43; // [rsp+80h] [rbp+8h]
  char v44; // [rsp+88h] [rbp+10h]
  char i; // [rsp+90h] [rbp+18h]

  v5 = 1;
  GenerationTarget = a1->GenerationTarget;
  v43 = 1;
  if ( a3 > GenerationTarget )
  {
    v5 = (a3 + (unsigned int)KiGenerationTicks - GenerationTarget - 1) / (unsigned int)KiGenerationTicks + 1;
    v43 = v5;
  }
  v7 = KiGenerationEndTick;
  v8 = KeMaximumIncrement;
  v9 = (unsigned int)KeMaximumIncrement;
  a1->GenerationTarget = KiGenerationEndTick;
  v10 = v7 * v9;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v33) = 0x8000;
      else
        v33 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v33;
    }
    KiSetClockTimer((__int64)a1, v10, v8, 4, 1, 0);
    if ( KiIrqlFlags )
    {
      v34 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v36 = CurrentPrcb->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v30 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  a1->ScbQueue.Root = 0LL;
  a1->ScbQueue.Min = 0LL;
  NextThread = (__int64)a1->NextThread;
  v44 = 0;
  if ( !NextThread )
    NextThread = (__int64)a1->CurrentThread;
  v13 = *(_QWORD **)(NextThread + 104);
  if ( v13 )
    v13 = (_QWORD *)((char *)v13 + a1->ScbOffset);
  Flink = a1->ScbList.Flink;
  if ( Flink != &a1->ScbList )
  {
    v15 = v5;
    for ( i = v5; ; v15 = i )
    {
      p_Blink = &Flink[-5].Blink;
      if ( v5 >= 0x40 )
        v17 = 0LL;
      else
        v17 = p_Blink[6] << v15;
      v18 = v17 | 1;
      if ( (p_Blink[14] & 4) == 0 )
        v18 = v17;
      p_Blink[6] = v18;
      v19 = (char *)p_Blink - a1->ScbOffset;
      KiChargeSchedulingGroupCycleTime(v19, &Flink[-5].Blink);
      v20 = a4;
      if ( !a4 )
      {
        if ( a1->ClockOwner )
        {
          if ( (p_Blink[14] & 0x10) == 0 )
          {
            v38 = *((_QWORD *)v19 + 5);
            v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 6, v38) + v38;
            v40 = *((_QWORD *)v19 + 5);
            if ( v39 > v40 )
              _InterlockedExchange64((volatile __int64 *)v19 + 6, v40);
          }
        }
      }
      if ( p_Blink[1] != p_Blink[2] )
      {
        p_Blink[4] = (unsigned int)KiGroupSchedulingNumerator * (*p_Blink >> 10)
                   + ((p_Blink[4] * (unsigned __int64)(unsigned int)(1024 - KiGroupSchedulingNumerator)) >> 10);
        v20 = a4;
      }
      v21 = (volatile signed __int32 *)p_Blink[15];
      *p_Blink = 0LL;
      p_Blink[5] = 0LL;
      if ( v21 )
      {
        v22 = ((*((unsigned __int8 *)p_Blink + 112) >> 3) & 1) - *((_DWORD *)p_Blink + 29);
        if ( (int)(v22 + _InterlockedExchangeAdd(v21, v22)) < 0 )
          *(_DWORD *)p_Blink[15] = 0;
      }
      v23 = *((unsigned __int8 *)p_Blink + 112);
      p_Blink[3] = 0LL;
      *((_BYTE *)p_Blink + 112) = v23 & 0xFC;
      *((_DWORD *)p_Blink + 29) = (v23 >> 3) & 1;
      *(_OWORD *)(p_Blink + 11) = 0LL;
      p_Blink[13] = 0LL;
      p_Blink[49] = 0LL;
      p_Blink[50] = 0LL;
      if ( !*((_DWORD *)p_Blink + 29) )
        break;
      if ( v20 )
        goto LABEL_26;
      if ( !*((_WORD *)p_Blink + 57) )
        goto LABEL_27;
      KiInsertNonMaxOverQuotaScb(&Flink[-5].Blink, a1, 0LL, 0LL);
      v24 = 1;
      v44 = 1;
LABEL_28:
      Flink = Flink->Flink;
      if ( Flink == &a1->ScbList )
      {
        if ( v24 )
          return;
        goto LABEL_35;
      }
    }
    *((_BYTE *)p_Blink + 112) &= ~4u;
    if ( p_Blink == v13 )
    {
      PriorityState = (unsigned __int8 *)a1->PriorityState;
      v26 = *PriorityState;
      if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
      {
        v30 = !KiIsThreadRankNonZero(NextThread, a1);
        v31 = 1;
        if ( v30 )
          v31 = *(_BYTE *)(NextThread + 195);
        v27 = v26 ^ v31;
      }
      else
      {
        v27 = *(_BYTE *)(NextThread + 195) ^ v26;
      }
      v28 = v27 & 0x7F ^ v26;
      *PriorityState = v28;
      v29 = a1->SchedulerAssist;
      if ( v29 )
      {
        if ( (_KTHREAD *)NextThread == a1->IdleThread )
          v41 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v41 = v28 & 0x7F;
        KiSetSchedulerAssistPriority(v29, v41, 0LL);
      }
      v5 = v43;
    }
LABEL_26:
    KiMoveScbThreadsToNewReadylist(&Flink[-5].Blink, 0LL, a1, 0LL);
LABEL_27:
    v24 = v44;
    goto LABEL_28;
  }
LABEL_35:
  if ( a1->GroupSchedulingOverQuota )
  {
    Number = a1->Number;
    a1->GroupSchedulingOverQuota = 0;
    KeInterlockedClearProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, Number);
  }
}
