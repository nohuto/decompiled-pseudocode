/*
 * XREFs of IAMThreadAccessGranted @ 0x1C0037F54
 * Callers:
 *     NtUserSendEventMessage @ 0x1C00072B0 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C00080B0 (NtUserSetActivationFilter.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0032328 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserRegisterHotKey @ 0x1C00328A0 (NtUserRegisterHotKey.c)
 *     ValidateHwndIAM @ 0x1C00378C0 (ValidateHwndIAM.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0037A00 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C0037E84 (ValidateHwndIAMComponetUIAware.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003AFFC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C003CA90 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C003CF50 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003DA08 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _PostTransformableMessageIL @ 0x1C003F6B0 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x1C0054600 (NtUserPostMessage.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00D7420 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0122980 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0125490 (NtUserSetActiveProcessForMonitor.c)
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C0135480 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01D2510 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D2848 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C01F6CD0 (NtUserClearForeground.c)
 *     NtUserCreateWindowGroup @ 0x1C01F71E0 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C01F74A0 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C01F8250 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserSetBridgeWindowChild @ 0x1C0201070 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C0201980 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C0202730 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowGroup @ 0x1C0202A40 (NtUserSetWindowGroup.c)
 *     NtUserSetWindowShowState @ 0x1C0202DC0 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0203D60 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C0037F84 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 456);
}
