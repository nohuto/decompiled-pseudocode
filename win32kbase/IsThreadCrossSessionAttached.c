/*
 * XREFs of IsThreadCrossSessionAttached @ 0x1C004B600
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0008450 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00097A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C000EB08 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C0019C74 (--0EngModeState@@QEAA@XZ.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C001D054 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C002D838 (-UserInitialize@@YAJXZ.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C002F3AC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0032C90 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0032FF0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMOnPnpNotification @ 0x1C0034A30 (NtRIMOnPnpNotification.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0042910 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C004DD20 (EnterCrit.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C006F9B4 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0070484 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxUserProcessCallout @ 0x1C0074450 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C0074BD0 (UserThreadCallout.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C007A800 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     HandleMITWakeSignal @ 0x1C007DE68 (HandleMITWakeSignal.c)
 *     UserProcessFreezeCallout @ 0x1C0083BC4 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0084770 (UserProcessThawCallout.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0085FBC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00898E0 (PowerResumeSuspendEvent.c)
 *     xxxCreateSystemThreads @ 0x1C008E630 (xxxCreateSystemThreads.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C008F854 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0093DD0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C009AFA0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     HmgMarkLazyDelete @ 0x1C00A3410 (HmgMarkLazyDelete.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00AB2C4 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 *     NtUserSetInputServiceState @ 0x1C00BD570 (NtUserSetInputServiceState.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00C2A20 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     InitSystemThread @ 0x1C00C2CB0 (InitSystemThread.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00C3DD0 (UserSessionSwitchEnterCrit.c)
 *     ChangeAcquireResourceType @ 0x1C00C4300 (ChangeAcquireResourceType.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C00CCA70 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     UserEnterUserCritSec @ 0x1C00D3ED0 (UserEnterUserCritSec.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00D44A0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D6BA0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D96F8 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C00D9A60 (VideoPortCallout.c)
 *     UserProcessTimerDelayCallout @ 0x1C015456C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01549FC (UserProcessTimerStatisticsCallout.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0156854 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C015A190 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C015AD80 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C015E940 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0160F44 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C016B2C0 (NtMITMinuserWindowDestroyed.c)
 *     NtMITUninitMinuserThread @ 0x1C016C450 (NtMITUninitMinuserThread.c)
 *     NtUserCreateBaseWindow @ 0x1C016DC10 (NtUserCreateBaseWindow.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C01A1B20 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1C01A20D0 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C01A2BB0 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01E4C10 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E5120 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E5610 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211410 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211930 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
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
 * Callees:
 *     <none>
 */

_BOOL8 IsThreadCrossSessionAttached()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v5; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( !(unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  v5 = *(_DWORD *)SGDGetUserSessionState(v1, v0, v2, v3);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  return v5 != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess);
}
