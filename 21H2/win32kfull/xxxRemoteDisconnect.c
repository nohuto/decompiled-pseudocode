/*
 * XREFs of xxxRemoteDisconnect @ 0x1C0128460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     xxxSleepThread2 @ 0x1C0058750 (xxxSleepThread2.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C0128830 (xxxRemoteStopScreenUpdates.c)
 *     GreDxgkPreSessionDisconnected @ 0x1C0128B68 (GreDxgkPreSessionDisconnected.c)
 *     RemoveInputDevices @ 0x1C0128BB0 (RemoveInputDevices.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0128C60 (UnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0128D24 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0137000 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     RemoteRedrawScreen @ 0x1C0163584 (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x1C0163A20 (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C0163CF0 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0163F30 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01D78AC (SnapShotDesktopsMonitorsAndWindowsRects.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C021E7B4 (xxxRequestOutOfFullScreenMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteDisconnect()
{
  int v0; // ebp
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 RemoteContext; // r14
  int v5; // r15d
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v14[10]; // [rsp+40h] [rbp-88h] BYREF

  memset(v14, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v14[1]);
  v0 = 0;
  v14[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v14[3]) = 21;
  LOBYTE(v14[6]) = -1;
  Timeout.QuadPart = 0LL;
  RemoteContext = GreGetRemoteContext();
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = 4;
    WPP_RECORDER_SF_(v2, v1, 9, 15, (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
  }
  if ( PsGetCurrentProcess(v2, v1, v3) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType )
  {
    if ( !(unsigned int)UserIsWddmConnectedSession() )
    {
      GreDxgkPreSessionDisconnected(0LL);
      gDxgkInterface[47](0LL);
    }
  }
  else
  {
    while ( WPP_MAIN_CB.Queue.ListEntry.Blink )
      xxxSleepThread2(0, 1u, 0, 0, 0LL);
  }
  if ( gProtocolType || gbFullScreen != 1 || (result = xxxRequestOutOfFullScreenMode(), (int)result >= 0) )
  {
    gdwHydraHint |= 0x10u;
    memset(gstrBaseWinStationName, 0, 0x40uLL);
    if ( gfSessionSwitchBlock )
      return 3221226029LL;
    if ( !gProtocolType && !gbGDIOn )
    {
      v5 = 1;
      PowerOnGdi(v14, 1LL, 4LL);
    }
    SetConsoleSwitchInProgress(1LL);
    if ( !gspdeskDisconnect )
    {
      Timeout.QuadPart = -3000000000LL;
      if ( gdwInAtomicOperation )
      {
        v6 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v6);
      KeWaitForSingleObject(gpEventDiconnectDesktop, WrUserRequest, 0, 0, &Timeout);
      EnterCrit(0LL, 1LL);
    }
    if ( gbSnapShotWindowsAndMonitors )
    {
      if ( *(_DWORD *)*gpDispInfo > 1u )
      {
        v11 = *(_QWORD *)(gptiCurrent + 456LL);
        if ( v11 || (v11 = grpdeskIODefault) != 0 )
        {
          if ( gProtocolType )
          {
            if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
              goto LABEL_17;
            v12 = gRemoteWndsMonitorSnapshotHead;
          }
          else
          {
            v12 = gWndsMonitorSnapshotHead;
          }
          SnapShotDesktopsMonitorsAndWindowsRects(*(_QWORD *)(v11 + 40), v12);
        }
      }
    }
LABEL_17:
    if ( gspdeskDisconnect )
    {
      v7 = xxxRemoteStopScreenUpdates();
      if ( v7 < 0 )
        goto LABEL_59;
      v0 = 1;
      if ( gnShadowers )
        RemoteRedrawScreen();
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        LOBYTE(v8) = gProtocolType == 0;
        GreDxgkPreSessionDisconnected(v8);
        v7 = xxxRemoteSetDisconnectDisplayMode(
               grpdeskRitInput,
               gProtocolType,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v14);
        LOBYTE(v9) = gProtocolType == 0;
        gDxgkInterface[47](v9);
        if ( v7 < 0 )
          goto LABEL_58;
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
        RemoveInputDevices();
      }
      OPMDestroyAllProtectedOutputs();
      SetConnectedState(0LL, 0LL);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)P + 32LL))(P);
      CitSessionConnectChange(0LL, 0LL);
    }
    else
    {
      v7 = -1073741823;
    }
    if ( v7 >= 0 )
    {
      if ( gProtocolType )
        gRemotePreviousMonitorsCount = *(_DWORD *)*gpDispInfo;
      else
        DrvSetGraphicsDevices(L"TSDDD");
      CleanupRemoteHandles(RemoteContext);
LABEL_32:
      SetConsoleSwitchInProgress(0LL);
      if ( v7 < 0 && v5 == 1 )
        PowerOffGdi();
      DispBrokerAsyncSessionSwitched();
      return (unsigned int)v7;
    }
    if ( !v0 )
    {
LABEL_59:
      if ( !gProtocolType )
        CleanupDesktopsMonitorsAndWindowsSnapShot(gWndsMonitorSnapshotHead);
      goto LABEL_32;
    }
LABEL_58:
    RemoteRedrawScreen();
    goto LABEL_59;
  }
  return result;
}
