/*
 * XREFs of IAMThreadAccessGranted @ 0x1C002731C
 * Callers:
 *     NtUserSetActivationFilter @ 0x1C0011E00 (NtUserSetActivationFilter.c)
 *     NtUserSendEventMessage @ 0x1C0015100 (NtUserSendEventMessage.c)
 *     EditionAllowProcessLaunchForegroundPolicy @ 0x1C0016EF0 (EditionAllowProcessLaunchForegroundPolicy.c)
 *     ValidateHwndIAM @ 0x1C00270A4 (ValidateHwndIAM.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0028DAC (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C003AFE4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserRegisterHotKey @ 0x1C0043150 (NtUserRegisterHotKey.c)
 *     NtUserAllowSetForegroundWindow @ 0x1C004B190 (NtUserAllowSetForegroundWindow.c)
 *     _PostTransformableMessageIL @ 0x1C004F3FC (_PostTransformableMessageIL.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C004FF60 (NtUserSetActiveProcessForMonitor.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C005D604 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C005F270 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z @ 0x1C00AE674 (-_GetWindowTrackInfoAsync@@YA_JPEAUtagWND@@@Z.c)
 *     NtUserEnableShellWindowManagementBehavior @ 0x1C00BACE0 (NtUserEnableShellWindowManagementBehavior.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00EC2A0 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserPostMessage @ 0x1C011E4B0 (NtUserPostMessage.c)
 *     _SetCancelRotationDelayHintWindow @ 0x1C01AE818 (_SetCancelRotationDelayHintWindow.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01B3190 (ExemptedFromImmersiveRestrictions.c)
 *     NtUserClearForeground @ 0x1C01CD7F0 (NtUserClearForeground.c)
 *     NtUserRegisterForCustomDockTargets @ 0x1C01D93A0 (NtUserRegisterForCustomDockTargets.c)
 *     NtUserSetBridgeWindowChild @ 0x1C01DA590 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C01DBB30 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowShowState @ 0x1C01DD4C0 (NtUserSetWindowShowState.c)
 *     NtUserShellMigrateWindow @ 0x1C01DDCB0 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01DE090 (NtUserShellSetWindowPos.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C01DFC00 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C002734C (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
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
