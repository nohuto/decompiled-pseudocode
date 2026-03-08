/*
 * XREFs of HMUnlockObject @ 0x1C0072980
 * Callers:
 *     NtUserToUnicodeEx @ 0x1C00019F0 (NtUserToUnicodeEx.c)
 *     NtUserReportInertia @ 0x1C0002CA0 (NtUserReportInertia.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0008450 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C00087B0 (NtMITSynthesizeKeyboardInput.c)
 *     NtUserSetKeyboardState @ 0x1C0009040 (NtUserSetKeyboardState.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00097A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     NtUserDestroyActivationObject @ 0x1C000D0F0 (NtUserDestroyActivationObject.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C000EB08 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     NtUserSetSysColors @ 0x1C0017020 (NtUserSetSysColors.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C002D838 (-UserInitialize@@YAJXZ.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0032C90 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0032FF0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMOnPnpNotification @ 0x1C0034A30 (NtRIMOnPnpNotification.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 *     NtUserLockCursor @ 0x1C003A670 (NtUserLockCursor.c)
 *     NtUserEnumDisplayMonitors @ 0x1C003AD10 (NtUserEnumDisplayMonitors.c)
 *     hdcOpenDCW @ 0x1C003C8E0 (hdcOpenDCW.c)
 *     EnterCrit @ 0x1C004DD20 (EnterCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C004E2E0 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     NtUserCitSetInfo @ 0x1C006B7E0 (NtUserCitSetInfo.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C006F9B4 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0070484 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     HMAssignmentUnlockWorker @ 0x1C007294C (HMAssignmentUnlockWorker.c)
 *     xxxUserProcessCallout @ 0x1C0074450 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C0074BD0 (UserThreadCallout.c)
 *     ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00779D0 (-HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMFreeObject @ 0x1C0077F50 (HMFreeObject.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C007A800 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     HandleMITWakeSignal @ 0x1C007DE68 (HandleMITWakeSignal.c)
 *     NtUserActivateKeyboardLayout @ 0x1C00823E0 (NtUserActivateKeyboardLayout.c)
 *     NtMITCoreMsgKOpenConnectionTo @ 0x1C0082CF0 (NtMITCoreMsgKOpenConnectionTo.c)
 *     UserProcessFreezeCallout @ 0x1C0083BC4 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0084770 (UserProcessThawCallout.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C0084BB0 (NtUserLoadKeyboardLayoutEx.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0085FBC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     HMRemoveHandleForObject @ 0x1C00896E0 (HMRemoveHandleForObject.c)
 *     PowerResumeSuspendEvent @ 0x1C00898E0 (PowerResumeSuspendEvent.c)
 *     NtUserRegisterLogonProcess @ 0x1C008CD50 (NtUserRegisterLogonProcess.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C008D904 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     NtUserCreateSystemThreads @ 0x1C008E420 (NtUserCreateSystemThreads.c)
 *     xxxCreateSystemThreads @ 0x1C008E630 (xxxCreateSystemThreads.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C008F854 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtUserRegisterSessionPort @ 0x1C00907E0 (NtUserRegisterSessionPort.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0093DD0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     NtMITActivateInputProcessing @ 0x1C00941B0 (NtMITActivateInputProcessing.c)
 *     NtKSTInitialize @ 0x1C0099E30 (NtKSTInitialize.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C009AFA0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C009C0A0 (NtUserSetProcessDpiAwarenessContext.c)
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C00A2FD0 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00AB2C4 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00BCAC8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtUserSetInputServiceState @ 0x1C00BD570 (NtUserSetInputServiceState.c)
 *     W32kEtwEnableCallback @ 0x1C00BE69C (W32kEtwEnableCallback.c)
 *     NtMITSetInputCallbacks @ 0x1C00BFD60 (NtMITSetInputCallbacks.c)
 *     NtUserCreateActivationObject @ 0x1C00C2300 (NtUserCreateActivationObject.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00C2A20 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     InitSystemThread @ 0x1C00C2CB0 (InitSystemThread.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00C3DD0 (UserSessionSwitchEnterCrit.c)
 *     ChangeAcquireResourceType @ 0x1C00C4300 (ChangeAcquireResourceType.c)
 *     NtUserEnableMouseInPointer @ 0x1C00C6B10 (NtUserEnableMouseInPointer.c)
 *     NtUserConfigureActivationObject @ 0x1C00C8D70 (NtUserConfigureActivationObject.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C00CCA70 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     NtMITUpdateInputGlobals @ 0x1C00CF240 (NtMITUpdateInputGlobals.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C00D0D70 (NtUserRegisterTouchPadCapable.c)
 *     NtUserRegisterManipulationThread @ 0x1C00D1240 (NtUserRegisterManipulationThread.c)
 *     UserEnterUserCritSec @ 0x1C00D3ED0 (UserEnterUserCritSec.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00D44A0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D6BA0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D96F8 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C00D9A60 (VideoPortCallout.c)
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 *     HMUnlockDestroyObject @ 0x1C0153990 (HMUnlockDestroyObject.c)
 *     UserProcessTimerDelayCallout @ 0x1C015456C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01549FC (UserProcessTimerStatisticsCallout.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0156854 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     NtMapVisualRelativePoints @ 0x1C0158F60 (NtMapVisualRelativePoints.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C015A190 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C015AD80 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C015C150 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C015E940 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0160F44 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtConfigureInputSpace @ 0x1C0169520 (NtConfigureInputSpace.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C0169B30 (NtMITAccessibilityTimerNotification.c)
 *     NtMITConfigureVirtualTouchpad @ 0x1C0169FA0 (NtMITConfigureVirtualTouchpad.c)
 *     NtMITDeactivateInputProcessing @ 0x1C016A2F0 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C016A750 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C016ABD0 (NtMITEnableMouseIntercept.c)
 *     NtMITInitMinuserThread @ 0x1C016B060 (NtMITInitMinuserThread.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C016B2C0 (NtMITMinuserWindowDestroyed.c)
 *     NtMITPostMouseInputMessage @ 0x1C016B720 (NtMITPostMouseInputMessage.c)
 *     NtMITPostThreadEventMessage @ 0x1C016B930 (NtMITPostThreadEventMessage.c)
 *     NtMITPostWindowEventMessage @ 0x1C016BB10 (NtMITPostWindowEventMessage.c)
 *     NtMITSetInputDelegationMode @ 0x1C016BD10 (NtMITSetInputDelegationMode.c)
 *     NtMITSynthesizeMouseInput @ 0x1C016BFB0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1C016C230 (NtMITSynthesizeTouchInput.c)
 *     NtMITUninitMinuserThread @ 0x1C016C450 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1C016C8F0 (NtSetCursorInputSpace.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C016CDB0 (NtSetPointerDeviceInputSpace.c)
 *     NtSetShellCursorState @ 0x1C016D020 (NtSetShellCursorState.c)
 *     NtUserChangeDisplaySettings @ 0x1C016D440 (NtUserChangeDisplaySettings.c)
 *     NtUserClipCursor @ 0x1C016D9B0 (NtUserClipCursor.c)
 *     NtUserCreateBaseWindow @ 0x1C016DC10 (NtUserCreateBaseWindow.c)
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C016E080 (NtUserCreatePalmRejectionDelayZone.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C016E2A0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C016E700 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserDownlevelTouchpad @ 0x1C016EB00 (NtUserDownlevelTouchpad.c)
 *     NtUserEnableTouchPad @ 0x1C016ECE0 (NtUserEnableTouchPad.c)
 *     NtUserGetInputContainerId @ 0x1C016F9B0 (NtUserGetInputContainerId.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0170EE0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserPostKeyboardInputMessage @ 0x1C0175720 (NtUserPostKeyboardInputMessage.c)
 *     NtUserSetDisplayConfig @ 0x1C0176190 (NtUserSetDisplayConfig.c)
 *     NtUserSetForegroundRedirectionForActivationObject @ 0x1C0176EC0 (NtUserSetForegroundRedirectionForActivationObject.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0177090 (NtUserSetManipulationInputTarget.c)
 *     NtUserSetMouseInputRateLimitingTimer @ 0x1C0177480 (NtUserSetMouseInputRateLimitingTimer.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C0177910 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1C0177BC0 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1C0178420 (NtUserStopAndEndInertia.c)
 *     NtUserSystemParametersInfo @ 0x1C01788A0 (NtUserSystemParametersInfo.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C0179DB0 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C017A220 (NtUserUnregisterSessionPort.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C01A1B20 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1C01A20D0 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C01A2BB0 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01E4C10 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E5120 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E5610 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211410 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211930 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0211F60 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C0212654 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C021A7E0 (ProcessKeyboardInputWorker.c)
 *     ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x1C021DD3C (-SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021E280 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021E9C0 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x1C0220200 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 *     IVWorkerThread @ 0x1C022118C (IVWorkerThread.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C022C888 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C026F804 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 *     Win32UserInitialize @ 0x1C031E444 (Win32UserInitialize.c)
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003A300 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C003B380 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x1C0072B5C (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0076074 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     LockIntoExclusiveUserCritDeferredUnlockList @ 0x1C00D1154 (LockIntoExclusiveUserCritDeferredUnlockList.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     LockIntoSharedUserCritDeferredUnlockList @ 0x1C01539B8 (LockIntoSharedUserCritDeferredUnlockList.c)
 */

