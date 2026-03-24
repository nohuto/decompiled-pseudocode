/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000ADD4
 * Callers:
 *     RawInputThread @ 0x1C0009A50 (RawInputThread.c)
 * Callees:
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C000A728 (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     InitializePointerDevicesPresenceState @ 0x1C000A870 (InitializePointerDevicesPresenceState.c)
 *     ?NumHandles@@YAKPEAX@Z @ 0x1C000A918 (-NumHandles@@YAKPEAX@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x1C000A99C (WPP_RECORDER_SF_qD.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C000AA2C (-TerminateDesktopThreads@@YAXXZ.c)
 *     FreeTimer @ 0x1C000B6C0 (FreeTimer.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C000BC24 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C000E704 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     FreeAllSpbs @ 0x1C002AA90 (FreeAllSpbs.c)
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C004E944 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     CleanupIAMAccess @ 0x1C00D75A0 (CleanupIAMAccess.c)
 *     UnregisterDeviceClassNotifications @ 0x1C01288E0 (UnregisterDeviceClassNotifications.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C012DA5C (--1InkProcessor@@AEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1C01339E0 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 *     GreDrvDisconnect @ 0x1C0163250 (GreDrvDisconnect.c)
 *     bDrvDisconnect @ 0x1C02BFA2C (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitiateWin32kCleanup(void)
{
  int v0; // edx
  int v1; // ecx
  __int64 RemoteContext; // rsi
  struct tagMOUSE_PROMOTION_QUEUE *v3; // rbx
  __int64 v4; // rdi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  InteractiveControlManager *v8; // rcx
  REGHANDLE v9; // rcx
  REGHANDLE v10; // rcx
  InkProcessor *v11; // rbx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  int v14; // edx
  int v15; // ecx
  signed __int32 v17[8]; // [rsp+0h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-58h]
  HANDLE EventHandle; // [rsp+80h] [rbp+8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp+10h] BYREF
  char v21; // [rsp+90h] [rbp+18h] BYREF

  RemoteContext = GreGetRemoteContext();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(v1, v0, 9, 17, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
  }
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  gbPowerCalloutsReady = 0;
  _InterlockedOr(v17, 0);
  EnterCrit(0LL, 1LL);
  CleanupPowerRequestList();
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  if ( !gProtocolType )
    UnregisterDeviceClassNotifications();
  EnterCrit(0LL, 1LL);
  InitializePointerDevicesPresenceState(0);
  gbCleanupInitiated = 1;
  gdwHydraHint |= 0x400u;
  gbInSMSCleanup = 0;
  CTouchProcessor::CancelActivePointers(gpTouchProcessor);
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0339B50);
  v3 = (struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C0339AE0;
  v4 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v3);
    v3 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v3 + 24);
    --v4;
  }
  while ( v4 );
  v8 = InteractiveControlManager::s_pInstance;
  if ( InteractiveControlManager::s_pInstance )
  {
    InteractiveControlManager::Deinitialize(InteractiveControlManager::s_pInstance);
    v9 = RegHandle;
    RegHandle = 0LL;
    dword_1C032A2F8 = 0;
    EtwUnregister(v9);
    v10 = qword_1C032A2E0;
    qword_1C032A2E0 = 0LL;
    dword_1C032A2C0 = 0;
    EtwUnregister(v10);
    Win32FreePool(InteractiveControlManager::s_pInstance);
    InteractiveControlManager::s_pInstance = 0LL;
  }
  v11 = InkProcessor::s_pInstance;
  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::~InkProcessor(InkProcessor::s_pInstance);
    Win32FreePool(v11);
    InkProcessor::s_pInstance = 0LL;
  }
  v12 = *(_QWORD *)(gptiCurrent + 616LL);
  Timeout.QuadPart = -6000000000LL;
  while ( v12 )
  {
    v13 = *(_QWORD **)(v12 + 16);
    if ( !v13
      || v13 == gspdeskDisconnect
      && !v13[4]
      && !*(_QWORD *)(*(_QWORD *)(v12 + 56) + 48LL)
      && (unsigned int)NumHandles(v8) <= 1 )
    {
      break;
    }
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    KeWaitForSingleObject(gpevtDesktopDestroyed, WrUserRequest, 0, 0, &Timeout);
    EnterCrit(0LL, 1LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_((_DWORD)v8, v5, 7, 18, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
  }
  gbExitInProgress = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD((_DWORD)v8, v5, v6, v7, BugCheckParameter4, gptiCurrent, *(_DWORD *)(gptiCurrent + 896LL));
  gpqCursor = 0LL;
  ForceCapture(3LL, 0LL);
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
  CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(&v21);
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_(v15, v14, 7, 20, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
  }
  UserSessionSwitchLeaveCrit();
  if ( gSessionId )
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
