/*
 * XREFs of KiSelectReadyThreadEx @ 0x14022F830
 * Callers:
 *     KiSetPriorityThread @ 0x14022FC10 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     KeYieldExecution @ 0x1402F64D0 (KeYieldExecution.c)
 *     KiSchedulerApc @ 0x140342C10 (KiSchedulerApc.c)
 *     KiApplyForegroundBoostThread @ 0x14035B5EC (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14024CE70 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectLowestRankedThread @ 0x140256A04 (KiSelectLowestRankedThread.c)
 *     KiSelectReadyThread @ 0x1402C7F90 (KiSelectReadyThread.c)
 *     KiChooseLowestRankedThread @ 0x14035C520 (KiChooseLowestRankedThread.c)
 */

__int64 __fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, _KTHREAD *a2, char a3)
{
  unsigned int Priority; // r10d
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  bool v11; // r9

  if ( a2 )
  {
    if ( a2->Priority == 31 )
      return 0LL;
    Priority = a2->Priority;
    if ( (a3 & 2) == 0 )
      Priority = a2->Priority + 1;
    SchedulingGroup = a2->SchedulingGroup;
    if ( SchedulingGroup )
    {
      v10 = (__int64)SchedulingGroup + a1->ScbOffset;
      if ( v10 )
      {
        v11 = a1 == KeGetCurrentPrcb() || a2 != a1->CurrentThread;
        if ( (unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)a2, v10, a3, v11, 0LL) )
          return KiChooseLowestRankedThread(a1, a2, Priority);
      }
    }
    v8 = Priority;
    return KiSelectReadyThread(v8, a1);
  }
  result = KiSelectReadyThread(1LL, a1);
  if ( !result )
  {
    result = KiSelectLowestRankedThread(a1);
    if ( !result && (a3 & 1) == 0 )
    {
      v8 = 0LL;
      return KiSelectReadyThread(v8, a1);
    }
  }
  return result;
}
