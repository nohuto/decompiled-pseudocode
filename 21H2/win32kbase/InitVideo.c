/*
 * XREFs of InitVideo @ 0x1C0068398
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C005F1A8 (-UserInitialize@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x1C007EDC0 (xxxRemoteConnect.c)
 * Callees:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C006863C (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     DrvInitConsole @ 0x1C0068750 (DrvInitConsole.c)
 *     DrvCloseGraphicsDevices @ 0x1C006A4B0 (DrvCloseGraphicsDevices.c)
 *     InitUserScreen @ 0x1C006C88C (InitUserScreen.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0078DE0 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C00BCA40 (UpdateExternalMonitorConnectedStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

struct _MDEV *__fastcall InitVideo(__int64 a1)
{
  __int16 v1; // di
  int v2; // ebx
  __int64 v4; // rcx
  struct _DEVCAPS *v5; // rdx
  struct _MDEV *v7; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+18h] BYREF

  v1 = gProtocolType;
  v7 = 0LL;
  v2 = 0;
  if ( (int)DrvInitConsole() < 0 )
    return 0LL;
  if ( !gbNonServiceSession && !gbFirstConnectionDone )
  {
    gbBaseVideo = 0;
    gProtocolType = -1;
    v2 = 1;
  }
  DispBrokerUpdateKernelDisplayPolicies();
  if ( (int)DrvSetDisplayConfig(0, 0LL, 0x98Fu, 0x802u, 0LL, 0, 0LL, 0LL, 0LL, &v7, 0LL, 0LL, 0LL, 0LL, a1, 0LL) < 0 )
    return 0LL;
  if ( !gProtocolType )
  {
    LOBYTE(v4) = 1;
    UpdateExternalMonitorConnectedStatus(v4);
  }
  v5 = gpGdiDevCaps;
  gbBaseVideo = 0;
  *((_QWORD *)gpDispInfo + 5) = *(_QWORD *)v7;
  *((_QWORD *)gpDispInfo + 2) = v7;
  v8 = *((_QWORD *)gpDispInfo + 5);
  vGetDeviceCaps((struct PDEVOBJ *)&v8, v5);
  if ( !(unsigned int)InitUserScreen() )
    return 0LL;
  if ( v2 )
  {
    if ( !v1 )
      RtlSetActiveConsoleId(0xFFFFFFFFLL);
    DrvCloseGraphicsDevices(1LL);
  }
  else if ( qword_1C029C5C8 && (int)qword_1C029C5C8() >= 0 )
  {
    if ( qword_1C029C5D0 )
      qword_1C029C5D0();
  }
  gdwHydraHint |= 4u;
  return v7;
}
