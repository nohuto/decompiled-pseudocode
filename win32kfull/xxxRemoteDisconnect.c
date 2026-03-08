/*
 * XREFs of xxxRemoteDisconnect @ 0x1C00F7034
 * Callers:
 *     NtUserRemoteDisconnect @ 0x1C00F6DD0 (NtUserRemoteDisconnect.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoveInputDevices @ 0x1C00F6800 (RemoveInputDevices.c)
 *     UnregisterDeviceClassNotifications @ 0x1C00F68FC (UnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F69C0 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     GreDxgkPreSessionDisconnected @ 0x1C00F6D80 (GreDxgkPreSessionDisconnected.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00F6E08 (xxxRemoteStopScreenUpdates.c)
 *     RemoteRedrawScreen @ 0x1C0126610 (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x1C0128FB4 (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C0129280 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C01295B0 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteDisconnect()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 RemoteContext; // rbp
  __int64 v3; // r8
  int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 DxgkWin32kInterface; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v19[8]; // [rsp+50h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+58h] [rbp-70h] BYREF
  int v21; // [rsp+68h] [rbp-60h]
  char v22; // [rsp+80h] [rbp-48h]
  __int64 v23; // [rsp+90h] [rbp-38h]

  memset_0(v19, 0, 0x48uLL);
  EtwActivityIdControl(3u, &ActivityId);
  v23 = MEMORY[0xFFFFF78000000014];
  v21 = 21;
  v22 = -1;
  Timeout.QuadPart = 0LL;
  RemoteContext = GreGetRemoteContext();
  v4 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v0) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v0) = 0;
  }
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v3,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      9,
      15,
      (__int64)&WPP_b175c1f43ecf3cf0d465f249db37b465_Traceguids);
  if ( PsGetCurrentProcess(v1, v0, v3) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType && !(unsigned int)UserIsWddmConnectedSession() )
  {
    GreDxgkPreSessionDisconnected(0);
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v16, v15);
    (*(void (__fastcall **)(_QWORD))(DxgkWin32kInterface + 376))(0LL);
  }
  gdwHydraHint |= 0x10u;
  memset_0(gstrBaseWinStationName, 0, 0x40uLL);
  if ( gfSessionSwitchBlock )
    return 3221226029LL;
  if ( !gProtocolType && !gbGDIOn )
  {
    v4 = 1;
    PowerOnGdi(v19, 1LL, 4LL);
  }
  SetConsoleSwitchInProgress(1LL);
  if ( gspdeskDisconnect
    || (Timeout.QuadPart = -3000000000LL,
        UserSessionSwitchLeaveCrit(v6),
        KeWaitForSingleObject(gpEventDiconnectDesktop, WrUserRequest, 0, 0, &Timeout),
        EnterCrit(1LL, 0LL),
        gspdeskDisconnect) )
  {
    v8 = xxxRemoteStopScreenUpdates(v6, v5, v7);
    if ( v8 >= 0 )
    {
      if ( gnShadowers )
        RemoteRedrawScreen();
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        GreDxgkPreSessionDisconnected(gProtocolType == 0);
        v8 = xxxRemoteSetDisconnectDisplayMode(
               grpdeskRitInput,
               gProtocolType,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v19);
        v11 = DxDdGetDxgkWin32kInterface(v10, v9);
        LOBYTE(v12) = gProtocolType == 0;
        (*(void (__fastcall **)(__int64))(v11 + 376))(v12);
        if ( v8 < 0 )
        {
          RemoteRedrawScreen();
          goto LABEL_28;
        }
        DrvCloseGraphicsDevices(gProtocolType == 0);
      }
      else
      {
        GreDrvDisconnect(RemoteContext);
      }
      gPreviousProtocolType = gProtocolType;
      if ( !gProtocolType )
      {
        UnregisterDeviceClassNotifications();
        RemoveInputDevices(v13);
      }
      OPMDestroyAllProtectedOutputs();
      SetConnectedState(0LL, 0LL);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 32LL))(P);
      CitSessionConnectChange(0LL, 0LL);
      if ( gProtocolType )
        gRemotePreviousMonitorsCount = *(_DWORD *)*gpDispInfo;
      else
        DrvSetGraphicsDevices(L"TSDDD");
      CleanupRemoteHandles(RemoteContext);
    }
  }
  else
  {
    v8 = -1073741823;
  }
LABEL_28:
  SetConsoleSwitchInProgress(0LL);
  if ( v8 < 0 && v4 == 1 )
    PowerOffGdi();
  DispBrokerAsyncSessionSwitched();
  return (unsigned int)v8;
}
