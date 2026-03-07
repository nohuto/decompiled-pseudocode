__int64 __fastcall PdcPoCurrentPdcPhase(int a1, unsigned __int8 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // ecx

  v4 = 0;
  PopBsdCurrentCsPhase = a1;
  v5 = a1 - 1;
  if ( v5 )
  {
    v6 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = (unsigned int)(v6 - 4);
      if ( (_DWORD)v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
            PopPowerAggregatorNotifyResiliencyReached();
        }
        else if ( a2 )
        {
          qword_140CF78C8 = KeQueryPerformanceCounter(0LL).QuadPart;
          PopDeepSleepResiliencyPhaseAccountingBegin(3u, 0);
          if ( PopFxAccountingGroup == 2 )
            PopFxResumeDeviceAccounting();
        }
        else
        {
          qword_140CF78D0 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140CF78C8;
          if ( PopFxAccountingGroup == 2 )
            PopFxPauseDeviceAccounting();
          PopDeepSleepResiliencyPhaseAccountingEnd(3u, 0);
        }
      }
      else
      {
        LODWORD(v7) = a2;
        return (unsigned int)PopPowerAggregatorNotifyPdcSleepTransition(v7, a3, a4);
      }
    }
    else
    {
      LODWORD(v6) = a2 != 0;
      PopIdleCsStateChanged(v6);
    }
  }
  else
  {
    PopDisarmIdlePhaseWatchdog();
  }
  return v4;
}
