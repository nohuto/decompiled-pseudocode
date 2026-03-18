/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C005F1A8
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C005AFC0 (Win32kBaseUserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0019FB0 (OpenCacheKeyEx.c)
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0047358 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CreateKernelEvent @ 0x1C005D9C0 (CreateKernelEvent.c)
 *     CreateKernelEventObject @ 0x1C005DED8 (CreateKernelEventObject.c)
 *     FastGetProfileIntFromID @ 0x1C00610C0 (FastGetProfileIntFromID.c)
 *     InitVideo @ 0x1C0068398 (InitVideo.c)
 *     InitLoadResources @ 0x1C006C520 (InitLoadResources.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C14FC (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00D51B4 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D54F0 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C0152348 (-DrvDriverFailure@@YAJXZ.c)
 *     xxxSystemParametersInfo @ 0x1C0165BD0 (xxxSystemParametersInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitCreateObjectDirectory @ 0x1C02E5E68 (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  int v2; // r14d
  PDEVICE_OBJECT v3; // rcx
  char v4; // di
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  struct tagTHREADINFO **v8; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int ObjectDirectory; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v19; // rcx
  void *v20; // rsi
  void *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  PDEVICE_OBJECT v25; // rcx
  void *v26; // rdx
  LARGE_INTEGER *v28; // rbx
  struct tagKERNELHANDLETABLEENTRY *v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rbx
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  ULONG ResultLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID MappedBase; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  __int64 DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE DestinationString_8[28]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v38[10]; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+D8h] [rbp-30h] BYREF
  ULONG *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+108h] [rbp+0h] BYREF
  ULONG *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+138h] [rbp+30h] BYREF
  ULONG *v46; // [rsp+158h] [rbp+50h]
  __int64 v47; // [rsp+160h] [rbp+58h]
  _BYTE KeyValueInformation[12]; // [rsp+168h] [rbp+60h] BYREF
  int v49; // [rsp+174h] [rbp+6Ch]
  _BYTE v50[12]; // [rsp+180h] [rbp+78h] BYREF
  int v51; // [rsp+18Ch] [rbp+84h]

  memset(v38, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v38[1]);
  v2 = 0;
  v38[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v38[3]) = 28;
  LOBYTE(v38[6]) = -1;
  Object = 0LL;
  MappedBase = 0LL;
  DestinationString = 0LL;
  v3 = WPP_GLOBAL_Control;
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
      22,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v3, v0, v1);
  else
    CurrentThreadWin32Thread = 0LL;
  *(_QWORD *)DestinationString_8 = CurrentThreadWin32Thread;
  *(_DWORD *)&DestinationString_8[8] = 1;
  if ( CurrentThreadWin32Thread
    && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(*(_QWORD *)DestinationString_8 + 48LL)) )
  {
    EtwActivityIdControl(3u, (LPGUID)&DestinationString_8[12]);
    if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
    {
      v41 = 4LL;
      ResultLength[0] = *(_DWORD *)&DestinationString_8[8] == 1;
      v40 = ResultLength;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C028EE70,
        (unsigned __int8 *)dword_1C025AD79,
        (const GUID *)&DestinationString_8[12],
        0LL,
        3u,
        &v39);
    }
  }
  if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
    || (v6 = W32kEtwEnabledKeyword, v7 = 0x8000002010000000uLL, (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
    && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
    || (v7 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
    && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
    && (qword_1C028DB20 & 0x200000010000000LL) != 0
    && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
  {
    v28 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v6, v7);
    if ( v28 )
      v28[1] = KeQueryPerformanceCounter(0LL);
  }
  v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
  EtwTraceAcquiredExclusiveUserCrit();
  if ( v8 )
  {
    v9 = *v8;
    if ( IsThreadCrossSessionAttached() )
      v9 = 0LL;
    if ( *(_QWORD *)DestinationString_8 )
    {
      v11 = *(unsigned int *)(*(_QWORD *)DestinationString_8 + 24LL);
      if ( *(_DWORD *)(*(_QWORD *)DestinationString_8 + 48LL) || (int)v11 > 0 )
      {
        *(_DWORD *)(*(_QWORD *)DestinationString_8 + 44LL) = 1;
        *(_OWORD *)(*(_QWORD *)DestinationString_8 + 28LL) = *(_OWORD *)&DestinationString_8[12];
        v12 = (unsigned int)dword_1C028EE70;
        if ( (unsigned int)dword_1C028EE70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v44 = 4LL;
            ResultLength[0] = *(_DWORD *)&DestinationString_8[8] == 1;
            v43 = ResultLength;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD22,
              (const GUID *)&DestinationString_8[12],
              0LL,
              3u,
              &v42);
            v12 = (unsigned int)dword_1C028EE70;
          }
          if ( (unsigned int)v12 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
          {
            v47 = 4LL;
            ResultLength[0] = *(_DWORD *)&DestinationString_8[8] == 1;
            v46 = ResultLength;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C028EE70,
              (unsigned __int8 *)dword_1C025AD4F,
              (const GUID *)&DestinationString_8[12],
              0LL,
              3u,
              &v45);
          }
        }
      }
    }
    gptiCurrent = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 377) = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11, v10, v12, v13);
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
          && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
        {
          while ( 1 )
          {
            v31 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
            if ( !gpSharedUserCritDeferredUnlockListHead )
              break;
            v29 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
            v30 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
            *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
            gpSharedUserCritDeferredUnlockListHead = v29;
            if ( !*(_DWORD *)(v30 + 8) )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v15, v16);
              v30 = *v31;
            }
            HMUnlockObject(v30);
          }
        }
      }
    }
  }
  else
  {
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)DestinationString_8);
    gptiCurrent = 0LL;
  }
  if ( ghSMSS && gpidLogon )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  gdwHydraHint |= 2u;
  if ( gbNonServiceSession )
  {
    Length[0] = gSessionId;
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
    gpEventPnPWainting = (void *)CreateKernelEvent(SynchronizationEvent, 1u);
    if ( !gpEventPnPWainting )
      goto LABEL_110;
    FastGetProfileIntFromID(0, 39, 0x268u, 1, &gbSnapShotWindowsAndMonitors, 0);
    FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, &gdwWaitToKillServiceTimeout, 0);
    *((_DWORD *)gpsi + 559) |= 4u;
    gpEventDiconnectDesktop = (void *)CreateKernelEvent(SynchronizationEvent, 0);
    if ( !gpEventDiconnectDesktop )
      goto LABEL_110;
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
          goto LABEL_54;
      }
      if ( !InitVideo(v38) )
      {
        ObjectDirectory = DrvDriverFailure();
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        goto LABEL_54;
      }
      MmUnmapViewInSessionSpace(MappedBase);
      ObfDereferenceObject(Object);
      gbVideoInitialized = 1;
      DestinationString = 2LL;
      ZwPowerInformation(SystemPowerStateLogging|0x40, &DestinationString, 8u, 0LL, 0);
    }
    CurrentThread = KeGetCurrentThread();
    gbUserInitialized = 1;
    ObjectDirectory = xxxCreateThreadInfo(CurrentThread);
    if ( ObjectDirectory < 0 )
      goto LABEL_54;
    if ( giDelayedPowerTimeout )
    {
      xxxSystemParametersInfo(0x51u, giDelayedPowerTimeout);
      xxxSystemParametersInfo(0x52u, giDelayedPowerTimeout);
      giDelayedPowerTimeout = 0;
    }
    gpRemoteSessionOcclusionEvent = CreateKernelEventObject(v19, 1u);
    if ( !gpRemoteSessionOcclusionEvent )
    {
LABEL_110:
      ObjectDirectory = -1073741801;
      goto LABEL_54;
    }
    ObjectDirectory = 0;
    if ( (!gbNonServiceSession || gbFirstInteractiveSession) && qword_1C029BAF8 )
      qword_1C029BAF8();
    if ( gbFirstInteractiveSession && gbNonServiceSession && !gbSetupDPIInitialized )
      SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v38);
    InitLoadResources(0LL);
    *(_OWORD *)DestinationString_8 = 0LL;
    ResultLength[1] = 0;
    ResultLength[0] = gdwPolicyFlags;
    do
    {
      v20 = OpenCacheKeyEx(0LL, 51LL, 131097LL, (int *)ResultLength);
      if ( !v20 )
      {
        v2 = 0;
        goto LABEL_46;
      }
      RtlInitUnicodeString((PUNICODE_STRING)DestinationString_8, L"ConvertibleSlateMode");
      if ( ZwQueryValueKey(
             v20,
             (PUNICODE_STRING)DestinationString_8,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength[1]) >= 0 )
      {
        v2 = v49;
        ResultLength[0] = 0;
      }
      else
      {
        v2 = ResultLength[0] != 0 ? v2 : 0;
      }
      ZwClose(v20);
    }
    while ( ResultLength[0] );
    if ( !v2 )
    {
LABEL_46:
      *((_DWORD *)gpsi + 559) &= ~8u;
      goto LABEL_47;
    }
    *((_DWORD *)gpsi + 559) |= 8u;
