/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x1C003B554
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 * Callees:
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C003A764 (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qD @ 0x1C003A8B0 (WPP_RECORDER_AND_TRACE_SF_qD.c)
 *     CleanupIAMAccess @ 0x1C003AE10 (CleanupIAMAccess.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C003B21C (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     InitializePointerDevicesPresenceState @ 0x1C003B250 (InitializePointerDevicesPresenceState.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C003B28C (-TerminateDesktopThreads@@YAXXZ.c)
 *     FreeTimer @ 0x1C003C040 (FreeTimer.c)
 *     ?NumHandles@@YAKPEAX@Z @ 0x1C003C35C (-NumHandles@@YAKPEAX@Z.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C003C3E0 (--1InkProcessor@@AEAA@XZ.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C003CFF0 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     FreeAllSpbs @ 0x1C006CEE0 (FreeAllSpbs.c)
 *     ??1InteractiveControlManager@@AEAA@XZ @ 0x1C00BBDB8 (--1InteractiveControlManager@@AEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0130E44 (UnregisterDeviceClassNotifications.c)
 *     GreDrvDisconnect @ 0x1C01350C4 (GreDrvDisconnect.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     bDrvDisconnect @ 0x1C02DD250 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitiateWin32kCleanup(void)
{
  int v0; // edx
  __int64 RemoteContext; // rsi
  int v2; // r8d
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct tagMOUSE_PROMOTION_QUEUE *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rbx
  InteractiveControlManager *v16; // rcx
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  void *v23; // rbx
  __int64 v24; // rbx
  _QWORD *v25; // rax
  char v26; // dl
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  PDEVICE_OBJECT v32; // rcx
  __int64 v33; // rcx
  signed __int32 v35[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v36; // [rsp+48h] [rbp-40h]
  HANDLE EventHandle; // [rsp+98h] [rbp+10h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+18h] BYREF

  RemoteContext = GreGetRemoteContext();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
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
      3,
      20,
      (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
  }
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  *(_DWORD *)(SGDGetUserSessionState(v3) + 2936) = 0;
  _InterlockedOr(v35, 0);
  EnterCrit(1LL, 0LL);
  CleanupPowerRequestList();
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  if ( !gProtocolType )
    UnregisterDeviceClassNotifications();
  EnterCrit(1LL, 0LL);
  InitializePointerDevicesPresenceState(0LL);
  gdwHydraHint |= 0x400u;
  WPP_MAIN_CB.SecurityDescriptor = (PSECURITY_DESCRIPTOR)0x100000000LL;
  v9 = SGDGetUserSessionState(v8);
  CTouchProcessor::CancelActivePointers(*(CTouchProcessor **)(v9 + 3424));
  v11 = SGDGetUserSessionState(v10);
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v11 + 16184));
  v12 = (struct tagMOUSE_PROMOTION_QUEUE *)(v11 + 16072);
  v13 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v12);
    v12 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v12 + 24);
    --v13;
  }
  while ( v13 );
  v15 = SGDGetUserSessionState(v14);
  v16 = *(InteractiveControlManager **)(v15 + 17104);
  if ( v16 )
  {
    InteractiveControlManager::~InteractiveControlManager(v16);
    Win32FreePool(*(void **)(v15 + 17104));
    *(_QWORD *)(v15 + 17104) = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v16) + 3440) )
  {
    v21 = SGDGetUserSessionState(v18);
    v23 = *(void **)(v21 + 3440);
    if ( v23 )
    {
      InkProcessor::~InkProcessor(*(InkProcessor **)(v21 + 3440));
      Win32FreePool(v23);
    }
    *(_QWORD *)(SGDGetUserSessionState(v22) + 3440) = 0LL;
  }
  if ( !gbIgnoreStressedOutStuff && *(_DWORD *)(gptiCurrent + 904LL) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2024LL);
  v24 = *(_QWORD *)(gptiCurrent + 616LL);
  Timeout.QuadPart = -6000000000LL;
  if ( v24 )
  {
    while ( 1 )
    {
      v25 = *(_QWORD **)(v24 + 16);
      if ( !v25
        || v25 == gspdeskDisconnect && !v25[4] && !*(_QWORD *)(*(_QWORD *)(v24 + 56) + 48LL) && NumHandles(v18) <= 1 )
      {
        break;
      }
      UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
      KeWaitForSingleObject(gpevtDesktopDestroyed, WrUserRequest, 0, 0, &Timeout);
      EnterCrit(1LL, 0LL);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x13u)
    || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v17) = 0;
  }
  if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v17,
      v19,
      (unsigned int)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids,
      4,
      20,
      21,
      (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
  }
  gbExitInProgress = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x13u)
    || (v26 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v26 = 0;
  }
  if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
    LODWORD(v36) = *(_DWORD *)(gptiCurrent + 904LL);
    WPP_RECORDER_AND_TRACE_SF_qD(
      (__int64)AttachedDevice,
      v26,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      0x14u,
      0x16u,
      (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids,
      gptiCurrent,
      v36);
  }
  gpqCursor = 0LL;
  ForceCapture(3LL);
  FreeScancodeMap();
  if ( gpDispInfo )
    FreeAllSpbs();
  if ( WPP_MAIN_CB.Dpc.DpcData )
  {
    ZwClose(WPP_MAIN_CB.Dpc.DpcData);
    WPP_MAIN_CB.Dpc.DpcData = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
  {
    ObCloseHandle(*(HANDLE *)&WPP_MAIN_CB.ActiveThreadCount, 0);
    *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = 0LL;
  }
  UnlockObjectAssignment(&grpdeskLogon);
  UnlockObjectAssignment(&gspdeskDisconnect);
  v28 = gtmrListHead;
  if ( gspwndAltTab )
    HMAssignmentUnlock(&gspwndAltTab);
  TerminateDesktopThreads(v28);
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
  v32 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x13u)
    || (LOBYTE(v29) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v29) = 0;
  }
  LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v29,
      v30,
      (unsigned int)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids,
      4,
      20,
      23,
      (__int64)&WPP_b7341d90d8e73367f780bbfd3745e9b8_Traceguids);
  UserSessionSwitchLeaveCrit(v32, v29, v30, v31);
  if ( *(_DWORD *)SGDGetUserSessionState(v33) )
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
