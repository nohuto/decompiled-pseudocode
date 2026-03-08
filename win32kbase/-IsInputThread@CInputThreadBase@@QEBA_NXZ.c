/*
 * XREFs of ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C00087B0 (NtMITSynthesizeKeyboardInput.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C002EFEC (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     CanHitTestInDwm @ 0x1C007CAF0 (CanHitTestInDwm.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C007CB8C (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     IsKSTThread @ 0x1C007CC20 (IsKSTThread.c)
 *     NtMITDispatchCompletion @ 0x1C007DC50 (NtMITDispatchCompletion.c)
 *     NtMITActivateInputProcessing @ 0x1C00941B0 (NtMITActivateInputProcessing.c)
 *     ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x1C0094444 (-CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C00947E0 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     NtKSTInitialize @ 0x1C0099E30 (NtKSTInitialize.c)
 *     NtMITSetInputCallbacks @ 0x1C00BFD60 (NtMITSetInputCallbacks.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00C9650 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     NtKSTWait @ 0x1C00CC330 (NtKSTWait.c)
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1C00CD720 (NtMITSetKeyboardInputRoutingPolicy.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C00CD7B4 (SetKeyboardInputRoutingPolicy.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C00CDC30 (NtMITGetCursorUpdateHandle.c)
 *     GetCursorUpdateHandle @ 0x1C00CDCC8 (GetCursorUpdateHandle.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C00CDD24 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     NtMITUpdateInputGlobals @ 0x1C00CF240 (NtMITUpdateInputGlobals.c)
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C00D1DA0 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C00D1E60 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00D3CD0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C0169B30 (NtMITAccessibilityTimerNotification.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1C0169FA0 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1C016A2F0 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C016A750 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C016ABD0 (NtMITEnableMouseIntercept.c)
 *     NtMITPostMouseInputMessage @ 0x1C016B720 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C016B930 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C016BB10 (NtMITPostWindowEventMessage.c)
 *     NtMITSetInputObservationState @ 0x1C016BE90 (NtMITSetInputObservationState.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C016BEE0 (NtMITSetKeyboardOverriderState.c)
 *     NtMITSetLastInputRecipient @ 0x1C016BF40 (NtMITSetLastInputRecipient.c)
 *     NtMITSynthesizeMouseInput @ 0x1C016BFB0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C016C230 (NtMITSynthesizeTouchInput.c)
 *     NtRIMSetDeadzoneRotation @ 0x1C01A2A60 (NtRIMSetDeadzoneRotation.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C020714C (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C020B3C0 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     InvokeMouseCursorPositionCallout @ 0x1C0217E70 (InvokeMouseCursorPositionCallout.c)
 *     PostMouseInputMessage @ 0x1C0218238 (PostMouseInputMessage.c)
 *     SetUMInputObservationState @ 0x1C02189D4 (SetUMInputObservationState.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C02241A8 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0225260 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z @ 0x1C0226240 (-SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x1C022AFC4 (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C022C75C (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C022C888 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C0230F1C (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThreadBase::IsInputThread(CInputThreadBase *this)
{
  CInputThreadBase *v1; // rdi
  char *v2; // rbx

  v1 = this;
  v2 = (char *)this + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  LOBYTE(v1) = (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)v1 + 12);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return (char)v1;
}
