// write access to const memory has been detected, the output may be wrong!
__int64 InitiateWin32kCleanup(void)
{
  int v0; // edx
  __int64 RemoteContext; // rsi
  int v2; // r8d
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct tagMOUSE_PROMOTION_QUEUE *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rbx
  InteractiveControlManager *v13; // rcx
  int v14; // edx
  void *v15; // rcx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19; // rbx
  __int64 v20; // rbx
  _QWORD *v21; // rax
  char v22; // dl
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  __int64 v24; // rcx
  int v25; // edx
  int v26; // r8d
  PDEVICE_OBJECT v27; // rcx
  __int64 v28; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v31; // [rsp+48h] [rbp-40h]
  HANDLE EventHandle; // [rsp+98h] [rbp+10h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+18h] BYREF

  RemoteContext = GreGetRemoteContext();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v0) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v0) = 0;
  }
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v2,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      9,
      20,
      (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
  }
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  *(_DWORD *)(SGDGetUserSessionState(v3) + 2936) = 0;
  _InterlockedOr(v30, 0);
  EnterCrit(1LL, 0LL);
  CleanupPowerRequestList();
  UserSessionSwitchLeaveCrit(v4);
  if ( !gProtocolType )
    UnregisterDeviceClassNotifications();
  EnterCrit(1LL, 0LL);
  InitializePointerDevicesPresenceState(0LL);
  *(&WPP_MAIN_CB.ActiveThreadCount + 1) = 1;
  gdwHydraHint |= 0x400u;
  WPP_MAIN_CB.ActiveThreadCount = 0;
  v6 = SGDGetUserSessionState(v5);
  CTouchProcessor::CancelActivePointers(*(CTouchProcessor **)(v6 + 3424));
  v8 = SGDGetUserSessionState(v7);
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v8 + 16184));
  v9 = (struct tagMOUSE_PROMOTION_QUEUE *)(v8 + 16072);
  v10 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v9);
    v9 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v9 + 24);
    --v10;
  }
  while ( v10 );
  v12 = SGDGetUserSessionState(v11);
  v13 = *(InteractiveControlManager **)(v12 + 17104);
  if ( v13 )
  {
    InteractiveControlManager::~InteractiveControlManager(v13);
    Win32FreePool(*(void **)(v12 + 17104));
    *(_QWORD *)(v12 + 17104) = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v13) + 3440) )
  {
    v17 = SGDGetUserSessionState(v15);
    v19 = *(void **)(v17 + 3440);
    if ( v19 )
    {
      InkProcessor::~InkProcessor(*(InkProcessor **)(v17 + 3440));
      Win32FreePool(v19);
    }
    *(_QWORD *)(SGDGetUserSessionState(v18) + 3440) = 0LL;
  }
  if ( !gbIgnoreStressedOutStuff && *(_DWORD *)(gptiCurrent + 904LL) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2089LL);
  v20 = *(_QWORD *)(gptiCurrent + 616LL);
  Timeout.QuadPart = -6000000000LL;
  if ( v20 )
  {
    while ( 1 )
    {
      v21 = *(_QWORD **)(v20 + 16);
      if ( !v21
        || v21 == gspdeskDisconnect && !v21[4] && !*(_QWORD *)(*(_QWORD *)(v20 + 56) + 48LL) && NumHandles(v15) <= 1 )
      {
        break;
      }
      UserSessionSwitchLeaveCrit(v15);
      KeWaitForSingleObject(gpevtDesktopDestroyed, WrUserRequest, 0, 0, &Timeout);
      EnterCrit(1LL, 0LL);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v16,
      (unsigned int)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
      4,
      7,
      21,
      (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
  }
  gbExitInProgress = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (v22 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v22 = 0;
  }
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
    LODWORD(v31) = *(_DWORD *)(gptiCurrent + 904LL);
    WPP_RECORDER_AND_TRACE_SF_qD(
      (__int64)AttachedDevice,
      v22,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      7u,
      0x16u,
      (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
      gptiCurrent,
      v31);
  }
  gpqCursor = 0LL;
  ForceCapture(3LL);
  FreeScancodeMap();
  if ( gpDispInfo )
    FreeAllSpbs();
  if ( WPP_MAIN_CB.Dpc.SystemArgument2 )
  {
    ZwClose(WPP_MAIN_CB.Dpc.SystemArgument2);
    WPP_MAIN_CB.Dpc.SystemArgument2 = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.DpcData )
  {
    ObCloseHandle(WPP_MAIN_CB.Dpc.DpcData, 0);
    WPP_MAIN_CB.Dpc.DpcData = 0LL;
  }
  UnlockObjectAssignment(&grpdeskLogon);
  UnlockObjectAssignment(&gspdeskDisconnect);
  v24 = gtmrListHead[0];
  if ( gspwndAltTab )
    HMAssignmentUnlock(&gspwndAltTab);
  TerminateDesktopThreads(v24);
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
      bDrvDisconnect();
    else
      GreDrvDisconnect(RemoteContext);
  }
  UnlockObjectAssignment(grpdeskRitInput);
  UnlockObjectAssignment(grpdeskIODefault);
  UnlockObjectAssignment(gspdeskShouldBeForeground);
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  HMAssignmentUnlock(&gspwndCursor);
  HMAssignmentUnlock(&gspwndCursorNC);
  gptiRit = 0LL;
  v27 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v25) = 0;
  }
  if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v25,
      v26,
      (unsigned int)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
      4,
      7,
      23,
      (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
  }
  UserSessionSwitchLeaveCrit(v27);
  if ( *(_DWORD *)SGDGetUserSessionState(v28) )
  {
    EventHandle = 0LL;
    if ( CreateShutdownEvent(L"EventRitExited", 0x80u, &EventHandle) >= 0 )
    {
      ZwSetEvent(EventHandle, 0LL);
      ZwClose(EventHandle);
    }
  }
  *(_DWORD *)(gptiCurrent + 488LL) &= ~0x800u;
  gdwHydraHint |= 0x1000u;
  if ( gpevtVideoInitialized )
    KeSetEvent(gpevtVideoInitialized, 1, 0);
  if ( gpevtQueueReadyForCallout )
    KeSetEvent(gpevtQueueReadyForCallout, 1, 0);
  return 1LL;
}
