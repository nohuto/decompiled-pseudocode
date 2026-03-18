/*
 * XREFs of PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330
 * Callers:
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C0002364 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     NtUserToUnicodeEx @ 0x1C00026F0 (NtUserToUnicodeEx.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0009460 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserSetKeyboardState @ 0x1C0009A80 (NtUserSetKeyboardState.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     NtUserReportInertia @ 0x1C000E690 (NtUserReportInertia.c)
 *     NtUserDestroyActivationObject @ 0x1C000EB80 (NtUserDestroyActivationObject.c)
 *     UserPowerInfoCallout @ 0x1C000FBD4 (UserPowerInfoCallout.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C0018EB0 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     NtUserCitSetInfo @ 0x1C00334B0 (NtUserCitSetInfo.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C003772C (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C0048270 (EnterCrit.c)
 *     xxxUserProcessCallout @ 0x1C0050580 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C0050B50 (UserThreadCallout.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0052A60 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0053374 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     _lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_ @ 0x1C00589A0 (_lambda_0f9e2a8fc479216b45af02f10e3c5bbd_--_lambda_invoker_cdecl_.c)
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 *     NtUserLockCursor @ 0x1C005E230 (NtUserLockCursor.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0065068 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C0067DD0 (NtUserLoadKeyboardLayoutEx.c)
 *     UserProcessThawCallout @ 0x1C00681D0 (UserProcessThawCallout.c)
 *     UserProcessFreezeCallout @ 0x1C0068894 (UserProcessFreezeCallout.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C0068C80 (NtMITCoreMsgKOpenConnectionTo.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0069830 (NtUserActivateKeyboardLayout.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C006F160 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006F340 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMOnPnpNotification @ 0x1C0070810 (NtRIMOnPnpNotification.c)
 *     NtKSTInitialize @ 0x1C0083F60 (NtKSTInitialize.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0084BF8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0084D10 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     PowerResumeSuspendEvent @ 0x1C0084F90 (PowerResumeSuspendEvent.c)
 *     NtUserRegisterSessionPort @ 0x1C0085F50 (NtUserRegisterSessionPort.c)
 *     NtMITActivateInputProcessing @ 0x1C0087520 (NtMITActivateInputProcessing.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C008C4A0 (NtUserSetProcessDpiAwarenessContext.c)
 *     NtUserSetSysColors @ 0x1C00919E0 (NtUserSetSysColors.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C009C214 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00ACC98 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtUserSetInputServiceState @ 0x1C00AD930 (NtUserSetInputServiceState.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00AE3AC (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C00AF6CC (W32kEtwEnableCallback.c)
 *     NtMITSetInputCallbacks @ 0x1C00B0AF0 (NtMITSetInputCallbacks.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B1AE4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     NtUserCreateSystemThreads @ 0x1C00B2720 (NtUserCreateSystemThreads.c)
 *     xxxCreateSystemThreads @ 0x1C00B27C0 (xxxCreateSystemThreads.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C00B30F0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     NtUserCreateActivationObject @ 0x1C00B4080 (NtUserCreateActivationObject.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00B44F0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     InitSystemThread @ 0x1C00B46F0 (InitSystemThread.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B4DD0 (UserSessionSwitchEnterCrit.c)
 *     NtUserEnableMouseInPointer @ 0x1C00B6E50 (NtUserEnableMouseInPointer.c)
 *     ChangeAcquireResourceType @ 0x1C00B84C0 (ChangeAcquireResourceType.c)
 *     NtUserConfigureActivationObject @ 0x1C00B8B40 (NtUserConfigureActivationObject.c)
 *     NtUserRegisterLogonProcess @ 0x1C00BDF70 (NtUserRegisterLogonProcess.c)
 *     NtMITUpdateInputGlobals @ 0x1C00BFA50 (NtMITUpdateInputGlobals.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C00C1410 (NtUserRegisterTouchPadCapable.c)
 *     NtUserRegisterManipulationThread @ 0x1C00C1790 (NtUserRegisterManipulationThread.c)
 *     UserEnterUserCritSec @ 0x1C00C4B00 (UserEnterUserCritSec.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00C5070 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00CAA74 (DrvSetWddmDeviceMonitorPowerState.c)
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD1D4 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C00CD3B0 (VideoPortCallout.c)
 *     ??1DirectLeaveEnterCrit@@QEAA@XZ @ 0x1C00D01E0 (--1DirectLeaveEnterCrit@@QEAA@XZ.c)
 *     W32CalloutDispatch @ 0x1C00DE840 (W32CalloutDispatch.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C00E4DD0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     UserProcessTimerDelayCallout @ 0x1C012D56C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C012D690 (UserProcessTimerStatisticsCallout.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C012F274 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     NtMapVisualRelativePoints @ 0x1C0131660 (NtMapVisualRelativePoints.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C01329F8 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C01332D0 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0136B00 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C013833C (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtConfigureInputSpace @ 0x1C0140880 (NtConfigureInputSpace.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C0140E90 (NtMITAccessibilityTimerNotification.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1C0140F90 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1C01412E0 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C01413E0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C01414F0 (NtMITEnableMouseIntercept.c)
 *     NtMITInitMinuserThread @ 0x1C0141620 (NtMITInitMinuserThread.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C0141880 (NtMITMinuserWindowDestroyed.c)
 *     NtMITPostMouseInputMessage @ 0x1C0141970 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C0141B80 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C0141D60 (NtMITPostWindowEventMessage.c)
 *     NtMITSetInputDelegationMode @ 0x1C0141F60 (NtMITSetInputDelegationMode.c)
 *     NtMITSynthesizeMouseInput @ 0x1C0142240 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C01424C0 (NtMITSynthesizeTouchInput.c)
 *     NtMITUninitMinuserThread @ 0x1C01426E0 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1C0142810 (NtSetCursorInputSpace.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C0142970 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C0142BE0 (NtSetShellCursorState.c)
 *     NtUserChangeDisplaySettings @ 0x1C0143000 (NtUserChangeDisplaySettings.c)
 *     NtUserClipCursor @ 0x1C0143210 (NtUserClipCursor.c)
 *     NtUserCreateBaseWindow @ 0x1C0143470 (NtUserCreateBaseWindow.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C0143570 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C0143790 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0143890 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserDownlevelTouchpad @ 0x1C0143C90 (NtUserDownlevelTouchpad.c)
 *     NtUserEnableTouchPad @ 0x1C0143E70 (NtUserEnableTouchPad.c)
 *     NtUserGetInputContainerId @ 0x1C01447E0 (NtUserGetInputContainerId.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0145720 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserPostKeyboardInputMessage @ 0x1C0149D10 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetDisplayConfig @ 0x1C014A770 (NtUserSetDisplayConfig.c)
 *     NtUserSetForegroundRedirectionForActivationObject @ 0x1C014B490 (NtUserSetForegroundRedirectionForActivationObject.c)
 *     NtUserSetManipulationInputTarget @ 0x1C014B660 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C014BA50 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1C014BD00 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1C014C1E0 (NtUserStopAndEndInertia.c)
 *     NtUserSystemParametersInfo @ 0x1C014C300 (NtUserSystemParametersInfo.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C014D840 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C014D950 (NtUserUnregisterSessionPort.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0174CC0 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1C0174F10 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C0175680 (NtRIMUnregisterForInput.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C70 (RIMOnAsyncPnpWorkNotification.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01B69F0 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6B80 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B6D00 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E27C0 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E2970 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01E3098 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01EA900 (ProcessKeyboardInputWorker.c)
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x1C01ED844 (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDA10 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDB80 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C01EE480 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 *     IVWorkerThread @ 0x1C01EEA6C (IVWorkerThread.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01F6B68 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C0230CC4 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 *     Win32UserInitialize @ 0x1C02DBF90 (Win32UserInitialize.c)
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0044340 (IsThreadCrossSessionAttached.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0053EC0 (EtwTraceAcquiredExclusiveUserCrit.c)
 */

__int64 __fastcall PrivateAPI::_anonymous_namespace_::EnterCritInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 v14; // rdi

  v4 = a1;
  v9 = 0LL;
  if ( (unsigned int)IsEtwUserCritEnabled(a1, a2, a3, a4) )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v11 = SGDGetUserSessionState(v6, v5, v7, v8);
  v12 = (__int64 *)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v11 + 8));
  if ( v12 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
    v14 = *v12;
    if ( v4 || !IsThreadCrossSessionAttached() )
      return v14;
    return v9;
  }
  else
  {
    EtwTraceAcquiredExclusiveUserCrit();
    return 0LL;
  }
}
