/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC
 * Callers:
 *     HandleInputDestDestruction @ 0x1C003ACA0 (HandleInputDestDestruction.c)
 *     ProcessMouseEvent @ 0x1C003ADB0 (ProcessMouseEvent.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C003ADD4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C003B200 (CaptureLogicalCursorPosToQMouseMove.c)
 *     GenerateMouseMove @ 0x1C003B2B0 (GenerateMouseMove.c)
 *     PostPendingMouseMove @ 0x1C003C8D0 (PostPendingMouseMove.c)
 *     InitiateWaitForInjectionCompletion @ 0x1C00B08A0 (InitiateWaitForInjectionCompletion.c)
 *     SynthesizeMouseInput @ 0x1C00B2BC0 (SynthesizeMouseInput.c)
 *     NotifySetPointerGraphicDevice @ 0x1C00B9E60 (NotifySetPointerGraphicDevice.c)
 *     ForceResetMouseButtonsDownState @ 0x1C00BFE60 (ForceResetMouseButtonsDownState.c)
 *     ClearLogicalCursorPos @ 0x1C00C59E0 (ClearLogicalCursorPos.c)
 *     ForceCapture @ 0x1C00C5EC0 (ForceCapture.c)
 *     IsCapturedBySystem @ 0x1C00D0410 (IsCapturedBySystem.c)
 *     SynthesizePTPMouseInput @ 0x1C00E8FA4 (SynthesizePTPMouseInput.c)
 *     UpdateGlobalCursorOwner @ 0x1C00E90D0 (UpdateGlobalCursorOwner.c)
 *     NtMITDisableMouseIntercept @ 0x1C0154800 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C0154BD0 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0155C20 (NtMITSynthesizeMouseInput.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C0159F00 (NtUserGetPointerDeviceOrientation.c)
 *     CancelCapturedMipOverride @ 0x1C01E7790 (CancelCapturedMipOverride.c)
 *     CheckIntegrityAccessToCapture @ 0x1C01E7820 (CheckIntegrityAccessToCapture.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C01E7A40 (ExecuteMarshaledInterceptRequest.c)
 *     HasCapture @ 0x1C01E7CA0 (HasCapture.c)
 *     IsCapturedByThread @ 0x1C01E7FA0 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x1C01E7FE0 (IsMouseButtonDown.c)
 *     IsMouseInterceptEnabled @ 0x1C01E8010 (IsMouseInterceptEnabled.c)
 *     MouseButtonAction @ 0x1C01E80D0 (MouseButtonAction.c)
 *     MouseMove @ 0x1C01E8110 (MouseMove.c)
 *     PostMouseInputMessage @ 0x1C01E81D8 (PostMouseInputMessage.c)
 *     ReleaseMouseButton @ 0x1C01E8310 (ReleaseMouseButton.c)
 *     SetContentOrientation @ 0x1C01E85D8 (SetContentOrientation.c)
 *     SetUMInputObservationState @ 0x1C01E86C4 (SetUMInputObservationState.c)
 *     UpdateSavedPoint @ 0x1C01E8800 (UpdateSavedPoint.c)
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE030 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetMouseProcessor()
{
  if ( qword_1C0288018 )
    return (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0288018 + 8LL))(qword_1C0288018);
  else
    return 0LL;
}
