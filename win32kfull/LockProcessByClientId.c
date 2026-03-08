/*
 * XREFs of LockProcessByClientId @ 0x1C0099860
 * Callers:
 *     ?PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0011C58 (-PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0023DD0 (NtUserCheckProcessForClipboardAccess.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C003C924 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z @ 0x1C003ECC8 (-xxxUserNotifyProcessCreate@@YAJKW4PROCESS_CREATE_HINT@@@Z.c)
 *     xxxWaitForInputIdle @ 0x1C009604C (xxxWaitForInputIdle.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0098C70 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserDwmValidateWindow @ 0x1C0099640 (NtUserDwmValidateWindow.c)
 *     ProcessInfoFromPID @ 0x1C00998DC (ProcessInfoFromPID.c)
 *     ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1C00CE5F0 (-OnDaemonTimer@ForegroundLaunch@@YAXXZ.c)
 *     ?OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z @ 0x1C00EFC90 (-OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z.c)
 *     GetConsoleDesktop @ 0x1C01BFCC8 (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C01CE4A0 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01D21D0 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C0230364 (xxxActivateDebugger.c)
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
