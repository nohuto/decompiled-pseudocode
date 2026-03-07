__int64 __fastcall SetTimerCoalescingTolerance(__int64 a1)
{
  __int64 v1; // rbx
  int *v2; // rax
  int v3; // r9d
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned int v7; // edx
  int v8; // ebx

  v1 = (int)a1;
  v2 = (int *)SGDGetUserSessionState(a1);
  gTimerCoalCurrentState = v1;
  v3 = *v2;
  v4 = v1 + (gServiceSessionId != *v2 ? 4 : 0);
  result = *((unsigned int *)&gTimerCoalescingSpec + v4);
  gCurrentTimerCoalescingTolerance = *((_DWORD *)&gTimerCoalescingSpec + v4);
  if ( v3 != gServiceSessionId )
  {
    if ( !(_DWORD)v1 )
    {
      gdwRITdaemonLockState = 0;
      v6 = 1LL;
      return ConfigureRITDelayableTimers(v6);
    }
    v7 = 2;
    v8 = v1 - 2;
    if ( !v8 )
    {
      gdwRITdaemonLockState |= 1u;
      if ( (gdwRITdaemonLockState & 2) == 0
        && giScreenSaveTimeOutMs > 0
        && (gbLockConsoleActive || (*gpsi & 0x200) != 0) )
      {
        v7 = 1;
      }
      goto LABEL_11;
    }
    if ( v8 == 1 )
    {
      result = gdwRITdaemonLockState | 2u;
      gdwRITdaemonLockState = result;
      if ( (result & 1) != 0 )
      {
LABEL_11:
        v6 = v7;
        return ConfigureRITDelayableTimers(v6);
      }
    }
  }
  return result;
}
