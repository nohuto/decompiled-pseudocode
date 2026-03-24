/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x1C0043E8C
 * Callers:
 *     ProcessMouseEvent @ 0x1C0043810 (ProcessMouseEvent.c)
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C0043840 (CaptureLogicalCursorPosToQMouseMove.c)
 *     GenerateMouseMove @ 0x1C0043A90 (GenerateMouseMove.c)
 *     HandleInputDestDestruction @ 0x1C0043C1C (HandleInputDestDestruction.c)
 *     DCompHitTest @ 0x1C0045320 (DCompHitTest.c)
 *     PostPendingMouseMove @ 0x1C0046C70 (PostPendingMouseMove.c)
 *     ForceCapture @ 0x1C0075EB0 (ForceCapture.c)
 *     SynthesizeMouseInput @ 0x1C00A0090 (SynthesizeMouseInput.c)
 *     InitiateWaitForInjectionCompletion @ 0x1C00A2170 (InitiateWaitForInjectionCompletion.c)
 *     NotifySetPointerGraphicDevice @ 0x1C00A7240 (NotifySetPointerGraphicDevice.c)
 *     ForceResetMouseButtonsDownState @ 0x1C00B2260 (ForceResetMouseButtonsDownState.c)
 *     IsCapturedBySystem @ 0x1C00B70E0 (IsCapturedBySystem.c)
 *     ClearLogicalCursorPos @ 0x1C00B85E0 (ClearLogicalCursorPos.c)
 *     NtMITDisableMouseIntercept @ 0x1C0129D90 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C012A320 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1C012C170 (NtMITSynthesizeMouseInput.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C012F260 (NtUserGetPointerDeviceOrientation.c)
 *     CancelCapturedMipOverride @ 0x1C01AE3A0 (CancelCapturedMipOverride.c)
 *     CheckIntegrityAccessToCapture @ 0x1C01AE3D0 (CheckIntegrityAccessToCapture.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C01AE554 (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C01AE620 (ExecuteMarshaledInterceptRequest.c)
 *     HasCapture @ 0x1C01AE950 (HasCapture.c)
 *     IsCapturedByThread @ 0x1C01AE9B0 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x1C01AE9F0 (IsMouseButtonDown.c)
 *     IsMouseInterceptEnabled @ 0x1C01AEA20 (IsMouseInterceptEnabled.c)
 *     MouseButtonAction @ 0x1C01AEB20 (MouseButtonAction.c)
 *     MouseMove @ 0x1C01AEB60 (MouseMove.c)
 *     PostMouseInputMessage @ 0x1C01AEC10 (PostMouseInputMessage.c)
 *     ReleaseMouseButton @ 0x1C01AEDA0 (ReleaseMouseButton.c)
 *     SetContentOrientation @ 0x1C01AEF30 (SetContentOrientation.c)
 *     SetUMInputObservationState @ 0x1C01AF054 (SetUMInputObservationState.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01AF120 (SynthesizeMouseInputForPTP.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C01AF280 (SynthesizeMouseInputWithNextPreview.c)
 *     UpdateGlobalCursorOwner @ 0x1C01AF480 (UpdateGlobalCursorOwner.c)
 *     UpdateSavedPoint @ 0x1C01AF4E0 (UpdateSavedPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetMouseProcessor()
{
  if ( qword_1C0245018 )
    return (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0245018 + 8LL))(qword_1C0245018);
  else
    return 0LL;
}