LABEL_47:
    *(_OWORD *)DestinationString_8 = 0LL;
    ResultLength[1] = 0;
    ResultLength[0] = gdwPolicyFlags;
    do
    {
      v21 = OpenCacheKeyEx(0LL, 51LL, 131097LL, (int *)ResultLength);
      if ( !v21 )
        goto LABEL_53;
      RtlInitUnicodeString((PUNICODE_STRING)DestinationString_8, L"SystemDockMode");
      if ( ZwQueryValueKey(
             v21,
             (PUNICODE_STRING)DestinationString_8,
             KeyValuePartialInformation,
             v50,
             0x14u,
             &ResultLength[1]) >= 0 )
      {
        v2 = v51;
        ResultLength[0] = 0;
      }
      else
      {
        v2 = ResultLength[0] != 0 ? v2 : 0;
      }
      ZwClose(v21);
    }
    while ( ResultLength[0] );
    if ( !v2 )
    {
LABEL_53:
      *((_DWORD *)gpsi + 559) &= ~0x10u;
      goto LABEL_54;
    }
    *((_DWORD *)gpsi + 559) |= 0x10u;
  }
LABEL_54:
  KeSetEvent(gpevtVideoInitialized, 1, 0);
  v25 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = &WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids;
    LOBYTE(v26) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v26,
      v23,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      23,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
  }
  UserSessionSwitchLeaveCrit((__int64)v25, v22, v23, v24);
  return (unsigned int)ObjectDirectory;
}
