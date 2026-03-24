/*
 * XREFs of KeUpdateThreadSchedulingProperties @ 0x14035D8C8
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x14035D5B8 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14035D718 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140230760 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiIsThreadRankNonZero @ 0x14024CDC0 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x140520894 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KeUpdateThreadSchedulingProperties(__int64 a1, __int64 a2, struct _KPRCB *a3)
{
  void *SchedulerAssist; // rax
  char v6; // r9
  char v7; // cl
  bool IsThreadRankNonZero; // al
  __int64 v9; // rdx

  LOBYTE(SchedulerAssist) = KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  if ( v6 == 2 && !a3->NextThread || v6 == 3 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(a1, a3), v7 = 1, !IsThreadRankNonZero) )
    {
      v7 = *(_BYTE *)(a1 + 195);
    }
    *a3->PriorityState = v7;
    SchedulerAssist = a3->SchedulerAssist;
    if ( SchedulerAssist )
    {
      v9 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)a1 != a3->IdleThread )
        v9 = (unsigned int)v7;
      LOBYTE(SchedulerAssist) = KiSetSchedulerAssistPriority(a3->SchedulerAssist, v9, 0LL);
    }
  }
  return (char)SchedulerAssist;
}
