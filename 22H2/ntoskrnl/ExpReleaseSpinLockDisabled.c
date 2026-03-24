/*
 * XREFs of ExpReleaseSpinLockDisabled @ 0x1402F8744
 * Callers:
 *     ExInterlockedInsertHeadList @ 0x1402F8650 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1402F86D0 (ExInterlockedInsertTailList.c)
 *     ExInterlockedAddUlong @ 0x1403795B0 (ExInterlockedAddUlong.c)
 *     ExInterlockedAddLargeInteger @ 0x1405B6DA0 (ExInterlockedAddLargeInteger.c)
 *     ExInterlockedPopEntryList @ 0x1405B6E00 (ExInterlockedPopEntryList.c)
 *     ExInterlockedPushEntryList @ 0x1405B6E50 (ExInterlockedPushEntryList.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseSpinLockDisabled(volatile signed __int64 *a1, char a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 result; // rax

  _InterlockedAnd64(a1, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      result = (unsigned int)(SchedulerAssist[6] - 1);
      SchedulerAssist[6] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( a2 )
    _enable();
  return result;
}
