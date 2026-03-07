unsigned __int64 ExGetNextWakeTimeForDeepSleep()
{
  __int64 *v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 TimerDueTime; // rdx
  __int64 v3; // rcx

  v0 = (__int64 *)ExpWakeTimerList;
  v1 = -1LL;
  TimerDueTime = -1LL;
  while ( v0 != &ExpWakeTimerList )
  {
    v3 = (__int64)(v0 - 33);
    v0 = (__int64 *)*v0;
    if ( (*(_BYTE *)(v3 + 304) & 4) != 0 )
    {
      if ( *(_QWORD *)(v3 + 256) )
        TimerDueTime = KeQueryTimerDueTime(v3);
      if ( TimerDueTime && TimerDueTime < v1 )
        v1 = TimerDueTime;
    }
  }
  return v1;
}
