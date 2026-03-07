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
