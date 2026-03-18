/*
 * XREFs of LockProcessByClientId @ 0x1C004FEE0
 * Callers:
 *     ?PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0012878 (-PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 *     ProcessInfoFromPID @ 0x1C004FC54 (ProcessInfoFromPID.c)
 *     NtUserDwmValidateWindow @ 0x1C004FCC0 (NtUserDwmValidateWindow.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C004FF60 (NtUserSetActiveProcessForMonitor.c)
 *     xxxWaitForInputIdle @ 0x1C0051524 (xxxWaitForInputIdle.c)
 *     ?OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z @ 0x1C005B640 (-OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C005F920 (NtUserCheckProcessForClipboardAccess.c)
 *     ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1C0097160 (-OnDaemonTimer@ForegroundLaunch@@YAXXZ.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z @ 0x1C00A0414 (-xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00E3594 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     GetConsoleDesktop @ 0x1C01BEB28 (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C01CD450 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01D1180 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C022D650 (xxxActivateDebugger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockProcessByClientId(void *a1, PEPROCESS *a2)
{
  NTSTATUS v3; // esi
  int ProcessSessionId; // ebx

  *a2 = 0LL;
  v3 = PsLookupProcessByProcessId(a1, a2);
  if ( v3 < 0 )
    return (unsigned int)v3;
  ProcessSessionId = PsGetProcessSessionId(*a2);
  if ( ProcessSessionId == (unsigned int)GetCurrentWin32kSessionId() )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  *a2 = 0LL;
  return 3221225473LL;
}
