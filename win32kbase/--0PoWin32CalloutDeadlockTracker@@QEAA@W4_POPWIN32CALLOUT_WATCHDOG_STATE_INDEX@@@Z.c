int *__fastcall PoWin32CalloutDeadlockTracker::PoWin32CalloutDeadlockTracker(signed int *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  signed int v9; // ecx

  if ( (unsigned int)Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage() )
  {
    v8 = SGDGetUserSessionState(v5, v4, v6, v7);
    v9 = a2 < 5 ? a2 : 0;
    *a1 = v9;
    if ( *(_DWORD *)(v8 + 4LL * v9 + 2904) == -1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 959LL);
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 4LL * *a1 + 2904));
  }
  return a1;
}
