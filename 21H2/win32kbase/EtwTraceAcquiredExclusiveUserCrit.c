/*
 * XREFs of EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90
 * Callers:
 *     ChangeAcquireResourceType @ 0x1C0006BF0 (ChangeAcquireResourceType.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0009110 (NtUserActivateKeyboardLayout.c)
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C000C480 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 *     NtUserChangeDisplaySettings @ 0x1C00179C0 (NtUserChangeDisplaySettings.c)
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00392B4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxUserProcessCallout @ 0x1C003BE30 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C003C590 (UserThreadCallout.c)
 *     NtUserGetKeyboardLayout @ 0x1C003D350 (NtUserGetKeyboardLayout.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0040F54 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0044528 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00488D0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0048E60 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     W32CalloutDispatch @ 0x1C004DFB0 (W32CalloutDispatch.c)
 *     UserPowerInfoCallout @ 0x1C004EC50 (UserPowerInfoCallout.c)
 *     UserProcessFreezeCallout @ 0x1C00515C8 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0051A10 (UserProcessThawCallout.c)
 *     NtRIMOnPnpNotification @ 0x1C00528C0 (NtRIMOnPnpNotification.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0058400 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0068284 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C0068F8C (W32kEtwEnableCallback.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0071C60 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C0072874 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0072CCC (-Win32kNtUserCleanup@@YAHXZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0074AD8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtMITSetInputCallbacks @ 0x1C00753B0 (NtMITSetInputCallbacks.c)
 *     NtUserRegisterSessionPort @ 0x1C0075720 (NtUserRegisterSessionPort.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0076B30 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0077CA4 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0077F58 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     xxxCreateSystemThreads @ 0x1C007C540 (xxxCreateSystemThreads.c)
 *     InitSystemThread @ 0x1C0084E20 (InitSystemThread.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0087230 (UserSessionSwitchEnterCrit.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0093E60 (NtUserSetProcessDpiAwarenessContext.c)
 *     NtMITSetInputDelegationMode @ 0x1C0095E50 (NtMITSetInputDelegationMode.c)
 *     NtUserSetInputServiceState @ 0x1C009AB50 (NtUserSetInputServiceState.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00A2E70 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtMITUpdateInputGlobals @ 0x1C00A6F50 (NtMITUpdateInputGlobals.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C00A79C0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     UserEnterUserCritSec @ 0x1C00A7E70 (UserEnterUserCritSec.c)
 *     NtUserEnableMouseInPointer @ 0x1C00A82B0 (NtUserEnableMouseInPointer.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C00A8A60 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C00A9C70 (NtUserRegisterTouchPadCapable.c)
 *     NtUserRegisterManipulationThread @ 0x1C00B5820 (NtUserRegisterManipulationThread.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00B8260 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C0DF8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C00C1B30 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00C1E70 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00C2390 (xxxSendWinlogonPowerMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C35D0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0114B70 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0115740 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0118858 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0118FDC (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01199B4 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCallout @ 0x1C011A290 (VideoPortCallout.c)
 *     VideoPortCalloutThread @ 0x1C011ADB4 (VideoPortCalloutThread.c)
 *     UserProcessTimerDelayCallout @ 0x1C011C9DC (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C011CF2C (UserProcessTimerStatisticsCallout.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C011E9D0 (xxxDisplayDiagBlackScreenDetected.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0120B28 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtMITAccessibilityTimerNotification @ 0x1C0128FD0 (NtMITAccessibilityTimerNotification.c)
 *     NtMITDeactivateInputProcessing @ 0x1C0129550 (NtMITDeactivateInputProcessing.c)
 *     NtMITDisableMouseIntercept @ 0x1C0129AC0 (NtMITDisableMouseIntercept.c)
 *     NtMITEnableMouseIntercept @ 0x1C012A050 (NtMITEnableMouseIntercept.c)
 *     NtMITMinuserWindowCreated @ 0x1C012A800 (NtMITMinuserWindowCreated.c)
 *     NtMITMinuserWindowDestroyed @ 0x1C012AD20 (NtMITMinuserWindowDestroyed.c)
 *     NtMITUninitMinuserThread @ 0x1C012C1B0 (NtMITUninitMinuserThread.c)
 *     NtSetCursorInputSpace @ 0x1C012C750 (NtSetCursorInputSpace.c)
 *     NtUserDestroyPalmRejectionDelayZone @ 0x1C012D4B0 (NtUserDestroyPalmRejectionDelayZone.c)
 *     NtUserEnableTouchPad @ 0x1C012DDF0 (NtUserEnableTouchPad.c)
 *     NtUserInjectGenericHidInput @ 0x1C0130B20 (NtUserInjectGenericHidInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0132C50 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetMouseInputRateLimitingTimer @ 0x1C0133FB0 (NtUserSetMouseInputRateLimitingTimer.c)
 *     NtUserSetProcessMousewheelRoutingMode @ 0x1C01346F0 (NtUserSetProcessMousewheelRoutingMode.c)
 *     NtUserStopAndEndInertia @ 0x1C0134C60 (NtUserStopAndEndInertia.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C01363D0 (NtUserUnloadKeyboardLayout.c)
 *     NtUserUnregisterSessionPort @ 0x1C01368F0 (NtUserUnregisterSessionPort.c)
 *     UserFindBaseWindowHandle @ 0x1C0139294 (UserFindBaseWindowHandle.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0153200 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMOnTimerNotification @ 0x1C0153960 (NtRIMOnTimerNotification.c)
 *     NtRIMUnregisterForInput @ 0x1C0154260 (NtRIMUnregisterForInput.c)
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C0183F00 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01844F0 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0184AE0 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C01A2138 (-ProcessInput@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_I.c)
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01A3050 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01A3F40 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01A7D2C (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A97B0 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A9D60 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z @ 0x1C01AA5C4 (-ProcessPTPInertiaActions@CHidInput@@QEAA_NPEAX_K@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01B08E0 (ProcessKeyboardInputWorker.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B7AE0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8240 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8F60 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B96F0 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01BFA30 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 *     ApiSetSendPTPAsMouse @ 0x1C01D07A0 (ApiSetSendPTPAsMouse.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01FA044 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 *     Win32UserInitialize @ 0x1C0298BBC (Win32UserInitialize.c)
 *     Win32kBaseDriverEntry @ 0x1C029B770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperArray@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperArray@$07@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0120A34 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperArray@$07@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tl.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C01274C4 (McTemplateK0xqx_EtwWriteTransfer.c)
 */

