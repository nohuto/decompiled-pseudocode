/*
 * XREFs of KiCheckForEffectivePriorityChange @ 0x1402DE540
 * Callers:
 *     KiComputeGroupSchedulingRank @ 0x1402594A0 (KiComputeGroupSchedulingRank.c)
 *     KiUpdateCpuTargetByWeight @ 0x1402DDDA8 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402DE080 (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DE278 (KeSetSchedulingGroupRankBias.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14024CDC0 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x140520894 (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiCheckForEffectivePriorityChange(struct _KPRCB *a1, __int64 a2)
{
  __int64 NextThread; // rbx
  __int64 v4; // r8
  bool IsThreadRankNonZero; // al
  char v6; // cl
  __int64 v7; // rdx

  NextThread = (__int64)a1->NextThread;
  if ( !NextThread )
    NextThread = (__int64)a1->CurrentThread;
  v4 = *(_QWORD *)(NextThread + 104);
  if ( v4 )
  {
    for ( v4 += a1->ScbOffset; v4; v4 = *(_QWORD *)(v4 + 408) )
    {
      if ( v4 == a2 )
        goto LABEL_9;
    }
  }
  if ( v4 == a2 )
  {
LABEL_9:
    if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, a1), v6 = 1, !IsThreadRankNonZero) )
    {
      v6 = *(_BYTE *)(NextThread + 195);
    }
    *a1->PriorityState = v6;
    if ( a1->SchedulerAssist )
    {
      v7 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)NextThread != a1->IdleThread )
        v7 = (unsigned int)v6;
      KiSetSchedulerAssistPriority(a1->SchedulerAssist, v7, 0LL);
    }
  }
}
