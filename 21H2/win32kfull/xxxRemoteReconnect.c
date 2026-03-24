/*
 * XREFs of xxxRemoteReconnect @ 0x1C0162570
 * Callers:
 *     <none>
 * Callees:
 *     InitKeyboard @ 0x1C0008FC0 (InitKeyboard.c)
 *     TransitionCursorSuppressionState @ 0x1C0028D10 (TransitionCursorSuppressionState.c)
 *     SetMouseTrails @ 0x1C0029734 (SetMouseTrails.c)
 *     SetPointer @ 0x1C002A4C0 (SetPointer.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C002A878 (DrvOcclusionStateChangeNotify.c)
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C0128830 (xxxRemoteStopScreenUpdates.c)
 *     RemoveInputDevices @ 0x1C0128BB0 (RemoveInputDevices.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0128C60 (UnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0128D24 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0136788 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C01367B0 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     RegisterCDROMNotify @ 0x1C0136CA8 (RegisterCDROMNotify.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C01633B0 (GreMultiUserSetDisplayDriverName.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C01634E0 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0163520 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0163584 (RemoteRedrawScreen.c)
 *     AttachInputDevices @ 0x1C0163710 (AttachInputDevices.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C016377C (DrvOpenLocalGraphicsDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C0163914 (DrvCloseRemoteGraphicsDevices.c)
 *     GreDrvDisconnect @ 0x1C0163A20 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     GreDrvReconnect @ 0x1C02C0268 (GreDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteReconnect(unsigned __int64 a1)
{
  BOOL v2; // ebx
  NTSTATUS Win32kDriverObject; // edi
  BOOL v4; // esi
  void *v5; // r12
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 RemoteContext; // r14
  _UNKNOWN **v10; // rcx
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // rdx
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  __int64 v17; // rdx
  unsigned __int128 v18; // kr00_16
  wchar_t *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  void *v23; // rax
  int v24; // r15d
  int v25; // r13d
  __int16 v26; // dx
  int v27; // ecx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  LeaveEnterCrit *v46; // rcx
  __int64 v47; // rcx
  unsigned int RemoteDeviceCount; // eax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  PVOID *Object; // [rsp+20h] [rbp-388h]
  PVOID *Objecta; // [rsp+20h] [rbp-388h]
  int HandleInformation; // [rsp+28h] [rbp-380h]
  BOOL v55; // [rsp+60h] [rbp-348h]
  int v56; // [rsp+6Ch] [rbp-33Ch] BYREF
  _BYTE v57[2]; // [rsp+70h] [rbp-338h] BYREF
  unsigned __int16 v58; // [rsp+72h] [rbp-336h]
  int v59; // [rsp+78h] [rbp-330h]
  int v60; // [rsp+7Ch] [rbp-32Ch]
  int v61; // [rsp+84h] [rbp-324h]
  int v62; // [rsp+88h] [rbp-320h]
  PVOID v63; // [rsp+90h] [rbp-318h] BYREF
  PVOID v64; // [rsp+98h] [rbp-310h] BYREF
  PVOID v65; // [rsp+A0h] [rbp-308h] BYREF
  _BYTE v66[320]; // [rsp+B0h] [rbp-2F8h] BYREF
  _OWORD v67[20]; // [rsp+1F0h] [rbp-1B8h] BYREF
  _QWORD v68[10]; // [rsp+330h] [rbp-78h] BYREF

  memset(v68, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v68[1]);
  v68[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v68[3]) = 22;
  LOBYTE(v68[6]) = -1;
  v2 = 0;
  Win32kDriverObject = 0;
  v4 = 0;
  v55 = 0;
  v59 = 0;
  v60 = 0;
  v61 = WPP_MAIN_CB.Dpc.TargetInfoAsUlong + 1;
  v58 = gProtocolType;
  memset(v67, 0, sizeof(v67));
  v56 = 0;
  v5 = 0LL;
  LODWORD(v6) = 0;
  RemoteContext = GreGetRemoteContext();
  v10 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v7,
      9,
      16,
      (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
    v2 = 0;
  }
  if ( PsGetCurrentProcess(v10, v7, v8) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v12 = (_OWORD *)a1;
  if ( a1 + 320 < a1 || a1 + 320 > MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  v13 = v66;
  v14 = 2LL;
  do
  {
    *v13 = *v12;
    v13[1] = v12[1];
    v13[2] = v12[2];
    v13[3] = v12[3];
    v13[4] = v12[4];
    v13[5] = v12[5];
    v13[6] = v12[6];
    v13 += 8;
    *(v13 - 1) = v12[7];
    v12 += 8;
    --v14;
  }
  while ( v14 );
  *v13 = *v12;
  v13[1] = v12[1];
  v13[2] = v12[2];
  v13[3] = v12[3];
  v15 = v67;
  v16 = v66;
  v17 = 2LL;
  do
  {
    *v15 = *v16;
    v15[1] = v16[1];
    v15[2] = v16[2];
    v15[3] = v16[3];
    v15[4] = v16[4];
    v15[5] = v16[5];
    v15[6] = v16[6];
    v15 += 8;
    *(v15 - 1) = v16[7];
    v16 += 8;
    --v17;
  }
  while ( v17 );
  *v15 = *v16;
  v15[1] = v16[1];
  v15[2] = v16[2];
  v15[3] = v16[3];
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  gpThinWireCache = ThinWireCache;
  ghRemoteMouseChannel = *(_QWORD *)&v67[3];
  gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
  gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
  v18 = v67[2];
  ghRemoteBeepChannel = v18 >> 64;
  ghRemoteVideoChannel = v18;
  ghRemoteKeyboardChannel = *((_QWORD *)&v67[3] + 1);
  ghRemoteThinwireChannel = *(_QWORD *)&v67[4];
  gRemoteClientKeyboardType = *(_QWORD *)((char *)&v67[16] + 12);
  *((_DWORD *)&gRemoteClientKeyboardType + 2) = DWORD1(v67[17]);
  gfEnableWindowsKey = DWORD1(v67[15]);
  gbClientDoubleClickSupport = v67[15];
  v62 = gbRemoteFxSession;
  gbRemoteFxSession = DWORD1(v67[18]);
  *(_DWORD *)(RemoteContext + 64) = DWORD1(v67[18]);
  gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
  gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
  gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
  *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
  *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
  *(_OWORD *)&gstrBaseWinStationName = v67[5];
  *((_OWORD *)&gstrBaseWinStationName + 1) = v67[6];
  *((_OWORD *)&gstrBaseWinStationName + 2) = v67[7];
  *((_OWORD *)&gstrBaseWinStationName + 3) = v67[8];
  gWinStationInfo = *(_OWORD *)((char *)&v67[12] + 10);
  *((_WORD *)&gWinStationInfo + 8) = WORD5(v67[13]);
  *(_OWORD *)((char *)&gWinStationInfo + 20) = *(_OWORD *)((char *)&v67[13] + 12);
  *((_DWORD *)&gWinStationInfo + 9) = HIDWORD(v67[14]);
  v19 = wcschr(gstrBaseWinStationName, 0x23u);
  if ( v19 )
    *v19 = 0;
  if ( gProtocolType )
  {
    HandleInformation = 0;
    Object = (PVOID *)&v56;
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
    v20 = gpsi;
    if ( !v56 )
    {
      *(_DWORD *)(gpsi + 2236LL) &= ~4u;
      goto LABEL_21;
    }
  }
  else
  {
    v20 = gpsi;
  }
  *(_DWORD *)(v20 + 2236) |= 4u;
LABEL_21:
  v21 = *(_QWORD *)(RemoteContext + 40);
  if ( !v21 )
    goto LABEL_27;
  v22 = -1LL;
  do
    ++v22;
  while ( *(_WORD *)(v21 + 2 * v22) );
  v6 = v22 + 1;
  v23 = (void *)Win32AllocPoolWithQuota(2 * v6, 2020897621LL);
  v5 = v23;
  if ( v23 )
  {
    memmove(v23, *(const void **)(RemoteContext + 40), 2 * v6);
    v2 = 0;
LABEL_27:
    v26 = gVideoFileObject;
    if ( gVideoFileObject || !ghRemoteVideoChannel )
    {
      if ( !ghRemoteVideoChannel )
      {
        LODWORD(Object) = gRemotePrimaryMonitor;
        if ( !(unsigned int)GreMultiUserInitSession(
                              RemoteContext,
                              ghRemoteThinwireChannel,
                              gpThinWireCache,
                              gRemoteNumMonitors,
                              Object,
                              gVideoFileObject,
                              gThinwireFileObject,
                              8,
                              &v67[9],
                              19,
                              gRemoteDisplayDeviceName) )
          Win32kDriverObject = -1073741823;
      }
    }
    else
    {
      v63 = 0LL;
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v63, 0LL);
      if ( Win32kDriverObject >= 0 )
      {
        gVideoFileObject = v63;
        IoGetRelatedDeviceObject((PFILE_OBJECT)v63);
        v64 = 0LL;
        Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v64, 0LL);
        gThinwireFileObject = v64;
        v2 = 0;
        if ( Win32kDriverObject >= 0 )
        {
          LODWORD(Objecta) = gRemotePrimaryMonitor;
          if ( !(unsigned int)GreMultiUserInitSession(
                                RemoteContext,
                                ghRemoteThinwireChannel,
                                gpThinWireCache,
                                gRemoteNumMonitors,
                                Objecta,
                                gVideoFileObject,
                                gThinwireFileObject,
                                8,
                                &v67[9],
                                19,
                                gRemoteDisplayDeviceName) )
            Win32kDriverObject = -1073741823;
        }
      }
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_47;
    v27 = ghRemoteBeepChannel;
    if ( ghRemoteBeepChannel )
    {
      v65 = 0LL;
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &v65, 0LL);
      gpRemoteBeepDevice = v65;
      v2 = 0;
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_47;
    if ( gnShadowers )
      xxxRemoteStopScreenUpdates(v27, v26);
    if ( WORD4(v67[16]) != gPreviousProtocolType && gPreviousProtocolType )
    {
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, (unsigned int)(v6 - 1), v5) )
        goto LABEL_46;
      Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                             grpdeskRitInput,
                             gProtocolType,
                             (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v68);
      if ( Win32kDriverObject < 0 )
        goto LABEL_47;
      if ( *(_DWORD *)(a1 + 288) )
        DrvCloseRemoteGraphicsDevices(v31, v30);
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, &v67[9]) )
      {
LABEL_46:
        Win32kDriverObject = -1073741823;
LABEL_47:
        v24 = 0;
        v25 = 0;
LABEL_48:
        v4 = v55;
        goto LABEL_49;
      }
    }
    SetProtocolType(WORD4(v67[16]));
    if ( !gProtocolType )
      DrvNotifySessionStateChange(3LL);
    v25 = 1;
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm(v33, v32) )
    {
      if ( gProtocolType == gPreviousProtocolType )
      {
        Win32kDriverObject = GreDrvReconnect(RemoteContext);
        LOBYTE(v2) = Win32kDriverObject >= 0;
        v55 = v2;
        v36 = 0;
      }
      else
      {
        v36 = 1;
        Win32kDriverObject = GreDrvConnect(RemoteContext);
        v55 = Win32kDriverObject >= 0;
      }
    }
    else
    {
      v36 = 1;
      v24 = 0;
      if ( !gProtocolType )
      {
        Win32kDriverObject = DrvOpenLocalGraphicsDevices(v35, v34);
        if ( Win32kDriverObject < 0 )
          goto LABEL_48;
        v60 = 1;
      }
    }
    v24 = 1;
    if ( !(unsigned int)DrvSetGraphicsDevices(&v67[9]) )
    {
      if ( gnShadowers )
        RemoteRedrawScreen(0LL, v37);
      Win32kDriverObject = -1073741823;
      goto LABEL_48;
    }
    DispBrokerAsyncSessionSwitched();
    if ( DWORD2(v67[17]) || (v38 = gPreviousProtocolType, gProtocolType != gPreviousProtocolType) || HIDWORD(v67[17]) )
    {
      Win32kDriverObject = 0;
      if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(gpDispInfo + 16LL))
        || (unsigned int)DrvSessionHasAnyGraphicsDevice(v40, v39) )
      {
        if ( HIDWORD(v67[17]) || (v41 = 2191LL, !gProtocolType) )
          v41 = 2447LL;
        LOBYTE(HandleInformation) = 0;
        Win32kDriverObject = xxxUserSetDisplayConfig(
                               0LL,
                               0LL,
                               v41,
                               2LL,
                               gspdeskShouldBeForeground,
                               HandleInformation,
                               0LL,
                               0LL,
                               0LL,
                               v68);
        if ( Win32kDriverObject < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v42) = 4;
            WPP_RECORDER_SF_(
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              v42,
              9,
              17,
              (__int64)&WPP_a65f4517be503488af1f6543f5ef864f_Traceguids);
          }
          goto LABEL_48;
        }
      }
      else
      {
        v24 = 0;
      }
    }
    else
    {
      v24 = 0;
    }
    v43 = gProtocolType;
    if ( gProtocolType )
    {
      if ( v36
        && !(unsigned int)DrvEscapeRemoteDrivers(
                            *(_QWORD *)(gpDispInfo + 16LL),
                            gProtocolType,
                            *(_QWORD *)(RemoteContext + 40),
                            2LL,
                            gptmrWD,
                            8) )
      {
        Win32kDriverObject = -1073741823;
      }
      AttachInputDevices(0LL);
    }
    else
    {
      if ( gPreviousProtocolType )
        RemoveInputDevices();
      if ( !gpWin32kDriverObject )
        Win32kDriverObject = GetWin32kDriverObject(v38, v43);
      AttachInputDevices(1LL);
      (**(void (__fastcall ***)(PVOID))P)(P);
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v57);
      RegisterCDROMNotify();
      v59 = 1;
      LeaveEnterCrit::~LeaveEnterCrit(v46);
    }
    RemoteRedrawScreen(v45, v44);
    if ( v24 && !gProtocolType && gbSnapShotWindowsAndMonitors && grpdeskIODefault )
      xxxRestoreDesktopsMonitorsAndWindowsRects(*(_QWORD *)(grpdeskIODefault + 40LL), gWndsMonitorSnapshotHead);
    InitKeyboard();
    UpdateKeyLights(0LL);
    SetPointer(1LL);
    if ( !gProtocolType && !gCursorSuppressionState )
    {
      gCursorSuppressionState = 9;
      TransitionCursorSuppressionState(0xAu, 0);
      TransitionCursorSuppressionState(2u, 0);
    }
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2u, 0);
    SetConnectedState(1LL, gbConnectCompleted);
    if ( gProtocolType )
    {
      FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
      v47 = gpsi;
      if ( !v56 )
      {
        *(_DWORD *)(gpsi + 2236LL) &= ~4u;
LABEL_135:
        RemoteDeviceCount = DrvGetRemoteDeviceCount();
        LOBYTE(v49) = gProtocolType == 0;
        ((void (__fastcall *)(__int64, _QWORD))gDxgkInterface[48])(v49, RemoteDeviceCount);
        LOBYTE(v50) = gProtocolType == 0;
        LOBYTE(v51) = 1;
        CitSessionConnectChange(v51, v50);
        v24 = 1;
        goto LABEL_48;
      }
    }
    else
    {
      v47 = gpsi;
    }
    *(_DWORD *)(v47 + 2236) |= 4u;
    goto LABEL_135;
  }
  Win32kDriverObject = -1073741801;
  v24 = 0;
  v25 = 0;
LABEL_49:
  SetMouseTrails(v61);
  v28 = Win32kDriverObject == 0;
  if ( Win32kDriverObject < 0 )
  {
    if ( v4 )
      GreDrvDisconnect(RemoteContext);
    v28 = Win32kDriverObject == 0;
  }
  if ( v28 && !gProtocolType )
    RtlSetActiveConsoleId((unsigned int)gSessionId);
  if ( !gProtocolType )
    DrvNotifySessionStateChange(4LL);
  if ( Win32kDriverObject < 0 )
    CleanupRemoteHandles(RemoteContext);
  SetConsoleSwitchInProgress(0LL);
  LOBYTE(v29) = 1;
  DxgkEngNotifyDisplayChange(v29);
  if ( Win32kDriverObject < 0 )
  {
    gbRemoteFxSession = v62;
    *(_DWORD *)(RemoteContext + 64) = v62;
    if ( v59 )
      UnregisterDeviceClassNotifications();
    if ( v60 )
      DrvCloseGraphicsDevices(1LL);
    if ( v25 )
      SetProtocolType(v58);
    if ( v24 )
      DrvSetGraphicsDevices(&v67[9]);
  }
  if ( v5 )
    Win32FreePool(v5);
  if ( !Win32kDriverObject )
  {
    if ( gProtocolType )
      DrvEscapeRemoteDrivers(
        *(_QWORD *)(gpDispInfo + 16LL),
        gProtocolType,
        *(_QWORD *)(RemoteContext + 40),
        6LL,
        0LL,
        0);
  }
  DrvOcclusionStateChangeNotify();
  DispBrokerAsyncSessionSwitched();
  return (unsigned int)Win32kDriverObject;
}