char EtwTraceAcquiredExclusiveUserCrit()
{
  unsigned __int64 CurrentThreadWin32Thread; // rax
  unsigned __int64 v1; // rdi
  LARGE_INTEGER PerformanceCounter; // r15
  LONGLONG v3; // rsi
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 *v7; // rcx
  LARGE_INTEGER v8; // r9
  LARGE_INTEGER v9; // r14
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  DWORD LowPart; // ecx
  bool v14; // zf
  int v15; // r8d
  int v16; // r9d
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  void *v26; // [rsp+90h] [rbp-70h] BYREF
  __int16 v27; // [rsp+98h] [rbp-68h]
  void *v28; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v29; // [rsp+A8h] [rbp-58h]
  signed __int64 *v30; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v31; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int64 *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  __int64 *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  __int64 *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  _QWORD v45[16]; // [rsp+140h] [rbp+40h] BYREF

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  v1 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v3 = PerformanceCounter.QuadPart - *(_QWORD *)(v1 + 8);
    if ( (dword_1C0251EE8 & 1) == 0 )
    {
      dword_1C0251EE8 |= 1u;
      memset(qword_1C0251EF0, 0, 0x198uLL);
      qword_1C0252088 = 0LL;
      qword_1C0252090 = 0LL;
    }
    v4 = 1000000 * v3;
    v45[0] = 10LL;
    v45[1] = 25LL;
    v45[2] = 50LL;
    v45[3] = 100LL;
    v45[4] = 250LL;
    v45[5] = 500LL;
    v45[6] = 1000LL;
    v45[7] = 2500LL;
    v45[8] = 5000LL;
    v45[9] = 10000LL;
    v45[10] = 25000LL;
    v45[11] = 50000LL;
    v45[12] = 100000LL;
    v45[13] = 200000LL;
    v45[14] = -1LL;
    if ( gliQpcFreq.QuadPart == 10000000 )
      v5 = v4 / 0x989680;
    else
      v5 = v4 / gliQpcFreq.QuadPart;
    v6 = 0LL;
    v7 = v45;
    while ( v5 > *v7 )
    {
      v6 = (unsigned int)(v6 + 1);
      ++v7;
      if ( (unsigned int)v6 >= 0xF )
        goto LABEL_11;
    }
    _InterlockedIncrement64(&qword_1C0251EF0[v6]);
LABEL_11:
    _InterlockedExchangeAdd64((volatile signed __int64 *)&xmmword_1C0252058, v5);
    _InterlockedIncrement64((_QWORD *)&xmmword_1C0252068 + 1);
    if ( (dword_1C0251EE8 & 1) == 0 )
    {
      dword_1C0251EE8 |= 1u;
      memset(qword_1C0251EF0, 0, 0x198uLL);
      qword_1C0252088 = 0LL;
      qword_1C0252090 = 0LL;
    }
    v9 = KeQueryPerformanceCounter(0LL);
    v10 = 1000000 * (v9.QuadPart - qword_1C0252088);
    if ( gliQpcFreq.QuadPart == 10000000 )
      v11 = v10 / 0x989680;
    else
      v11 = v10 / gliQpcFreq.QuadPart;
    if ( v11 > 0x6B49D200 )
    {
      if ( (unsigned int)dword_1C024A250 > 5
        && (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))tlgKeywordOn)(
                              &dword_1C024A250,
                              0x400000000000LL,
                              v10,
                              (LARGE_INTEGER)v8.QuadPart) )
      {
        v18 = 1;
        v27 = 15;
        v26 = &unk_1C0251FE0;
        v29 = 15;
        v28 = &unk_1C0251F68;
        v30 = qword_1C0251EF0;
        v31 = 15;
        v19 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<4>>(
          15,
          (unsigned int)&unk_1C0219876,
          v15,
          v16,
          (__int64)&v19,
          (__int64)&v30,
          (__int64)&v28,
          (__int64)&v26,
          (__int64)&v18);
      }
      memset(qword_1C0251EF0, 0, 0x168uLL);
      qword_1C0252088 = v9.QuadPart;
    }
    v12 = 1000000 * (v9.QuadPart - qword_1C0252090);
    LowPart = gliQpcFreq.LowPart;
    if ( gliQpcFreq.QuadPart == 10000000 )
      CurrentThreadWin32Thread = v12 / 0x989680;
    else
      CurrentThreadWin32Thread = v12 / gliQpcFreq.QuadPart;
    if ( CurrentThreadWin32Thread > 0xF4240 )
    {
      if ( (unsigned int)dword_1C024A250 > 5 )
      {
        LOBYTE(CurrentThreadWin32Thread) = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))tlgKeywordOn)(
                                             &dword_1C024A250,
                                             0x10000000LL,
                                             v12,
                                             (LARGE_INTEGER)v8.QuadPart);
        if ( (_BYTE)CurrentThreadWin32Thread )
        {
          v20 = *((_QWORD *)&xmmword_1C0252078 + 1);
          v21 = xmmword_1C0252078;
          v22 = *((_QWORD *)&xmmword_1C0252068 + 1);
          v23 = xmmword_1C0252068;
          v24 = *((_QWORD *)&xmmword_1C0252058 + 1);
          v25 = xmmword_1C0252058;
          v43 = &v20;
          v41 = &v21;
          v39 = &v22;
          v37 = &v23;
          v35 = &v24;
          v33 = &v25;
          v44 = 8LL;
          v42 = 8LL;
          v40 = 8LL;
          v38 = 8LL;
          v36 = 8LL;
          v34 = 8LL;
          LOBYTE(CurrentThreadWin32Thread) = tlgWriteTransfer_EtwWriteTransfer(
                                               (int)&dword_1C024A250,
                                               (int)&dword_1C02197F1,
                                               0,
                                               0,
                                               8u,
                                               &v32);
        }
      }
      qword_1C0252090 = v9.QuadPart;
      xmmword_1C0252058 = 0LL;
      xmmword_1C0252068 = 0LL;
      xmmword_1C0252078 = 0LL;
    }
    v14 = (W32kEtwEnabledKeyword & 0x200000010000000LL) == 0;
    *(LARGE_INTEGER *)(v1 + 8) = PerformanceCounter;
    if ( !v14 )
    {
      LOBYTE(CurrentThreadWin32Thread) = byte_1C024A738 - 1;
      if ( (unsigned __int8)(byte_1C024A738 - 1) > 2u && (qword_1C024A720 & 0x200000010000000LL) != 0 )
      {
        LOBYTE(CurrentThreadWin32Thread) = 0;
        if ( (qword_1C024A728 & 0x200000010000000LL) == qword_1C024A728 )
        {
          LOBYTE(CurrentThreadWin32Thread) = BYTE2(Microsoft_Windows_Win32kEnableBits);
          if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            LOBYTE(CurrentThreadWin32Thread) = McTemplateK0xqx_EtwWriteTransfer(
                                                 LowPart,
                                                 (unsigned int)&AcquiredExclusiveUserCritEvent,
                                                 v12,
                                                 v3,
                                                 0,
                                                 (char)gullUserCritAcquireToken);
        }
      }
    }
    if ( v3 >= W32kEtwUserCritAcquireDelayTimeoutQPC
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayExLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
        LOBYTE(CurrentThreadWin32Thread) = McTemplateK0xqx_EtwWriteTransfer(
                                             (_DWORD)gullUserCritAcquireToken,
                                             (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                                             v12,
                                             v3,
                                             (__int64)v4 / gliQpcFreq.QuadPart,
                                             (char)gullUserCritAcquireToken);
      W32KEtwUserCritAcquireDelayExLastTelemetryQPC = PerformanceCounter.QuadPart;
    }
    *(_QWORD *)(v1 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  return CurrentThreadWin32Thread;
}
