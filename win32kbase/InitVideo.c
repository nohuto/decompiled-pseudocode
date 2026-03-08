/*
 * XREFs of InitVideo @ 0x1C0010AAC
 * Callers:
 *     xxxRemoteConnect @ 0x1C000F480 (xxxRemoteConnect.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C002D838 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     DrvCloseGraphicsDevices @ 0x1C000F140 (DrvCloseGraphicsDevices.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C000F1C0 (UpdateExternalMonitorConnectedStatus.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C001077C (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     GreUpdateSharedDevCaps @ 0x1C0010C8C (GreUpdateSharedDevCaps.c)
 *     DrvInitConsole @ 0x1C0010EB8 (DrvInitConsole.c)
 *     InitUserScreen @ 0x1C00127A8 (InitUserScreen.c)
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall InitVideo(__int64 a1)
{
  __int16 v1; // di
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v9; // [rsp+98h] [rbp+10h] BYREF

  v1 = gProtocolType;
  v9 = 0LL;
  v2 = 0;
  if ( (int)DrvInitConsole() < 0 )
    return 0LL;
  if ( !gbNonServiceSession && !gbFirstConnectionDone )
  {
    gProtocolType = -1;
    *(_DWORD *)(SGDGetUserSessionState(v5, v4, v6, v7) + 508) = 0xFFFF;
    v2 = 1;
    *(_DWORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 1232LL) = 0;
  }
  DispBrokerUpdateKernelDisplayPolicies();
  if ( (int)DrvSetDisplayConfig(0, 0, 2447, 2050, 0LL, 0, 0LL, 0LL, 0LL, (__int64)&v9, 0LL, 0LL, 0LL, 0LL, a1, 0LL) < 0 )
    return 0LL;
  if ( !gProtocolType )
    UpdateExternalMonitorConnectedStatus(1);
  *(_DWORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 1232LL) = 0;
  *((_QWORD *)gpDispInfo + 5) = *v9;
  *((_QWORD *)gpDispInfo + 2) = v9;
  GreUpdateSharedDevCaps(*((_QWORD *)gpDispInfo + 5));
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v2 )
  {
    if ( !v1 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
    DrvCloseGraphicsDevices(1);
  }
  else if ( qword_1C02D6E10 && (int)qword_1C02D6E10() >= 0 )
  {
    if ( qword_1C02D6E18 )
      qword_1C02D6E18();
  }
  gdwHydraHint |= 4u;
  return v9;
}
