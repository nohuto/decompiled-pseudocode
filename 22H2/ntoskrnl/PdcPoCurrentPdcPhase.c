/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x140599840
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     PopFxPauseDeviceAccounting @ 0x14058B0B4 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x14058B898 (PopFxResumeDeviceAccounting.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140598670 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x14059878C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1407AA5CC (PopDisarmIdlePhaseWatchdog.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140993CB8 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopPowerAggregatorNotifyResiliencyReached @ 0x140993D84 (PopPowerAggregatorNotifyResiliencyReached.c)
 *     PopIdleCsStateChanged @ 0x14099BEEC (PopIdleCsStateChanged.c)
 */

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
          qword_140CF7D08 = KeQueryPerformanceCounter(0LL).QuadPart;
          PopDeepSleepResiliencyPhaseAccountingBegin(3u, 0);
          if ( PopFxAccountingGroup == 2 )
            PopFxResumeDeviceAccounting();
        }
        else
        {
          qword_140CF7D10 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_140CF7D08;
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
