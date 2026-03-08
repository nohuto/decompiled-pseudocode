/*
 * XREFs of ?KeepMachineUp@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0079188
 * Callers:
 *     EditionKeepMachineUp @ 0x1C00790A0 (EditionKeepMachineUp.c)
 * Callees:
 *     SetTimerCoalescingTolerance @ 0x1C0079290 (SetTimerCoalescingTolerance.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall KeepMachineUp(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (int)a1;
  if ( !*(_DWORD *)(SGDGetUserSessionState(a1) + 2956) || gProtocolType )
  {
    if ( *(_DWORD *)(SGDGetUserSessionState(v2) + 2964) && !gProtocolType )
    {
      PoSetUserPresent((unsigned int)v1);
      *(_DWORD *)(SGDGetUserSessionState(v6) + 2964) = 0;
    }
    if ( *(_DWORD *)(SGDGetUserSessionState(v3) + 2952) && *(_DWORD *)(SGDGetUserSessionState(v4) + 3080) != 2
      || *(_DWORD *)(SGDGetUserSessionState(v4) + 2960)
      || gfSwitchInProgress )
    {
      if ( gdwRITdaemonLockState )
        SetTimerCoalescingTolerance(0LL);
    }
    else
    {
      v7[0] = 4LL;
      v7[1] = v1;
      QueuePowerRequest(v7, 0LL);
    }
    if ( *(_DWORD *)(SGDGetUserSessionState(v4) + 2960) )
    {
      if ( !**(_BYTE **)(SGDGetUserSessionState(v5) + 2928) )
        SetPendingInput((unsigned int)v1);
    }
  }
  else
  {
    PoSetUserPresent((unsigned int)v1);
  }
}
