/*
 * XREFs of ?SendUserCritSummary@UserCritTelemetry@@QEAAXXZ @ 0x1C004E418
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0008450 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00097A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C000EB08 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C002D838 (-UserInitialize@@YAJXZ.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0032C90 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0032FF0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMOnPnpNotification @ 0x1C0034A30 (NtRIMOnPnpNotification.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 *     EnterCrit @ 0x1C004DD20 (EnterCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C004F99C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C004FB50 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     NtUserCitSetInfo @ 0x1C006B7E0 (NtUserCitSetInfo.c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C006F9B4 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0070484 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxUserProcessCallout @ 0x1C0074450 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C0074BD0 (UserThreadCallout.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C007A800 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     HandleMITWakeSignal @ 0x1C007DE68 (HandleMITWakeSignal.c)
 *     NtUserActivateKeyboardLayout @ 0x1C00823E0 (NtUserActivateKeyboardLayout.c)
 *     UserProcessFreezeCallout @ 0x1C0083BC4 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0084770 (UserProcessThawCallout.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0085FBC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00898E0 (PowerResumeSuspendEvent.c)
 *     NtUserRegisterLogonProcess @ 0x1C008CD50 (NtUserRegisterLogonProcess.c)
 *     NtUserCreateSystemThreads @ 0x1C008E420 (NtUserCreateSystemThreads.c)
 *     xxxCreateSystemThreads @ 0x1C008E630 (xxxCreateSystemThreads.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C008F854 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtUserRegisterSessionPort @ 0x1C00907E0 (NtUserRegisterSessionPort.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0093DD0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     NtKSTInitialize @ 0x1C0099E30 (NtKSTInitialize.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C009AFA0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C009C0A0 (NtUserSetProcessDpiAwarenessContext.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00AB2C4 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     UserPowerInfoCallout @ 0x1C00B657C (UserPowerInfoCallout.c)
 *     NtUserSetInputServiceState @ 0x1C00BD570 (NtUserSetInputServiceState.c)
 *     NtMITSetInputCallbacks @ 0x1C00BFD60 (NtMITSetInputCallbacks.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00C2A20 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     InitSystemThread @ 0x1C00C2CB0 (InitSystemThread.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00C3DD0 (UserSessionSwitchEnterCrit.c)
 *     ChangeAcquireResourceType @ 0x1C00C4300 (ChangeAcquireResourceType.c)
 *     NtUserEnableMouseInPointer @ 0x1C00C6B10 (NtUserEnableMouseInPointer.c)
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
 *     UserProcessTimerDelayCallout @ 0x1C015456C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C01549FC (UserProcessTimerStatisticsCallout.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0156854 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C015A190 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C015AD80 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C015E940 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0160F44 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C0169B30 (NtMITAccessibilityTimerNotification.c)
 *     NtMITDeactivateInputProcessing @ 0x1C016A2F0 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C016A750 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C016ABD0 (NtMITEnableMouseIntercept.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C016B2C0 (NtMITMinuserWindowDestroyed.c)
 *     NtMITUninitMinuserThread @ 0x1C016C450 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1C016C8F0 (NtSetCursorInputSpace.c)
 *     NtUserChangeDisplaySettings @ 0x1C016D440 (NtUserChangeDisplaySettings.c)
 *     NtUserCreateBaseWindow @ 0x1C016DC10 (NtUserCreateBaseWindow.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C016E2A0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1C016ECE0 (NtUserEnableTouchPad.c)
 *     NtUserSetMouseInputRateLimitingTimer @ 0x1C0177480 (NtUserSetMouseInputRateLimitingTimer.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1C0177BC0 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1C0178420 (NtUserStopAndEndInertia.c)
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
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333333333@Z @ 0x1C00012C4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPE.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z @ 0x1C00DD904 (-Update@TelemetryBuffer@UserCritTelemetry@@QEAAXQEB_K00@Z.c)
 *     Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledDeviceUsage @ 0x1C00DDDFC (Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333@Z @ 0x1C0160DA8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperArray@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperArray@$07@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0160E50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperArray@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tl.c)
 */

