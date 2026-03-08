/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C
 * Callers:
 *     PostPendingMouseMove @ 0x1C0071380 (PostPendingMouseMove.c)
 *     HandleInputDestDestruction @ 0x1C0079C40 (HandleInputDestDestruction.c)
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C0079DE0 (CaptureLogicalCursorPosToQMouseMove.c)
 *     GenerateMouseMove @ 0x1C0079E10 (GenerateMouseMove.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ProcessMouseEvent @ 0x1C007C3A0 (ProcessMouseEvent.c)
 *     NotifySetPointerGraphicDevice @ 0x1C00C2BF0 (NotifySetPointerGraphicDevice.c)
 *     ForceResetMouseButtonsDownState @ 0x1C00CB320 (ForceResetMouseButtonsDownState.c)
 *     ClearLogicalCursorPos @ 0x1C00D4180 (ClearLogicalCursorPos.c)
 *     ForceCapture @ 0x1C00D4890 (ForceCapture.c)
 *     SynthesizePTPMouseInput @ 0x1C00F4270 (SynthesizePTPMouseInput.c)
 *     UpdateGlobalCursorOwner @ 0x1C00F43B0 (UpdateGlobalCursorOwner.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0161760 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     NtMITDisableMouseIntercept @ 0x1C016A750 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C016ABD0 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1C016BFB0 (NtMITSynthesizeMouseInput.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C01705C0 (NtUserGetPointerDeviceOrientation.c)
 *     CancelCapturedMipOverride @ 0x1C02175F0 (CancelCapturedMipOverride.c)
 *     CheckIntegrityAccessToCapture @ 0x1C0217680 (CheckIntegrityAccessToCapture.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C02178E0 (ExecuteMarshaledInterceptRequest.c)
 *     HasCapture @ 0x1C0217BC0 (HasCapture.c)
 *     InitiateWaitForInjectionCompletion @ 0x1C0217E30 (InitiateWaitForInjectionCompletion.c)
 *     IsCapturedBySystem @ 0x1C0217F70 (IsCapturedBySystem.c)
 *     IsCapturedByThread @ 0x1C0217FC0 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x1C0218000 (IsMouseButtonDown.c)
 *     IsMouseInterceptEnabled @ 0x1C0218030 (IsMouseInterceptEnabled.c)
 *     MouseButtonAction @ 0x1C0218130 (MouseButtonAction.c)
 *     MouseMove @ 0x1C0218170 (MouseMove.c)
 *     PostMouseInputMessage @ 0x1C0218238 (PostMouseInputMessage.c)
 *     ReleaseMouseButton @ 0x1C02183D0 (ReleaseMouseButton.c)
 *     SetContentOrientation @ 0x1C0218748 (SetContentOrientation.c)
 *     SetUMInputObservationState @ 0x1C02189D4 (SetUMInputObservationState.c)
 *     SynthesizeMouseInput @ 0x1C0218A60 (SynthesizeMouseInput.c)
 *     UpdateSavedPoint @ 0x1C0218D90 (UpdateSavedPoint.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021EEC0 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall anonymous_namespace_::GetMouseProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3304);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  else
    return 0LL;
}
