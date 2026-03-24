/*
 * XREFs of ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0042200
 * Callers:
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C0041F78 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     NtMITDispatchCompletion @ 0x1C0042080 (NtMITDispatchCompletion.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0042194 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     NtMITSetInputCallbacks @ 0x1C00753B0 (NtMITSetInputCallbacks.c)
 *     NtMITGetCursorUpdateHandle @ 0x1C0087B00 (NtMITGetCursorUpdateHandle.c)
 *     GetCursorUpdateHandle @ 0x1C0087D6C (GetCursorUpdateHandle.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0087E00 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C0089634 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C0089A48 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     NtMITSetInputDelegationMode @ 0x1C0095E50 (NtMITSetInputDelegationMode.c)
 *     SetThreadPriority @ 0x1C009DE20 (SetThreadPriority.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C009E0C0 (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     NtMITUpdateInputGlobals @ 0x1C00A6F50 (NtMITUpdateInputGlobals.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C00B3688 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C00B5620 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 *     ?HandleMITTermination@CMouseProcessor@@AEAAXXZ @ 0x1C00B56AC (-HandleMITTermination@CMouseProcessor@@AEAAXXZ.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C00B5764 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     NtMITSetKeyboardInputRoutingPolicy @ 0x1C00B5F80 (NtMITSetKeyboardInputRoutingPolicy.c)
 *     SetKeyboardInputRoutingPolicy @ 0x1C00B6050 (SetKeyboardInputRoutingPolicy.c)
 *     ?SetKeyboardInputRoutingPolicy@CKeyboardProcessor@@QEAAXW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C00B6134 (-SetKeyboardInputRoutingPolicy@CKeyboardProcessor@@QEAAXW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00B7A90 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C00B7BCC (-RevokeThreadAsInput@CInputThread@@QEAAXXZ.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C0128FD0 (NtMITAccessibilityTimerNotification.c)
 *     NtMITDeactivateInputProcessing @ 0x1C0129550 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C0129AC0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C012A050 (NtMITEnableMouseIntercept.c)
 *     NtMITSetInputObservationState @ 0x1C012B610 (NtMITSetInputObservationState.c)
 *     NtMITSetKeyboardOverriderState @ 0x1C012B6C0 (NtMITSetKeyboardOverriderState.c)
 *     NtMITSetLastInputRecipient @ 0x1C012B760 (NtMITSetLastInputRecipient.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01900D0 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01A2FA0 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01A3050 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     PostMouseInputMessage @ 0x1C01AECE0 (PostMouseInputMessage.c)
 *     SetUMInputObservationState @ 0x1C01AF124 (SetUMInputObservationState.c)
 *     ?SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z @ 0x1C01BB11C (-SetUMInputObservationState@CBaseProcessor@@QEAAXW4_MIT_INPUT_OBSERVATION_STATE@@@Z.c)
 *     ?AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@AEBUInputDeliveryContext@2@PEA_K@Z @ 0x1C01BEBFC (-AddInputToList@BufferedMouseInputList@CMouseProcessor@@QEAA_NAEBVCMouseEvent@2@AEAVCInputDest@@.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01BF894 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01BFA30 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01C2014 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputThread::_CalledOnInputThread(CInputThread *this)
{
  return (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)this + 10);
}
