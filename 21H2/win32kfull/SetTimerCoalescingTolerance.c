/*
 * XREFs of SetTimerCoalescingTolerance @ 0x1C00FEF70
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00FEE30 (-KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     InitTimerCoalescing @ 0x1C0120E80 (InitTimerCoalescing.c)
 *     StartScreenSaver @ 0x1C021D230 (StartScreenSaver.c)
 * Callees:
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C00FF018 (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 */

__int64 __fastcall SetTimerCoalescingTolerance(int a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int v4; // edx
  int v5; // ecx

  gTimerCoalCurrentState = a1;
  v1 = a1 + (unsigned __int64)(gServiceSessionId != gSessionId ? 4 : 0);
  result = *((unsigned int *)&gTimerCoalescingSpec + v1);
  gCurrentTimerCoalescingTolerance = *((_DWORD *)&gTimerCoalescingSpec + v1);
  if ( gSessionId != gServiceSessionId )
  {
    if ( !a1 )
    {
      gdwRITdaemonLockState = 0;
      v3 = 1LL;
      return ConfigureRITDelayableTimers(v3);
    }
    v4 = 2;
    v5 = a1 - 2;
    if ( !v5 )
    {
      gdwRITdaemonLockState |= 1u;
      if ( (gdwRITdaemonLockState & 2) == 0
        && giScreenSaveTimeOutMs > 0
        && (gbLockConsoleActive || (*gpsi & 0x200) != 0) )
      {
        v4 = 1;
      }
      goto LABEL_11;
    }
    if ( v5 == 1 )
    {
      result = gdwRITdaemonLockState | 2u;
      gdwRITdaemonLockState = result;
      if ( (result & 1) != 0 )
      {
LABEL_11:
        v3 = v4;
        return ConfigureRITDelayableTimers(v3);
      }
    }
  }
  return result;
}
