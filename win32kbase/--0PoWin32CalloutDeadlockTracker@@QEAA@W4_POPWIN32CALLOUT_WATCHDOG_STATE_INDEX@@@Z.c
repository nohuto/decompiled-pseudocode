/*
 * XREFs of ??0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z @ 0x1C00DCD58
 * Callers:
 *     RIMCloseDev @ 0x1C00308E4 (RIMCloseDev.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00B3E28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     QueuePowerRequest @ 0x1C00B7EA0 (QueuePowerRequest.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0159AA0 (xxxSendWinlogonPowerMessage.c)
 * Callees:
 *     Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage @ 0x1C00DCD04 (Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

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
