/*
 * XREFs of IAMThreadAccessGranted @ 0x1C0037FF4
 * Callers:
 *     NtUserSendEventMessage @ 0x1C00072B0 (NtUserSendEventMessage.c)
 *     NtUserSetActivationFilter @ 0x1C00080B0 (NtUserSetActivationFilter.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00323C8 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     NtUserRegisterHotKey @ 0x1C0032940 (NtUserRegisterHotKey.c)
 *     ValidateHwndIAM @ 0x1C0037960 (ValidateHwndIAM.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0037AA0 (NtUserSetWindowCompositionAttribute.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1C0037F24 (ValidateHwndIAMComponetUIAware.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003B09C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C003CB30 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?_AllowSetForegroundWindow@@YAHK@Z @ 0x1C003CFF0 (-_AllowSetForegroundWindow@@YAHK@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003DAA8 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _PostTransformableMessageIL @ 0x1C003F750 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x1C00546A0 (NtUserPostMessage.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00D7770 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C0122D00 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0125810 (NtUserSetActiveProcessForMonitor.c)
 *     ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C0135830 (-_EnableShellWindowManagementBehavior@@YAH_K0@Z.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01D2AD0 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D2E08 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C01F7290 (NtUserClearForeground.c)
 *     NtUserCreateWindowGroup @ 0x1C01F77A0 (NtUserCreateWindowGroup.c)
 *     NtUserDeleteWindowGroup @ 0x1C01F7A60 (NtUserDeleteWindowGroup.c)
 *     NtUserEnableWindowGroupPolicy @ 0x1C01F8810 (NtUserEnableWindowGroupPolicy.c)
 *     NtUserSetBridgeWindowChild @ 0x1C0201630 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C0201F40 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowArrangement @ 0x1C0202CF0 (NtUserSetWindowArrangement.c)
 *     NtUserSetWindowGroup @ 0x1C0203000 (NtUserSetWindowGroup.c)
 *     NtUserSetWindowShowState @ 0x1C0203380 (NtUserSetWindowShowState.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0204320 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C0038024 (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

_BOOL8 __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *IAMThread; // rax
  __int64 v2; // rcx

  IAMThread = FindIAMThread(a1);
  return IAMThread && *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v2 + 456);
}
