/*
 * XREFs of _anonymous_namespace_::GetMouseProcessor @ 0x1C0042A1C
 * Callers:
 *     ProcessMouseEvent @ 0x1C00423A0 (ProcessMouseEvent.c)
 *     CaptureLogicalCursorPosToQMouseMove @ 0x1C00423D0 (CaptureLogicalCursorPosToQMouseMove.c)
 *     GenerateMouseMove @ 0x1C0042620 (GenerateMouseMove.c)
 *     HandleInputDestDestruction @ 0x1C00427AC (HandleInputDestDestruction.c)
 *     DCompHitTest @ 0x1C0043EB0 (DCompHitTest.c)
 *     PostPendingMouseMove @ 0x1C0045800 (PostPendingMouseMove.c)
 *     ForceCapture @ 0x1C0074840 (ForceCapture.c)
 *     SynthesizeMouseInput @ 0x1C009F2D0 (SynthesizeMouseInput.c)
 *     InitiateWaitForInjectionCompletion @ 0x1C00A13B0 (InitiateWaitForInjectionCompletion.c)
 *     NotifySetPointerGraphicDevice @ 0x1C00A6D40 (NotifySetPointerGraphicDevice.c)
 *     ForceResetMouseButtonsDownState @ 0x1C00B1F20 (ForceResetMouseButtonsDownState.c)
 *     IsCapturedBySystem @ 0x1C00B6DC0 (IsCapturedBySystem.c)
 *     ClearLogicalCursorPos @ 0x1C00B82E0 (ClearLogicalCursorPos.c)
 *     NtMITDisableMouseIntercept @ 0x1C0129AC0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C012A050 (NtMITEnableMouseIntercept.c)
 *     NtMITSynthesizeMouseInput @ 0x1C012BEA0 (NtMITSynthesizeMouseInput.c)
 *     NtUserGetPointerDeviceOrientation @ 0x1C012EF90 (NtUserGetPointerDeviceOrientation.c)
 *     CancelCapturedMipOverride @ 0x1C01AE470 (CancelCapturedMipOverride.c)
 *     CheckIntegrityAccessToCapture @ 0x1C01AE4A0 (CheckIntegrityAccessToCapture.c)
 *     ChildSynchronizeCursorAsyncWithRootPartition @ 0x1C01AE624 (ChildSynchronizeCursorAsyncWithRootPartition.c)
 *     ExecuteMarshaledInterceptRequest @ 0x1C01AE6F0 (ExecuteMarshaledInterceptRequest.c)
 *     HasCapture @ 0x1C01AEA20 (HasCapture.c)
 *     IsCapturedByThread @ 0x1C01AEA80 (IsCapturedByThread.c)
 *     IsMouseButtonDown @ 0x1C01AEAC0 (IsMouseButtonDown.c)
 *     IsMouseInterceptEnabled @ 0x1C01AEAF0 (IsMouseInterceptEnabled.c)
 *     MouseButtonAction @ 0x1C01AEBF0 (MouseButtonAction.c)
 *     MouseMove @ 0x1C01AEC30 (MouseMove.c)
 *     PostMouseInputMessage @ 0x1C01AECE0 (PostMouseInputMessage.c)
 *     ReleaseMouseButton @ 0x1C01AEE70 (ReleaseMouseButton.c)
 *     SetContentOrientation @ 0x1C01AF000 (SetContentOrientation.c)
 *     SetUMInputObservationState @ 0x1C01AF124 (SetUMInputObservationState.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01AF1F0 (SynthesizeMouseInputForPTP.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C01AF350 (SynthesizeMouseInputWithNextPreview.c)
 *     UpdateGlobalCursorOwner @ 0x1C01AF550 (UpdateGlobalCursorOwner.c)
 *     UpdateSavedPoint @ 0x1C01AF5B0 (UpdateSavedPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 anonymous_namespace_::GetMouseProcessor()
{
  if ( qword_1C0246018 )
    return (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0246018 + 8LL))(qword_1C0246018);
  else
    return 0LL;
}
