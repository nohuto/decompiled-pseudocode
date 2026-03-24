/*
 * XREFs of xxxRemoteConnect @ 0x1C0117AB0
 * Callers:
 *     <none>
 * Callees:
 *     FastGetProfileIntW @ 0x1C0010540 (FastGetProfileIntW.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0055A8C (WPP_RECORDER_SF_S.c)
 *     Win32AllocPoolNonPaged @ 0x1C005C490 (Win32AllocPoolNonPaged.c)
 *     InitLoadResources @ 0x1C0070130 (InitLoadResources.c)
 *     SetProtocolType @ 0x1C0079EB0 (SetProtocolType.c)
 *     InitVideo @ 0x1C009A7D8 (InitVideo.c)
 *     ?DispBrokerAsyncSessionSwitched@@YAJXZ @ 0x1C009ABC0 (-DispBrokerAsyncSessionSwitched@@YAJXZ.c)
 *     SetConnectedState @ 0x1C00B0CC0 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x1C00B0CF0 (SetConnectCompletedState.c)
 *     IsRemoteConnection @ 0x1C00B2098 (IsRemoteConnection.c)
 *     SetConsoleSwitchInProgress @ 0x1C00B35E0 (SetConsoleSwitchInProgress.c)
 *     CleanupRemoteHandles @ 0x1C00B4D10 (CleanupRemoteHandles.c)
 *     LW_BrushInit @ 0x1C00B8480 (LW_BrushInit.c)
 *     GreDxgkSessionConnected @ 0x1C00B8634 (GreDxgkSessionConnected.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00C2EA0 (DrvEscapeRemoteDrivers.c)
 *     GreMultiUserInitSession @ 0x1C00C45A0 (GreMultiUserInitSession.c)
 *     GreGdoDeviceIoControlEx @ 0x1C00C4CB0 (GreGdoDeviceIoControlEx.c)
 *     wcschr @ 0x1C00C5450 (wcschr.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     GreDrvConnect @ 0x1C013F5F0 (GreDrvConnect.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C014AC00 (DxgkEngNotifyDisplayChange.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C020005C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
{
  int v6; // r13d
  int v8; // ebx
  __int64 result; // rax
  void *v10; // rcx
  wchar_t *v11; // rax
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rax
  PVOID v16; // rdx
  int v17; // esi
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // sf
  __int64 v24; // rcx
  HANDLE v25; // rcx
  int v26; // eax
  struct _KTIMER *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // edx
  PVOID Object[2]; // [rsp+60h] [rbp-10h] BYREF
  ULONG Value; // [rsp+A0h] [rbp+30h] BYREF

  v6 = a2;
  v8 = 0;
  Value = 0;
  if ( *(_DWORD *)a1 )
  {
    if ( qword_1C0255D90 )
      result = qword_1C0255D90();
    else
      result = 3221225659LL;
    if ( (int)result >= 0 )
    {
      if ( qword_1C0255D98 )
        return qword_1C0255D98(a1, a3, a4);
      else
        return 3221225659LL;
    }
    return result;
  }
  v10 = &WPP_6979b531ad8c3cd76ec9d67b62018afd_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_S(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      15,
      10,
      (__int64)&WPP_6979b531ad8c3cd76ec9d67b62018afd_Traceguids,
      (__int64)a3);
  }
  gdwHydraHint |= 8u;
  if ( (PVOID)PsGetCurrentProcess(v10, a2) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( gfSwitchInProgress )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1);
  *(_QWORD *)&gpThinWireCache = &ThinWireCache;
  ghRemoteMouseChannel = *(_QWORD *)(a1 + 48);
  gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
  gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
  ghRemoteVideoChannel = *(HANDLE *)(a1 + 32);
  ghRemoteBeepChannel = *(HANDLE *)(a1 + 40);
  ghRemoteKeyboardChannel = *(_QWORD *)(a1 + 56);
  ghRemoteThinwireChannel = *(HANDLE *)(a1 + 64);
  SetProtocolType(*(_WORD *)(a1 + 264));
  gPreviousProtocolType = *(_WORD *)(a1 + 264);
  gRemoteClientKeyboardType = *(_QWORD *)(a1 + 268);
  dword_1C024EE50 = *(_DWORD *)(a1 + 276);
  gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
  gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
  gRemoteTerminalLuid = *(_QWORD *)(a1 + 304);
  gRemoteSessionUseWddm = *(_DWORD *)(a1 + 312);
  gRemotePreviousMonitorsCount = gRemoteNumMonitors;
  *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
  xmmword_1C024EE70 = *(_OWORD *)(a1 + 178);
  qword_1C024EE80 = *(_QWORD *)(a1 + 194);
  gWinStationInfo = *(_OWORD *)(a1 + 202);
  word_1C024EEF0 = *(_WORD *)(a1 + 218);
  xmmword_1C024EEF4 = *(_OWORD *)(a1 + 220);
  dword_1C024EF04 = *(_DWORD *)(a1 + 236);
  memset(&gstrBaseWinStationName, 0, 0x40uLL);
  *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
  xmmword_1C024EDB0 = *(_OWORD *)(a1 + 96);
  xmmword_1C024EDC0 = *(_OWORD *)(a1 + 112);
  xmmword_1C024EDD0 = *(_OWORD *)(a1 + 128);
  v11 = wcschr(&gstrBaseWinStationName, 0x23u);
  if ( v11 )
    *v11 = 0;
  v12 = gbRemoteFxSession;
  gbRemoteFxSession = *(_DWORD *)(a1 + 292);
  dword_1C02512E0 = *(_DWORD *)(a1 + 292);
  if ( *(_DWORD *)(a1 + 292) )
    qword_1C02512E4 = *(_QWORD *)(a1 + 296);
  SetConnectedState(1, gbConnectCompleted);
  if ( (unsigned int)IsRemoteConnection(v14, v13) )
  {
    FastGetProfileIntW(0LL, 39LL, (__int64)L"CursorBlinkEnable", 0, &Value, 0);
    v15 = gpsi;
    if ( !Value )
    {
      *((_DWORD *)gpsi + 559) &= ~4u;
      goto LABEL_26;
    }
  }
  else
  {
    v15 = gpsi;
  }
  v15[559] |= 4u;
LABEL_26:
  v16 = gVideoFileObject;
  v17 = -1073741637;
  if ( gVideoFileObject )
  {
    if ( ghRemoteVideoChannel )
      goto LABEL_54;
    goto LABEL_51;
  }
  if ( !ghRemoteVideoChannel )
  {
LABEL_51:
    if ( (unsigned int)GreMultiUserInitSession(
                         (__int64)&gRemoteContext,
                         (__int64)ghRemoteThinwireChannel,
                         *(__int64 *)&gpThinWireCache,
                         gRemoteNumMonitors,
                         gRemotePrimaryMonitor,
                         (__int64)gVideoFileObject,
                         (__int64)gThinwireFileObject,
                         v6,
                         a3,
                         19,
                         &gRemoteDisplayDeviceName) )
      goto LABEL_54;
    v8 = -1073741823;
    goto LABEL_53;
  }
  Object[0] = 0LL;
  v8 = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, Object, 0LL);
  if ( v8 < 0 )
    goto LABEL_32;
  gVideoFileObject = Object[0];
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object[0]);
  Object[0] = 0LL;
  v8 = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, Object, 0LL);
  gThinwireFileObject = Object[0];
  if ( v8 < 0 )
    goto LABEL_32;
  if ( (unsigned int)GreMultiUserInitSession(
                       (__int64)&gRemoteContext,
                       (__int64)ghRemoteThinwireChannel,
                       *(__int64 *)&gpThinWireCache,
                       gRemoteNumMonitors,
                       gRemotePrimaryMonitor,
                       (__int64)gVideoFileObject,
                       (__int64)Object[0],
                       v6,
                       a3,
                       19,
                       &gRemoteDisplayDeviceName) )
  {
    if ( (unsigned int)IsRemoteConnection(v20, v19) )
    {
      v8 = GreGdoDeviceIoControlEx(RelatedDeviceObject, 0x381004u, 0LL, 0, 0LL, 0, (unsigned int *)Object, 0);
      if ( v8 < 0 )
        goto LABEL_32;
      v8 = GreDrvConnect(&gRemoteContext);
    }
LABEL_53:
    if ( v8 < 0 )
      goto LABEL_32;
LABEL_54:
    v25 = ghRemoteBeepChannel;
    if ( ghRemoteBeepChannel )
    {
      Object[0] = 0LL;
      v8 = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, Object, 0LL);
      gpRemoteBeepDevice = Object[0];
    }
    if ( v8 >= 0 )
    {
      if ( !gbNonServiceSession || gbVideoInitialized )
      {
        IsRemoteConnection((__int64)v25, (__int64)v16);
        GreDxgkSessionConnected();
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v30) = 4;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v30,
            15,
            11,
            (__int64)&WPP_6979b531ad8c3cd76ec9d67b62018afd_Traceguids,
            gSessionId);
        }
        v8 = 0;
      }
      else if ( InitVideo(a4) )
      {
        if ( qword_1C0255DA0 )
          v26 = qword_1C0255DA0();
        else
          v26 = -1073741637;
        if ( (v26 < 0 || (unsigned int)LW_BrushInit())
          && (InitLoadResources(0),
              v27 = (struct _KTIMER *)Win32AllocPoolNonPaged(64LL, 0x744B7355u),
              (gptmrWD = v27) != 0LL) )
        {
          KeInitializeTimerEx(v27, SynchronizationTimer);
          IsRemoteConnection(v29, v28);
          GreDxgkSessionConnected();
          DispBrokerAsyncSessionSwitched();
          gbVideoInitialized = 1;
        }
        else
        {
          v8 = -1073741801;
        }
      }
      else
      {
        SetConnectedState(0, 0);
        v8 = -1073741823;
      }
    }
    goto LABEL_32;
  }
  v8 = -1073741823;
LABEL_32:
  KeSetEvent(gpevtVideoInitialized, 1, 0);
  v23 = v8 < 0;
  if ( !v8 )
  {
    if ( !gProtocolType )
      RtlSetActiveConsoleId((unsigned int)gSessionId);
    if ( qword_1C0255DB0 )
      v17 = qword_1C0255DB0();
    if ( v17 >= 0 && qword_1C0255DB8 )
      qword_1C0255DB8();
    if ( (unsigned int)IsRemoteConnection(v22, v21) )
      DrvEscapeRemoteDrivers(
        *(_QWORD *)(gpDispInfo + 16),
        (unsigned __int16)gProtocolType,
        (__int64)qword_1C02512C8,
        6u,
        0LL,
        0);
    SetConnectCompletedState(1);
    v23 = 0;
  }
  if ( v23 )
  {
    gbRemoteFxSession = v12;
    dword_1C02512E0 = v12;
    CleanupRemoteHandles(&gRemoteContext, v21);
  }
  SetConsoleSwitchInProgress(0);
  LOBYTE(v24) = 1;
  DxgkEngNotifyDisplayChange(v24);
  return (unsigned int)v8;
}
