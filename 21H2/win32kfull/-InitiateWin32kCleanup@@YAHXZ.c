/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00F099C
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 * Callees:
 *     FreeTimer @ 0x1C0070D80 (FreeTimer.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00CE51C (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C00EFCC4 (--1InkProcessor@@AEAA@XZ.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00F0720 (-TerminateDesktopThreads@@YAXXZ.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00F0F50 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     FreeAllSpbs @ 0x1C00F0F80 (FreeAllSpbs.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x1C00F0FB0 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     ?NumHandles@@YAKPEAX@Z @ 0x1C00F1050 (-NumHandles@@YAKPEAX@Z.c)
 *     InitializePointerDevicesPresenceState @ 0x1C00F10E0 (InitializePointerDevicesPresenceState.c)
 *     CleanupIAMAccess @ 0x1C00F1920 (CleanupIAMAccess.c)
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C00F1EF0 (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     ??1InteractiveControlManager@@AEAA@XZ @ 0x1C011EF48 (--1InteractiveControlManager@@AEAA@XZ.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0123918 (UnregisterDeviceClassNotifications.c)
 *     GreDrvDisconnect @ 0x1C0154A58 (GreDrvDisconnect.c)
 *     bDrvDisconnect @ 0x1C02BF004 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitiateWin32kCleanup(void)
{
  int v0; // edx
  __int64 RemoteContext; // rsi
  int v2; // r8d
  __int64 v3; // rcx
  struct tagMOUSE_PROMOTION_QUEUE *v4; // rbx
  __int64 v5; // rdi
  int v6; // edx
  int v7; // r8d
  InteractiveControlManager *v8; // rcx
  InkProcessor *v9; // rbx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  int v13; // edx
  int v14; // r8d
  PDEVICE_OBJECT v15; // rcx
  signed __int32 v17[8]; // [rsp+0h] [rbp-78h] BYREF
  int v18; // [rsp+28h] [rbp-50h]
  __int16 v19; // [rsp+30h] [rbp-48h]
  const struct _KWAIT_BLOCK *v20; // [rsp+38h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-38h]
  int v22; // [rsp+48h] [rbp-30h]
  HANDLE EventHandle; // [rsp+80h] [rbp+8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp+10h] BYREF

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
      17,
      (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
  }
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  gbPowerCalloutsReady = 0;
  _InterlockedOr(v17, 0);
  EnterCrit(1LL, 0LL);
  CleanupPowerRequestList();
  UserSessionSwitchLeaveCrit(v3);
  if ( !gProtocolType )
    UnregisterDeviceClassNotifications();
  EnterCrit(1LL, 0LL);
  InitializePointerDevicesPresenceState(0LL);
  gbCleanupInitiated = 1;
  gdwHydraHint |= 0x400u;
  gbInSMSCleanup = 0;
  CTouchProcessor::CancelActivePointers(gpTouchProcessor);
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0335D10);
  v4 = (struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C0335CA0;
  v5 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v4);
    v4 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v4 + 24);
    --v5;
  }
  while ( v5 );
  v8 = InteractiveControlManager::s_pInstance;
  if ( InteractiveControlManager::s_pInstance )
  {
    InteractiveControlManager::~InteractiveControlManager(InteractiveControlManager::s_pInstance);
    Win32FreePool(InteractiveControlManager::s_pInstance);
    InteractiveControlManager::s_pInstance = 0LL;
  }
  v9 = InkProcessor::s_pInstance;
  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::~InkProcessor((InkProcessor **)InkProcessor::s_pInstance);
    Win32FreePool(v9);
    InkProcessor::s_pInstance = 0LL;
  }
  v10 = *(_QWORD *)(gptiCurrent + 616LL);
  Timeout.QuadPart = -6000000000LL;
  while ( v10 )
  {
    v11 = *(_QWORD **)(v10 + 16);
    if ( !v11
      || v11 == gspdeskDisconnect && !v11[4] && !*(_QWORD *)(*(_QWORD *)(v10 + 56) + 48LL) && NumHandles(v8) <= 1 )
    {
      break;
    }
    UserSessionSwitchLeaveCrit(v8);
    KeWaitForSingleObject(gpevtDesktopDestroyed, WrUserRequest, 0, 0, &Timeout);
    EnterCrit(1LL, 0LL);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (unsigned int)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids,
      4,
      7,
      18,
      (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
  }
  gbExitInProgress = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
    v22 = *(_DWORD *)(gptiCurrent + 896LL);
    v21 = gptiCurrent;
    v20 = &WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids;
    v19 = 19;
    v18 = 7;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qD((_DWORD)AttachedDevice, v6, v7, 19);
  }
  gpqCursor = 0LL;
  ForceCapture(3LL);
  FreeScancodeMap();
  if ( gpDispInfo )
    FreeAllSpbs();
  if ( ghDisconnectWinSta )
  {
    ZwClose(ghDisconnectWinSta);
    ghDisconnectWinSta = 0LL;
  }
  if ( ghDisconnectDesk )
  {
    ObCloseHandle(ghDisconnectDesk, 0);
    ghDisconnectDesk = 0LL;
  }
  UnlockObjectAssignment(&grpdeskLogon);
  UnlockObjectAssignment(&gspdeskDisconnect);
  if ( gspwndAltTab )
    HMAssignmentUnlock(&gspwndAltTab);
  TerminateDesktopThreads();
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
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v14,
      (unsigned int)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids,
      4,
      7,
      20,
      (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
  }
  UserSessionSwitchLeaveCrit(v15);
  if ( gSessionId )
  {
    EventHandle = 0LL;
    if ( CreateShutdownEvent(
           (const unsigned __int16 *)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids.WaitType,
           128,
           &EventHandle) >= 0 )
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
