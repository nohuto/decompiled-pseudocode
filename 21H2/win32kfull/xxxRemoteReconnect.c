/*
 * XREFs of xxxRemoteReconnect @ 0x1C01528E0
 * Callers:
 *     NtUserRemoteReconnect @ 0x1C01528A0 (NtUserRemoteReconnect.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     TransitionCursorSuppressionState @ 0x1C0097DC0 (TransitionCursorSuppressionState.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     SetPointer @ 0x1C00B2D10 (SetPointer.c)
 *     SetMouseTrails @ 0x1C00B537C (SetMouseTrails.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C011E478 (DrvOcclusionStateChangeNotify.c)
 *     InitKeyboard @ 0x1C011F950 (InitKeyboard.c)
 *     RegisterCDROMNotify @ 0x1C0122384 (RegisterCDROMNotify.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C0123460 (xxxRemoteStopScreenUpdates.c)
 *     RemoveInputDevices @ 0x1C0123850 (RemoveInputDevices.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0123918 (UnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01239DC (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C01533F4 (GreMultiUserSetDisplayDriverName.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C01534F8 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     RestoreDesktopsMonitorsAndWindowsRects @ 0x1C0153530 (RestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C015359C (RemoteRedrawScreen.c)
 *     AttachInputDevices @ 0x1C0153768 (AttachInputDevices.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C01537D4 (DrvOpenLocalGraphicsDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C0153958 (DrvCloseRemoteGraphicsDevices.c)
 *     GreDrvDisconnect @ 0x1C0154A58 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0159AD4 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0159AFC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     GreDrvReconnect @ 0x1C02BEC08 (GreDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteReconnect(unsigned __int64 a1)
{
  BOOL v2; // r14d
  void *v3; // r13
  __int64 v4; // r12
  __int64 v5; // rdx
  int v6; // r9d
  __int64 RemoteContext; // r15
  PDEVICE_OBJECT v8; // rcx
  _UNKNOWN **v9; // r8
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 result; // rax
  NTSTATUS Win32kDriverObject; // edi
  unsigned __int128 v18; // kr00_16
  wchar_t *v19; // rax
  __int64 v20; // r8
  BOOL v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r12
  void *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // ebx
  int v35; // r12d
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int HasAnyGraphicsDevice; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // edx
  int v45; // r12d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  unsigned int v50; // ebx
  __int64 v51; // rcx
  unsigned int RemoteDeviceCount; // eax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  bool v56; // zf
  __int64 v57; // rcx
  _UNKNOWN **v58; // r8
  PVOID *Object; // [rsp+20h] [rbp-398h]
  int HandleInformation; // [rsp+28h] [rbp-390h]
  BOOL v61; // [rsp+60h] [rbp-358h]
  int v62; // [rsp+64h] [rbp-354h]
  char v63; // [rsp+68h] [rbp-350h] BYREF
  _BYTE v64[3]; // [rsp+69h] [rbp-34Fh] BYREF
  int v65; // [rsp+6Ch] [rbp-34Ch] BYREF
  unsigned __int16 v66; // [rsp+70h] [rbp-348h]
  int v67; // [rsp+78h] [rbp-340h]
  int v68; // [rsp+7Ch] [rbp-33Ch]
  int v69; // [rsp+80h] [rbp-338h]
  PVOID v70; // [rsp+88h] [rbp-330h] BYREF
  int v71; // [rsp+94h] [rbp-324h]
  int v72; // [rsp+98h] [rbp-320h]
  PVOID v73; // [rsp+A0h] [rbp-318h] BYREF
  unsigned __int64 v74; // [rsp+A8h] [rbp-310h]
  _BYTE v75[328]; // [rsp+B8h] [rbp-300h] BYREF
  _OWORD v76[20]; // [rsp+200h] [rbp-1B8h] BYREF
  _QWORD v77[10]; // [rsp+340h] [rbp-78h] BYREF

  v74 = a1;
  memset(v77, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v77[1]);
  v77[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v77[3]) = 22;
  LOBYTE(v77[6]) = -1;
  v2 = 0;
  v61 = 0;
  v67 = 0;
  v68 = 0;
  v71 = LODWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) + 1;
  v62 = 0;
  v69 = 0;
  v66 = gProtocolType;
  memset(v76, 0, sizeof(v76));
  v65 = 0;
  v3 = 0LL;
  LODWORD(v4) = 0;
  RemoteContext = GreGetRemoteContext();
  v8 = WPP_GLOBAL_Control;
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v9 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      (_DWORD)v9,
      v6,
      4,
      9,
      16,
      (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
  }
  if ( PsGetCurrentProcess(v8, v5) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v10 = (_OWORD *)a1;
  if ( a1 + 320 < a1 || a1 + 320 > MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v11 = v75;
  v12 = 2LL;
  do
  {
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    v11[5] = v10[5];
    v11[6] = v10[6];
    v11 += 8;
    *(v11 - 1) = v10[7];
    v10 += 8;
    --v12;
  }
  while ( v12 );
  *v11 = *v10;
  v11[1] = v10[1];
  v11[2] = v10[2];
  v11[3] = v10[3];
  v13 = v76;
  v14 = v75;
  v15 = 2LL;
  do
  {
    *v13 = *v14;
    v13[1] = v14[1];
    v13[2] = v14[2];
    v13[3] = v14[3];
    v13[4] = v14[4];
    v13[5] = v14[5];
    v13[6] = v14[6];
    v13 += 8;
    *(v13 - 1) = v14[7];
    v14 += 8;
    --v15;
  }
  while ( v15 );
  *v13 = *v14;
  v13[1] = v14[1];
  v13[2] = v14[2];
  v13[3] = v14[3];
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  gpThinWireCache = ThinWireCache;
  result = PopulateUMKMHandlePair(*(_QWORD *)&v76[3], gRemoteMouseChannelHandlePair);
  if ( (int)result >= 0 )
  {
    result = PopulateUMKMHandlePair(*((_QWORD *)&v76[3] + 1), gRemoteKeyboardChannelHandlePair);
    Win32kDriverObject = result;
    if ( (int)result >= 0 )
    {
      gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
      gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
      v18 = v76[2];
      ghRemoteBeepChannel = v18 >> 64;
      ghRemoteVideoChannel = v18;
      ghRemoteThinwireChannel = *(_QWORD *)&v76[4];
      gRemoteClientKeyboardType = *(_QWORD *)((char *)&v76[16] + 12);
      *((_DWORD *)&gRemoteClientKeyboardType + 2) = DWORD1(v76[17]);
      gfEnableWindowsKey = DWORD1(v76[15]);
      gbClientDoubleClickSupport = v76[15];
      v72 = gbRemoteFxSession;
      gbRemoteFxSession = DWORD1(v76[18]);
      *(_DWORD *)(RemoteContext + 64) = DWORD1(v76[18]);
      gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
      gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
      gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
      *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
      *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
      *(_OWORD *)&gstrBaseWinStationName = v76[5];
      *((_OWORD *)&gstrBaseWinStationName + 1) = v76[6];
      *((_OWORD *)&gstrBaseWinStationName + 2) = v76[7];
      *((_OWORD *)&gstrBaseWinStationName + 3) = v76[8];
      gWinStationInfo = *(_OWORD *)((char *)&v76[12] + 10);
      *((_WORD *)&gWinStationInfo + 8) = WORD5(v76[13]);
      *(_OWORD *)((char *)&gWinStationInfo + 20) = *(_OWORD *)((char *)&v76[13] + 12);
      *((_DWORD *)&gWinStationInfo + 9) = HIDWORD(v76[14]);
      v19 = wcschr(gstrBaseWinStationName, 0x23u);
      v21 = 0;
      if ( v19 )
        *v19 = 0;
      if ( gProtocolType )
      {
        HandleInformation = 0;
        Object = (PVOID *)&v65;
        FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
        v22 = gpsi;
        if ( !v65 )
        {
          *(_DWORD *)(gpsi + 2236LL) &= ~4u;
LABEL_24:
          v23 = *(_QWORD *)(RemoteContext + 40);
          if ( v23 )
          {
            v24 = -1LL;
            do
              ++v24;
            while ( *(_WORD *)(v23 + 2 * v24) );
            v4 = v24 + 1;
            v25 = (void *)Win32AllocPoolWithQuotaZInit(2 * v4, 2020897621LL);
            v3 = v25;
            if ( !v25 )
            {
              Win32kDriverObject = -1073741801;
              v35 = 0;
              goto LABEL_83;
            }
            memmove(v25, *(const void **)(RemoteContext + 40), 2 * v4);
            v21 = 0;
          }
          v26 = gVideoFileObject;
          if ( !gVideoFileObject && ghRemoteVideoChannel )
          {
            v73 = 0LL;
            Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v73, 0LL);
            if ( Win32kDriverObject >= 0 )
            {
              gVideoFileObject = v73;
              IoGetRelatedDeviceObject((PFILE_OBJECT)v73);
              v70 = 0LL;
              Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v70, 0LL);
              gThinwireFileObject = v70;
              v21 = 0;
              if ( Win32kDriverObject >= 0
                && !(unsigned int)GreMultiUserInitSession(
                                    RemoteContext,
                                    ghRemoteThinwireChannel,
                                    gpThinWireCache,
                                    gRemoteNumMonitors,
                                    gRemotePrimaryMonitor,
                                    gVideoFileObject,
                                    gThinwireFileObject,
                                    8,
                                    &v76[9],
                                    19,
                                    gRemoteDisplayDeviceName) )
              {
                Win32kDriverObject = -1073741823;
              }
            }
          }
          else if ( !ghRemoteVideoChannel
                 && !(unsigned int)GreMultiUserInitSession(
                                     RemoteContext,
                                     ghRemoteThinwireChannel,
                                     gpThinWireCache,
                                     gRemoteNumMonitors,
                                     gRemotePrimaryMonitor,
                                     gVideoFileObject,
                                     gThinwireFileObject,
                                     8,
                                     &v76[9],
                                     19,
                                     gRemoteDisplayDeviceName) )
          {
            Win32kDriverObject = -1073741823;
          }
          if ( Win32kDriverObject < 0 )
            goto LABEL_81;
          v27 = ghRemoteBeepChannel;
          if ( ghRemoteBeepChannel )
          {
            v70 = 0LL;
            Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &v70, 0LL);
            gpRemoteBeepDevice = v70;
            v21 = 0;
          }
          if ( Win32kDriverObject < 0 )
            goto LABEL_81;
          if ( gnShadowers )
            xxxRemoteStopScreenUpdates(v27, v26, v20);
          if ( WORD4(v76[16]) != gPreviousProtocolType && gPreviousProtocolType )
          {
            if ( v3 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, (unsigned int)(v4 - 1), v3) )
              goto LABEL_111;
            Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                                   grpdeskRitInput,
                                   gProtocolType,
                                   (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v77);
            if ( Win32kDriverObject < 0 )
            {
LABEL_81:
              v35 = v62;
LABEL_82:
              v2 = v61;
LABEL_83:
              SetMouseTrails(v71);
              v56 = Win32kDriverObject == 0;
              if ( Win32kDriverObject < 0 )
              {
                if ( v2 )
                  GreDrvDisconnect(RemoteContext);
                v56 = Win32kDriverObject == 0;
              }
              if ( v56 && !gProtocolType )
                RtlSetActiveConsoleId(gSessionId);
              if ( !gProtocolType )
                DrvNotifySessionStateChange(4LL);
              if ( Win32kDriverObject < 0 )
                CleanupRemoteHandles(RemoteContext);
              SetConsoleSwitchInProgress(0LL);
              LOBYTE(v57) = 1;
              DxgkEngNotifyDisplayChange(v57);
              if ( Win32kDriverObject < 0 )
              {
                gbRemoteFxSession = v72;
                *(_DWORD *)(RemoteContext + 64) = v72;
                if ( v67 )
                  UnregisterDeviceClassNotifications();
                if ( v68 )
                  DrvCloseGraphicsDevices(1LL);
                if ( v69 )
                  SetProtocolType(v66);
                if ( v35 )
                  DrvSetGraphicsDevices(&v76[9]);
              }
              if ( v3 )
                Win32FreePool(v3);
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
            if ( *(_DWORD *)(v74 + 288) )
              DrvCloseRemoteGraphicsDevices(v29, v28);
            if ( v3 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, &v76[9]) )
            {
LABEL_111:
              Win32kDriverObject = -1073741823;
              goto LABEL_81;
            }
          }
          SetProtocolType(WORD4(v76[16]));
          if ( !gProtocolType )
            DrvNotifySessionStateChange(3LL);
          v69 = 1;
          if ( (unsigned int)UserRemoteConnectedSessionUsingXddm(v31, v30) )
          {
            if ( gProtocolType == gPreviousProtocolType )
            {
              Win32kDriverObject = GreDrvReconnect(RemoteContext);
              LOBYTE(v21) = Win32kDriverObject >= 0;
              v61 = v21;
              v34 = 0;
            }
            else
            {
              v34 = 1;
              Win32kDriverObject = GreDrvConnect(RemoteContext);
              v61 = Win32kDriverObject >= 0;
            }
          }
          else
          {
            v34 = 1;
            v35 = 0;
            if ( !gProtocolType )
            {
              Win32kDriverObject = DrvOpenLocalGraphicsDevices(v33, v32);
              if ( Win32kDriverObject < 0 )
                goto LABEL_82;
              v68 = 1;
            }
          }
          v35 = 1;
          v62 = 1;
          if ( !(unsigned int)DrvSetGraphicsDevices(&v76[9]) )
          {
            if ( gnShadowers )
              RemoteRedrawScreen(0LL);
            Win32kDriverObject = -1073741823;
            goto LABEL_82;
          }
          DispBrokerAsyncSessionSwitched();
          v37 = 0LL;
          if ( DWORD2(v76[17])
            || (v42 = gPreviousProtocolType, gProtocolType != gPreviousProtocolType)
            || HIDWORD(v76[17]) )
          {
            if ( !(unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(gpDispInfo + 16LL))
              || (HasAnyGraphicsDevice = DrvSessionHasAnyGraphicsDevice(v39, v38, v40, 0LL, Object, HandleInformation),
                  v37 = 0LL,
                  HasAnyGraphicsDevice) )
            {
              if ( HIDWORD(v76[17]) || (v43 = 2191LL, !gProtocolType) )
                v43 = 2447LL;
              LOBYTE(HandleInformation) = 0;
              Win32kDriverObject = xxxUserSetDisplayConfig(
                                     0LL,
                                     0LL,
                                     v43,
                                     2LL,
                                     gspdeskShouldBeForeground,
                                     HandleInformation,
                                     0LL,
                                     0LL,
                                     0LL,
                                     v77,
                                     0LL);
              v37 = 0LL;
              if ( Win32kDriverObject < 0 )
              {
                LOBYTE(v44) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                v58 = &WPP_RECORDER_INITIALIZED;
                if ( (_BYTE)v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v58) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v44,
                    (_DWORD)v58,
                    17,
                    4,
                    9,
                    17,
                    (__int64)&WPP_03c1e4e6de07312e2b7c2fd77d6d27b0_Traceguids);
                }
                goto LABEL_82;
              }
              v45 = 1;
LABEL_64:
              v46 = gProtocolType;
              if ( gProtocolType )
              {
                if ( v34
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
                AttachInputDevices(0LL, v46, v36, v37);
              }
              else
              {
                if ( gPreviousProtocolType )
                {
                  RemoveInputDevices();
                  v37 = 0LL;
                }
                if ( !gpWin32kDriverObject )
                  Win32kDriverObject = GetWin32kDriverObject(v42, v46, v36, 0LL);
                AttachInputDevices(1LL, v46, v36, v37);
                (**(void (__fastcall ***)(PVOID))qword_1C0335C70)(qword_1C0335C70);
                LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v63);
                RegisterCDROMNotify();
                v67 = 1;
                LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v63);
              }
              RemoteRedrawScreen(v47);
              if ( v45 && !gProtocolType && gbSnapShotWindowsAndMonitors && grpdeskIODefault )
              {
                AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v64);
                RestoreDesktopsMonitorsAndWindowsRects(*(_QWORD *)(grpdeskIODefault + 40LL), gWndsMonitorSnapshotHead);
                AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v64, v48, v49);
              }
              InitKeyboard();
              UpdateKeyLights(0LL);
              SetPointer(1LL);
              v50 = gCursorSuppressionState;
              gCursorSuppressionState = 9;
              TransitionCursorSuppressionState(0xAu, 0);
              if ( ((v50 - 1) & 0xFFFFFFFB) != 0 )
                v50 = 2;
              TransitionCursorSuppressionState(v50, 0);
              SetConnectedState(1LL, gbConnectCompleted);
              if ( gProtocolType )
              {
                FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
                v51 = gpsi;
                if ( !v65 )
                {
                  *(_DWORD *)(gpsi + 2236LL) &= ~4u;
                  goto LABEL_80;
                }
              }
              else
              {
                v51 = gpsi;
              }
              *(_DWORD *)(v51 + 2236) |= 4u;
LABEL_80:
              RemoteDeviceCount = DrvGetRemoteDeviceCount();
              v53 = gProtocolType;
              LOBYTE(v53) = gProtocolType == 0;
              gDxgkInterface[48](v53, RemoteDeviceCount);
              LOBYTE(v54) = gProtocolType == 0;
              LOBYTE(v55) = 1;
              CitSessionConnectChange(v55, v54);
              goto LABEL_81;
            }
            Win32kDriverObject = 0;
          }
          v45 = 0;
          goto LABEL_64;
        }
      }
      else
      {
        v22 = gpsi;
      }
      *(_DWORD *)(v22 + 2236) |= 4u;
      goto LABEL_24;
    }
  }
  return result;
}
