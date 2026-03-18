/*
 * XREFs of xxxRemoteDisconnect @ 0x1C0123098
 * Callers:
 *     NtUserRemoteDisconnect @ 0x1C0123060 (NtUserRemoteDisconnect.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0122740 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C0123460 (xxxRemoteStopScreenUpdates.c)
 *     GreDxgkPreSessionDisconnected @ 0x1C0123804 (GreDxgkPreSessionDisconnected.c)
 *     RemoveInputDevices @ 0x1C0123850 (RemoveInputDevices.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0123918 (UnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01239DC (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     RemoteRedrawScreen @ 0x1C015359C (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x1C0154A58 (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C0154D30 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0154F60 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01D2FA8 (SnapShotDesktopsMonitorsAndWindowsRects.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteDisconnect()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 RemoteContext; // rbp
  int v3; // r8d
  int v4; // r14d
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v13[10]; // [rsp+50h] [rbp-78h] BYREF

  memset(v13, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v13[1]);
  v13[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v13[3]) = 21;
  LOBYTE(v13[6]) = -1;
  Timeout.QuadPart = 0LL;
  RemoteContext = GreGetRemoteContext();
  v4 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v0) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v0) = 0;
  }
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v3,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      9,
      15,
      (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
  }
  if ( PsGetCurrentProcess(v1, v0) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType && !(unsigned int)UserIsWddmConnectedSession() )
  {
    GreDxgkPreSessionDisconnected(0LL);
    ((void (__fastcall *)(_QWORD))gDxgkInterface[47])(0LL);
  }
  gdwHydraHint |= 0x10u;
  memset(gstrBaseWinStationName, 0, 0x40uLL);
  if ( gfSessionSwitchBlock )
    return 3221226029LL;
  if ( !gProtocolType && !gbGDIOn )
  {
    v4 = 1;
    PowerOnGdi(v13, 1LL, 4LL);
  }
  SetConsoleSwitchInProgress(1LL);
  if ( !gspdeskDisconnect )
  {
    Timeout.QuadPart = -3000000000LL;
    UserSessionSwitchLeaveCrit(v5);
    KeWaitForSingleObject(gpEventDiconnectDesktop, WrUserRequest, 0, 0, &Timeout);
    EnterCrit(1LL, 0LL);
  }
  if ( gbSnapShotWindowsAndMonitors )
  {
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v10 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( v10 || (v10 = grpdeskIODefault) != 0 )
      {
        if ( gProtocolType )
        {
          if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
            goto LABEL_19;
          v11 = gRemoteWndsMonitorSnapshotHead;
        }
        else
        {
          v11 = gWndsMonitorSnapshotHead;
        }
        SnapShotDesktopsMonitorsAndWindowsRects(*(_QWORD *)(v10 + 40), v11);
      }
    }
  }
LABEL_19:
  if ( !gspdeskDisconnect )
  {
    v6 = -1073741823;
LABEL_52:
    if ( !gProtocolType )
      CleanupDesktopsMonitorsAndWindowsSnapShot(gWndsMonitorSnapshotHead);
    goto LABEL_32;
  }
  v6 = xxxRemoteStopScreenUpdates();
  if ( v6 < 0 )
    goto LABEL_52;
  if ( gnShadowers )
    RemoteRedrawScreen();
  if ( !(unsigned int)UserIsWddmConnectedSession() )
  {
    GreDrvDisconnect(RemoteContext);
    goto LABEL_26;
  }
  LOBYTE(v7) = gProtocolType == 0;
  GreDxgkPreSessionDisconnected(v7);
  v6 = xxxRemoteSetDisconnectDisplayMode(grpdeskRitInput, gProtocolType, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v13);
  LOBYTE(v8) = gProtocolType == 0;
  ((void (__fastcall *)(__int64))gDxgkInterface[47])(v8);
  if ( v6 < 0 )
  {
    RemoteRedrawScreen();
    goto LABEL_52;
  }
  DrvCloseGraphicsDevices(gProtocolType == 0);
LABEL_26:
  gPreviousProtocolType = gProtocolType;
  if ( !gProtocolType )
  {
    UnregisterDeviceClassNotifications();
    RemoveInputDevices();
  }
  OPMDestroyAllProtectedOutputs();
  SetConnectedState(0LL, 0LL);
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)qword_1C0335C70 + 32LL))(qword_1C0335C70);
  CitSessionConnectChange(0LL, 0LL);
  if ( gProtocolType )
    gRemotePreviousMonitorsCount = *(_DWORD *)*gpDispInfo;
  else
    DrvSetGraphicsDevices(L"TSDDD");
  CleanupRemoteHandles(RemoteContext);
LABEL_32:
  SetConsoleSwitchInProgress(0LL);
  if ( v6 < 0 && v4 == 1 )
    PowerOffGdi();
  DispBrokerAsyncSessionSwitched();
  return (unsigned int)v6;
}
