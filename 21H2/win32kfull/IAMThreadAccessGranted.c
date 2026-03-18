/*
 * XREFs of IAMThreadAccessGranted @ 0x1C0023254
 * Callers:
 *     NtUserSendEventMessage @ 0x1C0003B50 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C0004220 (NtUserSetActivationFilter.c)
 *     ValidateHwndIAM @ 0x1C0022C00 (ValidateHwndIAM.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0022C50 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C00231A8 (ValidateHwndIAMComponetUIAware.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C002536C (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserPostMessage @ 0x1C0054740 (NtUserPostMessage.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     NtUserRegisterHotKey @ 0x1C009DDD0 (NtUserRegisterHotKey.c)
 *     _PostTransformableMessageIL @ 0x1C00A735C (_PostTransformableMessageIL.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C00A94FC (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00F1804 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00FFB08 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     NtUserAllowSetForegroundWindow @ 0x1C0106750 (NtUserAllowSetForegroundWindow.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0109AC4 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserEnableShellWindowManagementBehavior @ 0x1C010DA80 (NtUserEnableShellWindowManagementBehavior.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C010F280 (NtUserSetActiveProcessForMonitor.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x1C0117990 (EditionAllowProcessLaunchForegroundPolicy.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01CEE94 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D9928 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C01F1D70 (NtUserClearForeground.c)
 *     NtUserSetBridgeWindowChild @ 0x1C01FC5D0 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C01FD2F0 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowShowState @ 0x1C01FE820 (NtUserSetWindowShowState.c)
 *     NtUserShellMigrateWindow @ 0x1C01FEC10 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01FEFF0 (NtUserShellSetWindowPos.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0200270 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C0023284 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 456);
}
