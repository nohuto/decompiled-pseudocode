__int64 __fastcall KeGetClockTimerResolution(_DWORD *a1, unsigned int *a2, _BYTE *a3)
{
  struct _KPRCB *CurrentPrcb; // r9
  bool v4; // zf
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = KiClockTimerPerCpuTickScheduling == 0;
  *a3 = 0;
  if ( v4 )
  {
    *a2 = KeTimeIncrement;
    *a1 = KiLastRequestedTimeIncrement;
    result = (unsigned __int8)*a3;
    if ( KiClockOwnerOneShotRequestState == 1 )
      result = 1LL;
    *a3 = result;
  }
  else
  {
    *a2 = CurrentPrcb->ClockTimerState.TimeIncrement;
    result = CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement;
    *a1 = result;
    if ( CurrentPrcb->ClockTimerState.OneShotState == KClockTimerOneShotArmed )
      *a3 = 1;
  }
  return result;
}