void __fastcall UserCritTelemetry::SendUserCritSummary(LARGE_INTEGER *this)
{
  LARGE_INTEGER v2; // rcx
  LARGE_INTEGER PerformanceCounter; // r15
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rsi
  LARGE_INTEGER *v9; // r14
  unsigned __int64 *p_QuadPart; // rdi
  __int64 v11; // r9
  LARGE_INTEGER v12; // r8
  unsigned __int64 QuadPart; // rax
  LARGE_INTEGER v14; // rcx
  unsigned __int64 v15; // rax
  LARGE_INTEGER v16; // r8
  LARGE_INTEGER v17; // rcx
  LARGE_INTEGER v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // r8d
  int v25; // r9d
  LARGE_INTEGER *v26; // [rsp+80h] [rbp-39h] BYREF
  __int16 v27; // [rsp+88h] [rbp-31h]
  LARGE_INTEGER *v28; // [rsp+90h] [rbp-29h] BYREF
  __int16 v29; // [rsp+98h] [rbp-21h]
  LARGE_INTEGER *v30; // [rsp+A0h] [rbp-19h] BYREF
  __int16 v31; // [rsp+A8h] [rbp-11h]
  LARGE_INTEGER v32; // [rsp+B0h] [rbp-9h] BYREF
  LARGE_INTEGER v33; // [rsp+B8h] [rbp-1h] BYREF
  LARGE_INTEGER v34; // [rsp+C0h] [rbp+7h] BYREF
  unsigned __int64 v35; // [rsp+C8h] [rbp+Fh] BYREF
  unsigned __int64 v36[8]; // [rsp+D0h] [rbp+17h] BYREF
  LARGE_INTEGER v37; // [rsp+120h] [rbp+67h] BYREF
  __int64 v38; // [rsp+128h] [rbp+6Fh] BYREF
  LARGE_INTEGER v39; // [rsp+130h] [rbp+77h] BYREF
  LARGE_INTEGER v40; // [rsp+138h] [rbp+7Fh] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[604].QuadPart)) / gliQpcFreq.QuadPart > 0x6B49D200 )
  {
    if ( (unsigned int)dword_1C02C93D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
    {
      v37.LowPart = 1;
      v29 = 15;
      v28 = this + 580;
      v27 = 15;
      v26 = this + 565;
      v30 = this + 550;
      v31 = 15;
      v38 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<4>>(
        15,
        (unsigned int)&unk_1C02946CA,
        v4,
        v5,
        (__int64)&v38,
        (__int64)&v30,
        (__int64)&v26,
        (__int64)&v28,
        (__int64)&v37);
    }
    memset(&this[550], 0, 0x168uLL);
    this[604] = PerformanceCounter;
  }
  if ( (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[605].QuadPart)) / gliQpcFreq.QuadPart > 0xF4240 )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledDeviceUsage)(
                         (LARGE_INTEGER)v2.QuadPart,
                         (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[605].QuadPart))
                       % gliQpcFreq.QuadPart) )
    {
      v8 = (__int64 *)&this[598];
      v9 = this + 595;
      p_QuadPart = (unsigned __int64 *)&this[601].QuadPart;
      UserCritTelemetry::TelemetryBuffer::Update(
        (UserCritTelemetry::TelemetryBuffer *)this,
        (const unsigned __int64 *const)&this[601].QuadPart,
        (const unsigned __int64 *const)&this[595].QuadPart,
        (const unsigned __int64 *const)&this[598].QuadPart);
      if ( (unsigned int)dword_1C02C93D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x10000000LL) )
      {
        v12 = this[603];
        QuadPart = this[597].QuadPart;
        v14 = this[600];
        v37 = v12;
        v38 = QuadPart;
        v39 = v14;
        if ( v12.QuadPart )
          v15 = QuadPart / v12.QuadPart;
        else
          v15 = 0LL;
        v16 = this[602];
        v17 = this[599];
        v40.QuadPart = v15;
        v18 = this[596];
        v33 = v18;
        v32 = v16;
        v34 = v17;
        if ( v16.QuadPart )
          v19 = v18.QuadPart / (unsigned __int64)v16.QuadPart;
        else
          v19 = 0LL;
        v20 = *p_QuadPart;
        v21 = *v8;
        v35 = v19;
        v22 = v9->QuadPart;
        v30 = (LARGE_INTEGER *)v9->QuadPart;
        v36[0] = v20;
        v26 = (LARGE_INTEGER *)v21;
        if ( v20 )
          v23 = v22 / v20;
        else
          v23 = 0LL;
        v28 = (LARGE_INTEGER *)v23;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v21,
          (int)&unk_1C02945BB,
          v20,
          v11,
          (__int64)&v28,
          (__int64)&v26,
          (__int64)&v30,
          (__int64)v36,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v37);
      }
    }
    else
    {
      if ( (unsigned int)dword_1C02C93D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x10000000LL) )
      {
        v37 = this[603];
        v38 = this[602].QuadPart;
        v39 = this[601];
        v40 = this[597];
        v28 = (LARGE_INTEGER *)this[596].QuadPart;
        v26 = (LARGE_INTEGER *)this[595].QuadPart;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v7,
          (unsigned int)&unk_1C0294536,
          v24,
          v25,
          (__int64)&v26,
          (__int64)&v28,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v37);
      }
      v9 = this + 595;
      v8 = (__int64 *)&this[598];
      p_QuadPart = (unsigned __int64 *)&this[601].QuadPart;
    }
    *(_OWORD *)&v9->LowPart = 0LL;
    v9[2].QuadPart = 0LL;
    if ( (unsigned int)Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledDeviceUsage(v7, v6) )
    {
      *(_OWORD *)v8 = 0LL;
      v8[2] = 0LL;
    }
    *(_OWORD *)p_QuadPart = 0LL;
    p_QuadPart[2] = 0LL;
    this[605] = PerformanceCounter;
  }
}
