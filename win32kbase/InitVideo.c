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
