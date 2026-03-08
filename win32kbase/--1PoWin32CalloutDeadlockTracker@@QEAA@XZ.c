/*
 * XREFs of ??1PoWin32CalloutDeadlockTracker@@QEAA@XZ @ 0x1C00DCDE8
 * Callers:
 *     RIMCloseDev @ 0x1C00308E4 (RIMCloseDev.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00B3E28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     QueuePowerRequest @ 0x1C00B7EA0 (QueuePowerRequest.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0159AA0 (xxxSendWinlogonPowerMessage.c)
 * Callees:
 *     Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage @ 0x1C00DCD04 (Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall PoWin32CalloutDeadlockTracker::~PoWin32CalloutDeadlockTracker(PoWin32CalloutDeadlockTracker *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx

  if ( (unsigned int)Feature_Servicing_Win32kbaseWatchdogTimeoutIssue__private_IsEnabledDeviceUsage() )
  {
    v6 = SGDGetUserSessionState(v3, v2, v4, v5);
    if ( !*(_DWORD *)(v6 + 4LL * *(int *)this + 2904) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 966LL);
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 4LL * *(int *)this + 2904));
  }
}
