/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C00AE3AC
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C013FAD0 (Win32kBaseUserInitialize.c)
 * Callees:
 *     InitVideo @ 0x1C0016804 (InitVideo.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00369B4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     OpenCacheKeyEx @ 0x1C00371E0 (OpenCacheKeyEx.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     InitLoadResources @ 0x1C005D508 (InitLoadResources.c)
 *     FastGetProfileIntFromID @ 0x1C0061E60 (FastGetProfileIntFromID.c)
 *     CreateKernelEventObject @ 0x1C0077484 (CreateKernelEventObject.c)
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 *     CreateKernelEvent @ 0x1C00AEA20 (CreateKernelEvent.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00AEFC4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00CD880 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CD994 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C013F7C8 (-DrvDriverFailure@@YAJXZ.c)
 *     InitCreateObjectDirectory @ 0x1C02DD408 (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // esi
  char v4; // di
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcessWin32Process; // rax
  HANDLE v11; // rcx
  int ObjectDirectory; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  void *v24; // r14
  void *v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  PDEVICE_OBJECT v29; // rcx
  __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  ULONG Length[2]; // [rsp+28h] [rbp-A9h]
  ULONG ResultLength[2]; // [rsp+48h] [rbp-89h] BYREF
  PVOID MappedBase; // [rsp+50h] [rbp-81h] BYREF
  PVOID Object; // [rsp+58h] [rbp-79h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-69h] BYREF
  _QWORD v49[10]; // [rsp+78h] [rbp-59h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+C8h] [rbp-9h] BYREF
  int v51; // [rsp+D4h] [rbp+3h]
  _BYTE v52[12]; // [rsp+E0h] [rbp+Fh] BYREF
  int v53; // [rsp+ECh] [rbp+1Bh]

  memset(v49, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v49[1]);
  v3 = 0;
  v49[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v49[3]) = 28;
  LOBYTE(v49[6]) = -1;
  Object = 0LL;
  MappedBase = 0LL;
  InputBuffer = 0LL;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(v0) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v0) = 0;
  }
  LOBYTE(v1) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v1,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      23,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
  v5 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v0, v1, v2);
  gptiCurrent = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v32 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v31 = *v32;
          v32[2] = 0LL;
          if ( !*(_DWORD *)(v31 + 8) )
          {
            ResultLength[0] = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          }
          HMUnlockObject(*v32);
        }
      }
    }
  }
  v11 = ghSMSS;
  if ( ghSMSS && gpidLogon )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  gdwHydraHint |= 2u;
  if ( gbNonServiceSession )
  {
    Length[0] = *(_DWORD *)SGDGetUserSessionState(v11, v6, v8, v9);
    RtlStringCchPrintfW(
      szWindowStationDirectory,
      0x100uLL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      *(_QWORD *)Length,
      L"\\Windows\\WindowStations");
  }
  else
  {
    RtlStringCchCopyW(szWindowStationDirectory, 0x100uLL, (size_t *)L"\\Windows\\WindowStations");
  }
  ObjectDirectory = InitCreateObjectDirectory();
  if ( ObjectDirectory >= 0 )
  {
    gpEventPnPWainting = (void *)CreateKernelEvent(SynchronizationEvent);
    if ( !gpEventPnPWainting )
      goto LABEL_75;
    FastGetProfileIntFromID(0LL, 0x34u, 0x26Fu, 0x1388u, &gdwWaitToKillServiceTimeout, 0);
    *((_DWORD *)gpsi + 559) |= 4u;
    gpEventDiconnectDesktop = (void *)CreateKernelEvent(SynchronizationEvent);
    if ( !gpEventDiconnectDesktop )
      goto LABEL_75;
    if ( !gbNonServiceSession || gbFirstInteractiveSession )
    {
      gbUsingDefaultSectionSize = 0;
      if ( ReserveUserSessionViewsWorker(&Object, &MappedBase) < 0 )
      {
        gdwNOIOSectionSize = 128;
        gdwDesktopSectionSize = 512;
        gbUsingDefaultSectionSize = 1;
        ObjectDirectory = ReserveUserSessionViewsWorker(&Object, &MappedBase);
        if ( ObjectDirectory < 0 )
          goto LABEL_46;
      }
      if ( !InitVideo((__int64)v49) )
      {
        ObjectDirectory = DrvDriverFailure();
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        goto LABEL_46;
      }
      MmUnmapViewInSessionSpace(MappedBase);
      ObfDereferenceObject(Object);
      gbVideoInitialized = 1;
      InputBuffer = 2LL;
      ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, 0LL, 0);
    }
    CurrentThread = KeGetCurrentThread();
    gbUserInitialized = 1;
    ObjectDirectory = xxxCreateThreadInfo(CurrentThread);
    if ( ObjectDirectory < 0 )
      goto LABEL_46;
    if ( *(_DWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 2860) )
    {
      v33 = SGDGetUserSessionState(v19, v18, v20, v21);
      xxxSystemParametersInfo(0x51u, *(_DWORD *)(v33 + 2860), 0LL, 0);
      v38 = SGDGetUserSessionState(v35, v34, v36, v37);
      xxxSystemParametersInfo(0x52u, *(_DWORD *)(v38 + 2860), 0LL, 0);
      *(_DWORD *)(SGDGetUserSessionState(v40, v39, v41, v42) + 2860) = 0;
    }
    gpRemoteSessionOcclusionEvent = CreateKernelEventObject(v19, 1u);
    if ( !gpRemoteSessionOcclusionEvent )
    {
LABEL_75:
      ObjectDirectory = -1073741801;
      goto LABEL_46;
    }
    ObjectDirectory = 0;
    if ( (!gbNonServiceSession || gbFirstInteractiveSession) && qword_1C0295230 )
      qword_1C0295230();
    if ( !gbFirstInteractiveSession
      || !gbNonServiceSession
      || gbSetupDPIInitialized
      || (ObjectDirectory = SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v49), ObjectDirectory >= 0) )
    {
      InitLoadResources(0, v22, v23);
      DestinationString = 0LL;
      ResultLength[1] = 0;
      ResultLength[0] = gdwPolicyFlags;
      do
      {
        v24 = OpenCacheKeyEx(0LL, 51LL, 131097LL, (int *)ResultLength);
        if ( !v24 )
        {
          v3 = 0;
          goto LABEL_36;
        }
        RtlInitUnicodeString(&DestinationString, L"ConvertibleSlateMode");
        if ( ZwQueryValueKey(
               v24,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength[1]) >= 0 )
        {
          v3 = v51;
          ResultLength[0] = 0;
        }
        else
        {
          v3 = ResultLength[0] != 0 ? v3 : 0;
        }
        ZwClose(v24);
      }
      while ( ResultLength[0] );
      if ( !v3 )
      {
LABEL_36:
        *((_DWORD *)gpsi + 559) &= ~8u;
        goto LABEL_37;
      }
      *((_DWORD *)gpsi + 559) |= 8u;
LABEL_37:
      DestinationString = 0LL;
      ResultLength[1] = 0;
      ResultLength[0] = gdwPolicyFlags;
      do
      {
        v25 = OpenCacheKeyEx(0LL, 51LL, 131097LL, (int *)ResultLength);
        if ( !v25 )
          goto LABEL_43;
        RtlInitUnicodeString(&DestinationString, L"SystemDockMode");
        if ( ZwQueryValueKey(v25, &DestinationString, KeyValuePartialInformation, v52, 0x14u, &ResultLength[1]) >= 0 )
        {
          v3 = v53;
          ResultLength[0] = 0;
        }
        else
        {
          v3 = ResultLength[0] != 0 ? v3 : 0;
        }
        ZwClose(v25);
      }
      while ( ResultLength[0] );
      if ( !v3 )
      {
LABEL_43:
        *((_DWORD *)gpsi + 559) &= ~0x10u;
        goto LABEL_44;
      }
      *((_DWORD *)gpsi + 559) |= 0x10u;
LABEL_44:
      if ( qword_1C02950D0 )
        qword_1C02950D0();
    }
  }
LABEL_46:
  KeSetEvent(gpevtVideoInitialized, 1, 0);
  v29 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v26,
      v27,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      24,
      (__int64)&WPP_169ed334ae81372bb981068a10849f93_Traceguids);
  }
  UserSessionSwitchLeaveCrit((__int64)v29, v26, v27, v28);
  return (unsigned int)ObjectDirectory;
}
