/*
 * XREFs of LockProcessByClientId @ 0x1C007AC20
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0003FF0 (NtUserCheckProcessForClipboardAccess.c)
 *     ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1C0076BC8 (-OnDaemonTimer@ForegroundLaunch@@YAXXZ.c)
 *     ?PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0077A00 (-PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 *     ?PopProcessLaunchForegroundPolicy@ForegroundLaunch@@YA?AW4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTERNAL@@PEAX@Z @ 0x1C0079E00 (-PopProcessLaunchForegroundPolicy@ForegroundLaunch@@YA-AW4_PROCESS_LAUNCH_FOREGROUND_POLICY_INTE.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C007AA20 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     NtUserDwmValidateWindow @ 0x1C007B270 (NtUserDwmValidateWindow.c)
 *     ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C007B748 (-xxxUserNotifyProcessCreate@@YAJKK_KK@Z.c)
 *     ?OnFirstActivationAttempted@ForegroundLaunch@@YAXPEAX@Z @ 0x1C00FFF74 (-OnFirstActivationAttempted@ForegroundLaunch@@YAXPEAX@Z.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1C01067C8 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     xxxWaitForInputIdle @ 0x1C010E54C (xxxWaitForInputIdle.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C010F280 (NtUserSetActiveProcessForMonitor.c)
 *     GetConsoleDesktop @ 0x1C01E4070 (GetConsoleDesktop.c)
 *     NtUserCheckAccessForIntegrityLevel @ 0x1C01F1A90 (NtUserCheckAccessForIntegrityLevel.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01F3F60 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     xxxActivateDebugger @ 0x1C0243B54 (xxxActivateDebugger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockProcessByClientId(void *a1, PEPROCESS *a2)
{
  NTSTATUS v3; // edi

  *a2 = 0LL;
  v3 = PsLookupProcessByProcessId(a1, a2);
  if ( v3 < 0 || (unsigned int)PsGetProcessSessionId(*a2) == gSessionId )
    return (unsigned int)v3;
  ObfDereferenceObject(*a2);
  *a2 = 0LL;
  return 3221225473LL;
}
