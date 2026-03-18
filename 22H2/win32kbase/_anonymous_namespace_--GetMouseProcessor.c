/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x1C005304C
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0052A60 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     HandleInputDestDestruction @ 0x1C0052E4C (HandleInputDestDestruction.c)
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C0052FF0 (CaptureLogicalCursorPosToQMouseMove.c)
 *     GenerateMouseMove @ 0x1C0053020 (GenerateMouseMove.c)
 *     ProcessMouseEvent @ 0x1C0055B10 (ProcessMouseEvent.c)
 *     PostPendingMouseMove @ 0x1C009B8E0 (PostPendingMouseMove.c)
 *     NotifySetPointerGraphicDevice @ 0x1C00B4630 (NotifySetPointerGraphicDevice.c)
 *     ForceResetMouseButtonsDownState @ 0x1C00BC310 (ForceResetMouseButtonsDownState.c)
 *     ClearLogicalCursorPos @ 0x1C00C4C90 (ClearLogicalCursorPos.c)
 *     ForceCapture @ 0x1C00C54F0 (ForceCapture.c)
 *     SynthesizePTPMouseInput @ 0x1C00E5ADE (SynthesizePTPMouseInput.c)
 *     UpdateGlobalCursorOwner @ 0x1C00E5C20 (UpdateGlobalCursorOwner.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0138810 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     NtMITDisableMouseIntercept @ 0x1C01413E0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C01414F0 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0142240 (NtMITSynthesizeMouseInput.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C0144E00 (NtUserGetPointerDeviceOrientation.c)
 *     CancelCapturedMipOverride @ 0x1C01E7BF0 (CancelCapturedMipOverride.c)
 *     CheckIntegrityAccessToCapture @ 0x1C01E7C80 (CheckIntegrityAccessToCapture.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C01E7EE0 (ExecuteMarshaledInterceptRequest.c)
 *     HasCapture @ 0x1C01E81C0 (HasCapture.c)
 *     InitiateWaitForInjectionCompletion @ 0x1C01E8430 (InitiateWaitForInjectionCompletion.c)
 *     IsCapturedBySystem @ 0x1C01E8570 (IsCapturedBySystem.c)
 *     IsCapturedByThread @ 0x1C01E85C0 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x1C01E8600 (IsMouseButtonDown.c)
 *     IsMouseInterceptEnabled @ 0x1C01E8630 (IsMouseInterceptEnabled.c)
 *     MouseButtonAction @ 0x1C01E8730 (MouseButtonAction.c)
 *     MouseMove @ 0x1C01E8770 (MouseMove.c)
 *     PostMouseInputMessage @ 0x1C01E8838 (PostMouseInputMessage.c)
 *     ReleaseMouseButton @ 0x1C01E8A10 (ReleaseMouseButton.c)
 *     SetContentOrientation @ 0x1C01E8DB8 (SetContentOrientation.c)
 *     SetUMInputObservationState @ 0x1C01E8FEC (SetUMInputObservationState.c)
 *     SynthesizeMouseInput @ 0x1C01E9070 (SynthesizeMouseInput.c)
 *     UpdateSavedPoint @ 0x1C01E93A0 (UpdateSavedPoint.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDC60 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
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
