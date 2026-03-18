/*
 * XREFs of InitVideo @ 0x1C0016804
 * Callers:
 *     xxxRemoteConnect @ 0x1C00115D0 (xxxRemoteConnect.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00AE3AC (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C000F8FC (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     DrvSetDisplayConfig @ 0x1C0014230 (DrvSetDisplayConfig.c)
 *     DrvInitConsole @ 0x1C0016330 (DrvInitConsole.c)
 *     GreUpdateSharedDevCaps @ 0x1C00197AC (GreUpdateSharedDevCaps.c)
 *     DrvCloseGraphicsDevices @ 0x1C001A4F0 (DrvCloseGraphicsDevices.c)
 *     InitUserScreen @ 0x1C005CD6C (InitUserScreen.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C00BE7F0 (UpdateExternalMonitorConnectedStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

struct _MDEV *__fastcall InitVideo(__int64 a1)
{
  __int16 v1; // di
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  struct _MDEV *v10; // [rsp+98h] [rbp+10h] BYREF

  v1 = gProtocolType;
  v10 = 0LL;
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
  if ( (int)DrvSetDisplayConfig(0, 0LL, 0x98Fu, 0x802u, 0LL, 0, 0LL, 0LL, 0LL, &v10, 0LL, 0LL, 0LL, 0LL, a1, 0LL) < 0 )
    return 0LL;
  if ( !gProtocolType )
  {
    LOBYTE(v8) = 1;
    UpdateExternalMonitorConnectedStatus(v8);
  }
  *(_DWORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 1232LL) = 0;
  *((_QWORD *)gpDispInfo + 5) = *(_QWORD *)v10;
  *((_QWORD *)gpDispInfo + 2) = v10;
  GreUpdateSharedDevCaps(*((_QWORD *)gpDispInfo + 5));
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v2 )
  {
    if ( !v1 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
    DrvCloseGraphicsDevices(1LL);
  }
  else if ( qword_1C0295C98 && (int)qword_1C0295C98() >= 0 )
  {
    if ( qword_1C0295CA0 )
      qword_1C0295CA0();
  }
  gdwHydraHint |= 4u;
  return v10;
}
