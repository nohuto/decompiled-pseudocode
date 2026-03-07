unsigned __int64 __fastcall KiCaptureTotalCyclesCurrentThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v7; // ett

  _disable();
  LOBYTE(a4) = 1;
  result = KiEndThreadCycleAccumulation(a1, a2, 0LL, a4);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v7 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v7 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  return result;
}
