/*
 * XREFs of LeaveEditionCrit @ 0x1C00BE2E0
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1C006F1B0 (NtUserUnhookWindowsHookEx.c)
 *     NtUserBuildHwndList @ 0x1C00D1F70 (NtUserBuildHwndList.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C01D30A0 (NtUserGetPointerDeviceProperties.c)
 *     NtUserRegisterForCustomDockTargets @ 0x1C01D93A0 (NtUserRegisterForCustomDockTargets.c)
 *     NtUserShellMigrateWindow @ 0x1C01DDCB0 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01DE090 (NtUserShellSetWindowPos.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C0248490 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
}
