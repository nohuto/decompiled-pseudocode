__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  bool v7; // r8
  __int64 v8; // rax
  unsigned int ClockTickDueTime; // eax
  int v10; // edx
  unsigned int v11; // ebx

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode((unsigned __int64 *)&KiClockIntervalRequests, a3);
  *(_DWORD *)(a3 + 28) = a1;
  if ( (qword_140D0C178 & 1) != 0 )
  {
    if ( KiClockIntervalRequests )
      v6 = KiClockIntervalRequests ^ (unsigned __int64)&KiClockIntervalRequests;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = KiClockIntervalRequests;
  }
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a1 >= *(_DWORD *)(v6 + 28) )
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( (qword_140D0C178 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_16;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_16:
          v7 = 1;
          break;
        }
      }
      else
      {
        v8 = *(_QWORD *)v6;
        if ( (qword_140D0C178 & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= v6;
        }
        if ( !v8 )
          break;
      }
      v6 = v8;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&KiClockIntervalRequests, v6, v7, a3);
  *(_BYTE *)(a3 + 24) = 1;
  if ( a2 )
    KePseudoHrTimeIncrement = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    KiSetClockTimerKTimerDeadlines((__int64)KeGetCurrentPrcb(), 0);
    ClockTickDueTime = KiSetNextClockTickDueTime(1);
  }
  else
  {
    ClockTickDueTime = KiSetClockIntervalToMinimumRequested();
  }
  v10 = *(_DWORD *)(a3 + 32);
  v11 = ClockTickDueTime;
  if ( v10 )
    PoTraceSystemTimerResolutionKernel(a1, v10, 1);
  return v11;
}