__int64 __fastcall HMUnlockObject(__int64 a1)
{
  struct _HANDLEENTRY *v2; // rdi
  char v3; // al
  char *v5; // rdi
  int v6; // esi
  PERESOURCE *v7; // rcx
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v9; // [rsp+28h] [rbp-40h] BYREF
  void *v10; // [rsp+30h] [rbp-38h]
  char v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  char v13; // [rsp+48h] [rbp-20h]

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) != 1 )
    return a1;
  v2 = (struct _HANDLEENTRY *)((char *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*(_DWORD *)a1);
  v3 = *((_BYTE *)v2 + 25);
  if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
    return a1;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    DomainLockRef = GetDomainLockRef(12);
    v5 = &v9;
    v9 = 1;
    v10 = &gDomainDummyLock;
    v12 = 0LL;
    v6 = 0;
    v13 = 0;
    v11 = 0;
    do
    {
      v7 = (PERESOURCE *)*((_QWORD *)v5 - 1);
      if ( v7 )
      {
        if ( *v5 )
          tagDomLock::LockExclusive(v7);
        else
          ExEnterCriticalRegionAndAcquireResourceShared(*v7);
      }
      ++v6;
      v5 += 16;
    }
    while ( !v6 );
    v13 = 1;
    LockIntoSharedUserCritDeferredUnlockList(a1);
    if ( v13 && DomainLockRef )
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  else if ( !gphePrimaryDestroyTarget
         || v2 == gphePrimaryDestroyTarget
         || gbInDestroyExclusiveUserCritDeferredUnlockList )
  {
    HMDestroyUnlockedObjectWorker(v2);
  }
  else
  {
    ++gcSecondaryDestroyTargets;
    LockIntoExclusiveUserCritDeferredUnlockList(a1);
  }
  return 0LL;
}
