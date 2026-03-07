__int64 __fastcall PpmResetInterruptRate(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v3; // eax
  signed __int32 v4; // ett

  _disable();
  a1[2921] = 0;
  a1[2920] = a1[8272];
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v3 = *SchedulerAssist;
    do
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange(SchedulerAssist, v3 & 0xFFDFFFFF, v3);
    }
    while ( v4 != v3 );
    if ( (v3 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _enable();
  return 0LL;
}
