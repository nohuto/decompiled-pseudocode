/*
 * XREFs of LeaveEditionCrit @ 0x1C00F5EA0
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1C009C2B0 (NtUserUnhookWindowsHookEx.c)
 *     NtUserRegisterForCustomDockTargets @ 0x1C01DA3D0 (NtUserRegisterForCustomDockTargets.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C024B170 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1)
{
  return UserSessionSwitchLeaveCrit(a1);
}
