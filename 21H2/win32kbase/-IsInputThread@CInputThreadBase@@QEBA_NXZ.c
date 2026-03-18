/*
 * XREFs of ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0005F10 (NtMITSynthesizeKeyboardInput.c)
 *     CanHitTestInDwm @ 0x1C00358C0 (CanHitTestInDwm.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C0037B34 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     NtMITDispatchCompletion @ 0x1C0037BD0 (NtMITDispatchCompletion.c)
 *     IsKSTThread @ 0x1C0037C20 (IsKSTThread.c)
 *     NtKSTInitialize @ 0x1C0054130 (NtKSTInitialize.c)
 *     NtMITUpdateInputGlobals @ 0x1C007EB70 (NtMITUpdateInputGlobals.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C009D580 (NtMITGetCursorUpdateHandle.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C009D640 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     NtMITSetInputDelegationMode @ 0x1C009DB60 (NtMITSetInputDelegationMode.c)
 *     NtMITSetInputCallbacks @ 0x1C00A9360 (NtMITSetInputCallbacks.c)
 *     NtMITActivateInputProcessing @ 0x1C00B5940 (NtMITActivateInputProcessing.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C00B5BF0 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C00B6178 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x1C00B6410 (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00B6F30 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1C00C2BA0 (NtMITSetKeyboardInputRoutingPolicy.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C00C2C34 (SetKeyboardInputRoutingPolicy.c)
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C00C47C0 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C00C4848 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00C5700 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     NtKSTWait @ 0x1C00C6110 (NtKSTWait.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C0153D70 (NtMITAccessibilityTimerNotification.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1C0154140 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1C0154450 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C0154800 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C0154BD0 (NtMITEnableMouseIntercept.c)
 *     NtMITPostMouseInputMessage @ 0x1C01555B0 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C0155780 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C0155930 (NtMITPostWindowEventMessage.c)
 *     NtMITSetInputObservationState @ 0x1C0155B00 (NtMITSetInputObservationState.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C0155B50 (NtMITSetKeyboardOverriderState.c)
 *     NtMITSetLastInputRecipient @ 0x1C0155BB0 (NtMITSetLastInputRecipient.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0155C20 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C0155E60 (NtMITSynthesizeTouchInput.c)
 *     NtRIMSetDeadzoneRotation @ 0x1C0180F90 (NtRIMSetDeadzoneRotation.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01DBD60 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     InvokeMouseCursorPositionCallout @ 0x1C01E7ED0 (InvokeMouseCursorPositionCallout.c)
 *     PostMouseInputMessage @ 0x1C01E81D8 (PostMouseInputMessage.c)
 *     SetUMInputObservationState @ 0x1C01E86C4 (SetUMInputObservationState.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C01F30A0 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01F3EA8 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x1C01F9394 (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01FA038 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01FA0CC (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01FC678 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1C0037D24 (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 */

bool __fastcall CInputThreadBase::IsInputThread(CInputThreadBase *this)
{
  CInputThreadBase *v1; // rdi
  char *v2; // rbx

  v1 = this;
  v2 = (char *)this + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  LOBYTE(v1) = CInputThreadBase::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (char)v1;
}
