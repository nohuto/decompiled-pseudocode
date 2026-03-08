/*
 * XREFs of HvlPerformEndOfInterrupt @ 0x140456EA0
 * Callers:
 *     HvlDummyInterruptCallback @ 0x14053D1B0 (HvlDummyInterruptCallback.c)
 * Callees:
 *     HalPerformEndOfInterrupt @ 0x1402C7920 (HalPerformEndOfInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 HvlPerformEndOfInterrupt()
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v3; // ett

  _disable();
  result = HalPerformEndOfInterrupt(0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v3 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v3 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  return result;
}
