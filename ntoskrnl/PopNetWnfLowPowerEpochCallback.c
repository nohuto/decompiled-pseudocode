/*
 * XREFs of PopNetWnfLowPowerEpochCallback @ 0x140993A30
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExQueryWnfStateData @ 0x140793060 (ExQueryWnfStateData.c)
 *     PopNetArmRefreshTimer @ 0x1409935C0 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x140993720 (PopNetDisengageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1409937B8 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x14099386C (PopNetIsNetworkRefreshEnabled.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetWnfLowPowerEpochCallback(__int64 a1)
{
  int v1; // ecx
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  _DWORD *v6; // r9
  LARGE_INTEGER NextDueRefreshTime; // rax
  REGHANDLE v8; // rdi
  unsigned int v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-18h] BYREF

  v10 = 8;
  v2 = ExQueryWnfStateData(a1, &v11, v12, &v10);
  if ( v2 >= 0 )
  {
    if ( v10 >= 8 )
    {
      PopAcquirePolicyLock(v1);
      if ( (v12[0] & 2) != 0 )
      {
        PopNetInLpePhase = 1;
        if ( PopNetIsNetworkRefreshEnabled() )
        {
          NextDueRefreshTime = PopNetGetNextDueRefreshTime();
          _InterlockedExchange(&PopNetRefreshTimerState, 1);
          PopNetArmRefreshTimer(NextDueRefreshTime.QuadPart, 1);
        }
      }
      else if ( PopNetInLpePhase )
      {
        PopNetInLpePhase = 0;
        if ( _InterlockedExchange(&PopNetRefreshTimerState, 0) == 1 )
        {
          KeCancelTimer2((__int64)&PopNetRefreshTimer, 0LL, v5, v6);
          if ( PopDiagHandleRegistered )
          {
            v8 = PopDiagHandle;
            if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED) )
              EtwWrite(v8, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED, 0LL, 0, 0LL);
          }
        }
        if ( PopNetRefreshIntervalActive )
          PopNetDisengageNetworkRefresh();
      }
      PopReleasePolicyLock(v4, v3, v5);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v2;
}
