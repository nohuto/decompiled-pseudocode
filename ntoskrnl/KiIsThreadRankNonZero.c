/*
 * XREFs of KiIsThreadRankNonZero @ 0x140228010
 * Callers:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KiCommitRescheduleContextEntry @ 0x140261A70 (KiCommitRescheduleContextEntry.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402AB0D4 (KiTransitionSchedulingGroupGeneration.c)
 *     KiUpdateThreadSchedulingProperties @ 0x1402AF670 (KiUpdateThreadSchedulingProperties.c)
 *     KiApplyForegroundBoostThread @ 0x1402E3178 (KiApplyForegroundBoostThread.c)
 *     KiCheckForEffectivePriorityChange @ 0x1402F2428 (KiCheckForEffectivePriorityChange.c)
 *     KiUpdateThreadPriority @ 0x1403437B0 (KiUpdateThreadPriority.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x140356320 (KeQueryEffectiveBasePriorityThread.c)
 *     KiInitializePriorityState @ 0x14037F530 (KiInitializePriorityState.c)
 *     KeQueryEffectivePriorityThread @ 0x1403A9A40 (KeQueryEffectivePriorityThread.c)
 * Callees:
 *     KiIsThreadConstrainedBySchedulingGroup @ 0x1402280CC (KiIsThreadConstrainedBySchedulingGroup.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140342A68 (KiCheckForMaxOverQuotaScb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall KiIsThreadRankNonZero(__int64 a1, struct _KPRCB *a2)
{
  int v3; // ebx
  __int64 v4; // r10
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  _DWORD *SchedulerAssist; // rsi
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf

  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return 0;
  v3 = 0;
  v4 = -1LL;
  if ( a2 )
  {
    CurrentIrql = 2;
    CurrentPrcb = a2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v13) = 4;
      else
        v13 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v13;
    }
    CurrentPrcb = KeGetCurrentPrcb();
  }
  v7 = *(_QWORD *)(a1 + 104);
  if ( v7 )
  {
    v8 = CurrentPrcb->ScbOffset + v7;
    if ( v8 )
    {
      if ( a2 )
      {
        if ( (unsigned __int8)KiIsThreadConstrainedBySchedulingGroup(a1) )
        {
          if ( (unsigned __int8)KiCheckForMaxOverQuotaScb(v9) )
          {
            v3 = -1;
          }
          else
          {
            do
            {
              v3 += *(_DWORD *)(v10 + 116);
              if ( v3 )
                break;
              v10 = *(_QWORD *)(v10 + 408);
            }
            while ( v10 );
          }
        }
      }
      else
      {
        do
        {
          v3 = (*(unsigned __int8 *)(v8 + 112) >> 3) & 1;
          if ( v3 )
            break;
          v8 = *(_QWORD *)(v8 + 408);
        }
        while ( v8 );
      }
    }
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v14 - 2) <= 0xDu )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(v4 << (CurrentIrql + 1));
        v18 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v3 != 0;
}
