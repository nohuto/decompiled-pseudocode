/*
 * XREFs of IAMThreadAccessGranted @ 0x1C009A2DC
 * Callers:
 *     NtUserSetActivationFilter @ 0x1C0011060 (NtUserSetActivationFilter.c)
 *     NtUserSendEventMessage @ 0x1C0014350 (NtUserSendEventMessage.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x1C0016760 (EditionAllowProcessLaunchForegroundPolicy.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0022378 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0023718 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     NtUserRegisterHotKey @ 0x1C003B2F0 (NtUserRegisterHotKey.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0041D90 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserPostMessage @ 0x1C0047F50 (NtUserPostMessage.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00975C4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserEnableShellWindowManagementBehavior @ 0x1C0097750 (NtUserEnableShellWindowManagementBehavior.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0097C84 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0098C70 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserAllowSetForegroundWindow @ 0x1C0099BD0 (NtUserAllowSetForegroundWindow.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0099DE8 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ValidateHwndIAM @ 0x1C009A070 (ValidateHwndIAM.c)
 *     _PostTransformableMessageIL @ 0x1C00CB574 (_PostTransformableMessageIL.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01AFA08 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01B4350 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C01CE840 (NtUserClearForeground.c)
 *     NtUserRegisterForCustomDockTargets @ 0x1C01DA3D0 (NtUserRegisterForCustomDockTargets.c)
 *     NtUserSetBridgeWindowChild @ 0x1C01DB5C0 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C01DCB60 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowShowState @ 0x1C01DE4F0 (NtUserSetWindowShowState.c)
 *     NtUserShellMigrateWindow @ 0x1C01DED60 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01DF140 (NtUserShellSetWindowPos.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01E0CB0 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C009A30C (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  __int64 v1; // rcx
  struct tagIAM_THREAD *IAMThread; // r8
  bool result; // al

  IAMThread = FindIAMThread(a1);
  result = 0;
  if ( IAMThread )
    return *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v1 + 456);
  return result;
}
