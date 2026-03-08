/*
 * XREFs of xxxRemoteReconnect @ 0x1C01267DC
 * Callers:
 *     NtUserRemoteReconnect @ 0x1C0126440 (NtUserRemoteReconnect.c)
 * Callees:
 *     DrvOcclusionStateChangeNotify @ 0x1C0020148 (DrvOcclusionStateChangeNotify.c)
 *     SetMouseTrails @ 0x1C0020418 (SetMouseTrails.c)
 *     SetPointer @ 0x1C00219A0 (SetPointer.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RegisterCDROMNotify @ 0x1C0077C84 (RegisterCDROMNotify.c)
 *     InitKeyboard @ 0x1C007B470 (InitKeyboard.c)
 *     TransitionCursorSuppressionState @ 0x1C007B640 (TransitionCursorSuppressionState.c)
 *     RemoveInputDevices @ 0x1C00F6800 (RemoveInputDevices.c)
 *     UnregisterDeviceClassNotifications @ 0x1C00F68FC (UnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F69C0 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00F6E08 (xxxRemoteStopScreenUpdates.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C0126250 (DrvCloseRemoteGraphicsDevices.c)
 *     AttachInputDevices @ 0x1C0126370 (AttachInputDevices.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C01263F4 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C0126480 (DrvOpenLocalGraphicsDevices.c)
 *     RemoteRedrawScreen @ 0x1C0126610 (RemoteRedrawScreen.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C0127298 (GreMultiUserSetDisplayDriverName.c)
 *     GreDrvDisconnect @ 0x1C0128FB4 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C012C5E4 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C012C60C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     GreDrvReconnect @ 0x1C02DEC3C (GreDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteReconnect(unsigned __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // r13
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 RemoteContext; // r15
  _UNKNOWN **v8; // rcx
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 result; // rax
  int Win32kDriverObject; // esi
  int v17; // ebx
  int v18; // ebx
  __int64 v19; // rcx
  wchar_t *v20; // rax
  __int64 v21; // r8
  BOOL v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r12
  void *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  Gre::Base *v29; // rcx
  int v30; // ebx
  int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v45; // ebx
  __int64 v46; // rdx
  __int64 v47; // rcx
  void (__fastcall *v48)(__int64, _QWORD); // rdi
  Gre::Base *v49; // rcx
  unsigned int RemoteDeviceCount; // eax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  bool v55; // zf
  unsigned int *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  _UNKNOWN **v60; // r8
  int HandleInformation; // [rsp+28h] [rbp-380h]
  _BYTE v62[4]; // [rsp+60h] [rbp-348h] BYREF
  int v63; // [rsp+64h] [rbp-344h]
  int v64; // [rsp+68h] [rbp-340h] BYREF
  unsigned __int16 v65; // [rsp+6Ch] [rbp-33Ch]
  BOOL v66; // [rsp+70h] [rbp-338h]
  int v67; // [rsp+74h] [rbp-334h]
  int v68; // [rsp+78h] [rbp-330h]
  int v69; // [rsp+7Ch] [rbp-32Ch]
  PVOID Object; // [rsp+80h] [rbp-328h] BYREF
  int v71; // [rsp+8Ch] [rbp-31Ch]
  unsigned int v72; // [rsp+90h] [rbp-318h]
  PVOID v73; // [rsp+98h] [rbp-310h] BYREF
  unsigned __int64 v74; // [rsp+A0h] [rbp-308h]
  _BYTE v75[320]; // [rsp+B0h] [rbp-2F8h] BYREF
  _BYTE v76[32]; // [rsp+1F0h] [rbp-1B8h] BYREF
  __int64 v77; // [rsp+210h] [rbp-198h]
  __int64 v78; // [rsp+218h] [rbp-190h]
  __int64 v79; // [rsp+220h] [rbp-188h]
  __int64 v80; // [rsp+228h] [rbp-180h]
  __int64 v81; // [rsp+230h] [rbp-178h]
  __int128 v82; // [rsp+240h] [rbp-168h]
  __int128 v83; // [rsp+250h] [rbp-158h]
  __int128 v84; // [rsp+260h] [rbp-148h]
  __int128 v85; // [rsp+270h] [rbp-138h]
  _BYTE v86[58]; // [rsp+280h] [rbp-128h] BYREF
  __int128 v87; // [rsp+2BAh] [rbp-EEh]
  __int16 v88; // [rsp+2CAh] [rbp-DEh]
  __int128 v89; // [rsp+2CCh] [rbp-DCh]
  int v90; // [rsp+2DCh] [rbp-CCh]
  int v91; // [rsp+2E0h] [rbp-C8h]
  int v92; // [rsp+2E4h] [rbp-C4h]
  unsigned __int16 v93; // [rsp+2F8h] [rbp-B0h]
  __int64 v94; // [rsp+2FCh] [rbp-ACh]
  int v95; // [rsp+304h] [rbp-A4h]
  int v96; // [rsp+308h] [rbp-A0h]
  int v97; // [rsp+30Ch] [rbp-9Ch]
  int v98; // [rsp+314h] [rbp-94h]
  _BYTE v99[8]; // [rsp+330h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+338h] [rbp-70h] BYREF
  int v101; // [rsp+348h] [rbp-60h]
  char v102; // [rsp+360h] [rbp-48h]
  __int64 v103; // [rsp+370h] [rbp-38h]

  v74 = a1;
  memset_0(v99, 0, 0x48uLL);
  EtwActivityIdControl(3u, &ActivityId);
  v103 = MEMORY[0xFFFFF78000000014];
  v101 = 22;
  v102 = -1;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v71 = *(_DWORD *)(SGDGetUserSessionState(v2) + 15936) + 1;
  v63 = 0;
  v69 = 0;
  v65 = gProtocolType;
  memset_0(v76, 0, 0x140uLL);
  v64 = 0;
  v3 = 0LL;
  LODWORD(v4) = 0;
  RemoteContext = GreGetRemoteContext();
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v8 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      9,
      16,
      (__int64)&WPP_b175c1f43ecf3cf0d465f249db37b465_Traceguids);
  if ( PsGetCurrentProcess(v8, v5, v6) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v9 = (_OWORD *)a1;
  if ( a1 + 320 < a1 || a1 + 320 > MmUserProbeAddress )
    v9 = (_OWORD *)MmUserProbeAddress;
  v10 = v75;
  v11 = 2LL;
  do
  {
    *v10 = *v9;
    v10[1] = v9[1];
    v10[2] = v9[2];
    v10[3] = v9[3];
    v10[4] = v9[4];
    v10[5] = v9[5];
    v10[6] = v9[6];
    v10 += 8;
    *(v10 - 1) = v9[7];
    v9 += 8;
    --v11;
  }
  while ( v11 );
  *v10 = *v9;
  v10[1] = v9[1];
  v10[2] = v9[2];
  v10[3] = v9[3];
  v12 = v76;
  v13 = v75;
  v14 = 2LL;
  do
  {
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v12[4] = v13[4];
    v12[5] = v13[5];
    v12[6] = v13[6];
    v12 += 8;
    *(v12 - 1) = v13[7];
    v13 += 8;
    --v14;
  }
  while ( v14 );
  *v12 = *v13;
  v12[1] = v13[1];
  v12[2] = v13[2];
  v12[3] = v13[3];
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  gpThinWireCache = ThinWireCache;
  result = PopulateUMKMHandlePair(v79, gRemoteMouseChannelHandlePair);
  if ( (int)result >= 0 )
  {
    result = PopulateUMKMHandlePair(v80, gRemoteKeyboardChannelHandlePair);
    Win32kDriverObject = result;
    if ( (int)result >= 0 )
    {
      gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
      gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
      ghRemoteVideoChannel = v77;
      ghRemoteBeepChannel = v78;
      ghRemoteThinwireChannel = v81;
      gRemoteClientKeyboardType = v94;
      *((_DWORD *)&gRemoteClientKeyboardType + 2) = v95;
      v17 = v91;
      *(_DWORD *)(SGDGetUserSessionState(gRemoteClientKeyboardType) + 15912) = v17;
      v18 = v92;
      *(_DWORD *)(SGDGetUserSessionState(v19) + 13820) = v18;
      v72 = gbRemoteFxSession;
      gbRemoteFxSession = v98;
      *(_DWORD *)(RemoteContext + 64) = v98;
      gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
      gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
      gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
      *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
      *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
      *(_OWORD *)&gstrBaseWinStationName = v82;
      *((_OWORD *)&gstrBaseWinStationName + 1) = v83;
      *((_OWORD *)&gstrBaseWinStationName + 2) = v84;
      *((_OWORD *)&gstrBaseWinStationName + 3) = v85;
      gWinStationInfo = v87;
      *((_WORD *)&gWinStationInfo + 8) = v88;
      *(_OWORD *)((char *)&gWinStationInfo + 20) = v89;
      *((_DWORD *)&gWinStationInfo + 9) = v90;
      v20 = wcschr(gstrBaseWinStationName, 0x23u);
      v22 = 0;
      if ( v20 )
        *v20 = 0;
      if ( gProtocolType )
      {
        FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v64, 0);
        v23 = gpsi;
        if ( !v64 )
        {
          *(_DWORD *)(gpsi + 2236LL) &= ~4u;
          goto LABEL_24;
        }
      }
      else
      {
        v23 = gpsi;
      }
      *(_DWORD *)(v23 + 2236) |= 4u;
LABEL_24:
      v24 = *(_QWORD *)(RemoteContext + 40);
      if ( v24 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( *(_WORD *)(v24 + 2 * v25) );
        v4 = v25 + 1;
        v26 = (void *)Win32AllocPoolWithQuotaZInit(2 * v4, 2020897621LL);
        v3 = v26;
        if ( !v26 )
        {
          Win32kDriverObject = -1073741801;
          v31 = 0;
          goto LABEL_75;
        }
        memmove(v26, *(const void **)(RemoteContext + 40), 2 * v4);
        v22 = 0;
      }
      v27 = gVideoFileObject;
      if ( !gVideoFileObject && ghRemoteVideoChannel )
      {
        v73 = 0LL;
        Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v73, 0LL);
        if ( Win32kDriverObject >= 0 )
        {
          gVideoFileObject = v73;
          IoGetRelatedDeviceObject((PFILE_OBJECT)v73);
          Object = 0LL;
          Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &Object, 0LL);
          gThinwireFileObject = Object;
          v22 = 0;
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
                                v86,
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
                                 v86,
                                 19,
                                 gRemoteDisplayDeviceName) )
      {
        Win32kDriverObject = -1073741823;
      }
      if ( Win32kDriverObject < 0 )
        goto LABEL_105;
      v28 = ghRemoteBeepChannel;
      if ( ghRemoteBeepChannel )
      {
        Object = 0LL;
        Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &Object, 0LL);
        gpRemoteBeepDevice = Object;
        v22 = 0;
      }
      if ( Win32kDriverObject < 0 )
        goto LABEL_105;
      if ( gnShadowers )
        xxxRemoteStopScreenUpdates(v28, v27, v21);
      if ( v93 == gPreviousProtocolType || !gPreviousProtocolType )
      {
LABEL_49:
        SetProtocolType(v93);
        if ( !gProtocolType )
          DrvNotifySessionStateChange(3LL);
        v69 = 1;
        if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
        {
          if ( gProtocolType == gPreviousProtocolType )
          {
            Win32kDriverObject = GreDrvReconnect(RemoteContext);
            LOBYTE(v22) = Win32kDriverObject >= 0;
            v66 = v22;
            v30 = 0;
          }
          else
          {
            v30 = 1;
            Win32kDriverObject = GreDrvConnect(RemoteContext);
            v66 = Win32kDriverObject >= 0;
          }
        }
        else
        {
          v30 = 1;
          v31 = 0;
          if ( !gProtocolType )
          {
            Win32kDriverObject = DrvOpenLocalGraphicsDevices(v29);
            if ( Win32kDriverObject < 0 )
              goto LABEL_75;
            v68 = 1;
          }
        }
        v31 = 1;
        if ( !(unsigned int)DrvSetGraphicsDevices(v86) )
        {
          if ( gnShadowers )
            RemoteRedrawScreen(0LL, v32, v33);
          Win32kDriverObject = -1073741823;
          goto LABEL_75;
        }
        DispBrokerAsyncSessionSwitched();
        if ( v96 || (v38 = gPreviousProtocolType, gProtocolType != gPreviousProtocolType) || v97 )
        {
          if ( (unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(gpDispInfo + 16LL))
            && !(unsigned int)DrvSessionHasAnyGraphicsDevice(v36, v35, v37, 0LL) )
          {
            Win32kDriverObject = 0;
          }
          else
          {
            if ( v97 || (v39 = 2191LL, !gProtocolType) )
              v39 = 2447LL;
            LOBYTE(HandleInformation) = 0;
            Win32kDriverObject = xxxUserSetDisplayConfig(
                                   0LL,
                                   0LL,
                                   v39,
                                   2LL,
                                   gspdeskShouldBeForeground,
                                   HandleInformation,
                                   0LL,
                                   0LL,
                                   0LL,
                                   v99,
                                   0LL);
            if ( Win32kDriverObject < 0 )
            {
              LOBYTE(v40) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              v60 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v60) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v40,
                  (_DWORD)v60,
                  17,
                  4,
                  9,
                  17,
                  (__int64)&WPP_b175c1f43ecf3cf0d465f249db37b465_Traceguids);
              }
              goto LABEL_75;
            }
          }
        }
        v41 = gProtocolType;
        if ( gProtocolType )
        {
          if ( v30
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
            RemoveInputDevices(v38);
          if ( !gpWin32kDriverObject )
            Win32kDriverObject = GetWin32kDriverObject(v38, v41, v34, 0LL);
          AttachInputDevices(1LL);
          (**(void (__fastcall ***)(PVOID))P)(P);
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v62);
          RegisterCDROMNotify();
          v67 = 1;
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v62);
        }
        RemoteRedrawScreen(v43, v42, v44);
        InitKeyboard();
        UpdateKeyLights(0LL);
        SetPointer(1LL);
        v45 = gCursorSuppressionState;
        gCursorSuppressionState = 9;
        TransitionCursorSuppressionState(0xAu, 0);
        if ( ((v45 - 1) & 0xFFFFFFFB) != 0 )
          v45 = 2;
        TransitionCursorSuppressionState(v45, 0);
        SetConnectedState(1LL, gbConnectCompleted);
        if ( gProtocolType )
        {
          FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v64, 0);
          v47 = gpsi;
          if ( !v64 )
          {
            *(_DWORD *)(gpsi + 2236LL) &= ~4u;
            goto LABEL_74;
          }
        }
        else
        {
          v47 = gpsi;
        }
        *(_DWORD *)(v47 + 2236) |= 4u;
LABEL_74:
        v48 = *(void (__fastcall **)(__int64, _QWORD))(DxDdGetDxgkWin32kInterface(v47, v46) + 384);
        RemoteDeviceCount = DrvGetRemoteDeviceCount(v49);
        LOBYTE(v51) = gProtocolType == 0;
        v48(v51, RemoteDeviceCount);
        LOBYTE(v52) = gProtocolType == 0;
        LOBYTE(v53) = 1;
        CitSessionConnectChange(v53, v52);
LABEL_75:
        SetMouseTrails(v71);
        v55 = Win32kDriverObject == 0;
        if ( Win32kDriverObject < 0 )
        {
          if ( v66 )
            GreDrvDisconnect(RemoteContext);
          v55 = Win32kDriverObject == 0;
        }
        if ( v55 && !gProtocolType )
        {
          v56 = (unsigned int *)SGDGetUserSessionState(v54);
          RtlSetActiveConsoleId(*v56);
        }
        if ( !gProtocolType )
          DrvNotifySessionStateChange(4LL);
        if ( Win32kDriverObject < 0 )
          CleanupRemoteHandles(RemoteContext);
        SetConsoleSwitchInProgress(0LL);
        LOBYTE(v57) = 1;
        DxgkEngNotifyDisplayChange(v57);
        if ( Win32kDriverObject < 0 )
        {
          v59 = v72;
          gbRemoteFxSession = v72;
          *(_DWORD *)(RemoteContext + 64) = v72;
          if ( v67 )
            UnregisterDeviceClassNotifications();
          if ( v68 )
            DrvCloseGraphicsDevices(1LL);
          if ( v69 )
            SetProtocolType(v65);
          if ( v31 )
            DrvSetGraphicsDevices(v86);
        }
        if ( v3 )
          Win32FreePool(v3);
        if ( !Win32kDriverObject )
        {
          v58 = gProtocolType;
          if ( gProtocolType )
            DrvEscapeRemoteDrivers(
              *(_QWORD *)(gpDispInfo + 16LL),
              gProtocolType,
              *(_QWORD *)(RemoteContext + 40),
              6LL,
              0LL,
              0);
        }
        DrvOcclusionStateChangeNotify(v59, v58);
        DispBrokerAsyncSessionSwitched();
        return (unsigned int)Win32kDriverObject;
      }
      if ( !v3 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, (unsigned int)(v4 - 1), v3) )
      {
        Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                               grpdeskRitInput,
                               gProtocolType,
                               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v99);
        if ( Win32kDriverObject < 0 )
        {
LABEL_105:
          v31 = v63;
          goto LABEL_75;
        }
        if ( *(_DWORD *)(v74 + 288) )
          DrvCloseRemoteGraphicsDevices();
        if ( !v3 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, v86) )
          goto LABEL_49;
      }
      Win32kDriverObject = -1073741823;
      goto LABEL_105;
    }
  }
  return result;
}
