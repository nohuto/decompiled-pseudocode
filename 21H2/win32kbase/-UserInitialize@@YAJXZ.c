/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C0068284
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C0067B70 (Win32kBaseUserInitialize.c)
 * Callees:
 *     xxxSystemParametersInfo @ 0x1C000BBC0 (xxxSystemParametersInfo.c)
 *     FastGetProfileIntFromID @ 0x1C000EF90 (FastGetProfileIntFromID.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000FA94 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     OpenCacheKeyEx @ 0x1C0026440 (OpenCacheKeyEx.c)
 *     HMUnlockObject @ 0x1C002D5A0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C002ED90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0030000 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0039C00 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     xxxCreateThreadInfo @ 0x1C003D918 (xxxCreateThreadInfo.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     CreateKernelEvent @ 0x1C0057E20 (CreateKernelEvent.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0067D78 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C0067E90 (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     InitLoadResources @ 0x1C006F680 (InitLoadResources.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C008F428 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     InitVideo @ 0x1C0099A18 (InitVideo.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C0137564 (-DrvDriverFailure@@YAJXZ.c)
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C0137878 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0137A14 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     InitCreateObjectDirectory @ 0x1C02988C8 (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  int v0; // edx
  int v1; // r14d
  _UNKNOWN **v2; // rcx
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  int ObjectDirectory; // ebx
  struct _KTHREAD *v23; // rcx
  void *v24; // rdi
  void *v25; // rdi
  int v26; // edx
  __int64 v28; // rax
  unsigned int v29; // r8d
  PERESOURCE *DomainLockRef; // rax
  PERESOURCE *v31; // rbx
  __int64 *v32; // rsi
  __int64 v33; // rax
  PERESOURCE *v34; // rdi
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  int v36; // [rsp+38h] [rbp-D0h] BYREF
  int v37; // [rsp+3Ch] [rbp-CCh] BYREF
  int v38; // [rsp+40h] [rbp-C8h] BYREF
  int v39; // [rsp+44h] [rbp-C4h] BYREF
  int v40; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B8h] BYREF
  ULONG v42[2]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID MappedBase; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD DestinationString[3]; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+88h] [rbp-80h] BYREF
  __int64 v47; // [rsp+98h] [rbp-70h]
  unsigned __int8 v48; // [rsp+A0h] [rbp-68h]
  GUID v49; // [rsp+A4h] [rbp-64h] BYREF
  _QWORD v50[10]; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+108h] [rbp+0h] BYREF
  int *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+138h] [rbp+30h] BYREF
  int *v55; // [rsp+158h] [rbp+50h]
  __int64 v56; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+168h] [rbp+60h] BYREF
  int *v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+190h] [rbp+88h]
  _BYTE KeyValueInformation[12]; // [rsp+198h] [rbp+90h] BYREF
  int v61; // [rsp+1A4h] [rbp+9Ch]
  _BYTE v62[12]; // [rsp+1B0h] [rbp+A8h] BYREF
  int v63; // [rsp+1BCh] [rbp+B4h]

  memset(v50, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v50[1]);
  v1 = 0;
  v50[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v50[3]) = 28;
  LOBYTE(v50[6]) = -1;
  Object = 0LL;
  MappedBase = 0LL;
  DestinationString[0] = 0LL;
  v2 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v0, 14, 22, (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v49 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v48 = 1;
    v28 = PsGetCurrentThreadWin32Thread(v3);
    v47 = v28;
    if ( v28 && (*(int *)(v28 + 24) > 0 || *(_DWORD *)(v47 + 48)) )
    {
      EtwActivityIdControl(3u, &v49);
      if ( (unsigned int)dword_1C024BA90 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v38 = v48;
        v53 = 4LL;
        v52 = &v38;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FF7, (int)&v49, 0, 3u, &v51);
      }
    }
  }
  else
  {
    v47 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v47 && (*(_DWORD *)(v47 + 48) || *(int *)(v47 + 24) > 0) )
  {
    *(_DWORD *)(v47 + 44) = 1;
    *(GUID *)(v47 + 28) = v49;
    if ( (unsigned int)dword_1C024BA90 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v39 = v48;
        v56 = 4LL;
        v55 = &v39;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FA0, (int)&v49, 0, 3u, &v54);
        v29 = dword_1C024BA90;
      }
      if ( v29 > 6 && tlgKeywordOn((__int64)&dword_1C024BA90, 0x2000LL) )
      {
        v40 = v48;
        v59 = 4LL;
        v58 = &v40;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024BA90, (int)&dword_1C0218FCD, (int)&v49, 0, 3u, &v57);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v14 = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(v14),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v18 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v18 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v19);
    if ( v18
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v18 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v18 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12);
      v31 = DomainLockRef;
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      {
        v36 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
      }
      if ( ExIsResourceAcquiredExclusiveLite(*v31) == 1 )
      {
        v36 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1293LL);
      }
      ExEnterCriticalRegionAndAcquireResourceExclusive(*v31);
      v32 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v32[2];
          v33 = *v32;
          v32[2] = 0LL;
          if ( !*(_DWORD *)(v33 + 8) )
          {
            v36 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4307LL);
          }
          v34 = (PERESOURCE *)GetDomainLockRef(12);
          if ( v34 == (PERESOURCE *)&gDomainDummyLock )
          {
            v37 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v34);
          HMUnlockObject(*v32);
          tagDomLock::LockExclusive(v34);
          v32 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v1 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v31);
    }
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
      256LL,
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
    gpEventPnPWainting = (__int64)CreateKernelEvent(SynchronizationEvent, 1u);
    if ( !gpEventPnPWainting
      || (FastGetProfileIntFromID(0, 39, 0x268u, 1, &gbSnapShotWindowsAndMonitors, 0),
          FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, &gdwWaitToKillServiceTimeout, 0),
          *((_DWORD *)gpsi + 559) |= 4u,
          (gpEventDiconnectDesktop = (__int64)CreateKernelEvent(SynchronizationEvent, 0)) == 0) )
    {
      ObjectDirectory = -1073741801;
      goto LABEL_52;
    }
    if ( !gbNonServiceSession || gbFirstInteractiveSession )
    {
      ObjectDirectory = ReserveUserSessionViews(&Object, &MappedBase);
      if ( ObjectDirectory < 0 )
        goto LABEL_52;
      if ( !InitVideo(v50) )
      {
        ObjectDirectory = DrvDriverFailure();
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        goto LABEL_52;
      }
      MmUnmapViewInSessionSpace(MappedBase);
      ObfDereferenceObject(Object);
      gbVideoInitialized = 1;
      DestinationString[0] = 2LL;
      ZwPowerInformation(SystemPowerStateLogging|0x40, DestinationString, 8u, 0LL, 0);
    }
    v23 = KeGetCurrentThread();
    gbUserInitialized = 1;
    ObjectDirectory = xxxCreateThreadInfo(v23);
    if ( ObjectDirectory >= 0 )
    {
      if ( giDelayedPowerTimeout )
      {
        xxxSystemParametersInfo(0x51u, giDelayedPowerTimeout, 0LL, 0);
        xxxSystemParametersInfo(0x52u, giDelayedPowerTimeout, 0LL, 0);
        giDelayedPowerTimeout = 0;
      }
      ObjectDirectory = InitializeRemoteSessionOcclusionEvent();
      if ( ObjectDirectory >= 0 )
      {
        if ( (!gbNonServiceSession || gbFirstInteractiveSession) && qword_1C0256DA8 )
          qword_1C0256DA8();
        if ( gbFirstInteractiveSession && !gbSetupDPIInitialized && gbNonServiceSession )
          SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v50);
        InitLoadResources(0LL);
        *(_OWORD *)&DestinationString[1] = 0LL;
        ResultLength = 0;
        v37 = gdwPolicyFlags;
        do
        {
          v24 = OpenCacheKeyEx(0LL, 51LL, 0x20019u, &v37);
          if ( !v24 )
          {
            v1 = 0;
            goto LABEL_44;
          }
          RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ConvertibleSlateMode");
          if ( ZwQueryValueKey(
                 v24,
                 (PUNICODE_STRING)&DestinationString[1],
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x14u,
                 &ResultLength) < 0 )
          {
            v1 = v37 != 0 ? v1 : 0;
          }
          else
          {
            v1 = v61;
            v37 = 0;
          }
          ZwClose(v24);
        }
        while ( v37 );
        if ( !v1 )
        {
LABEL_44:
          *((_DWORD *)gpsi + 559) &= ~8u;
          goto LABEL_45;
        }
        *((_DWORD *)gpsi + 559) |= 8u;
LABEL_45:
        ValueName = 0LL;
        v42[0] = 0;
        v36 = gdwPolicyFlags;
        do
        {
          v25 = OpenCacheKeyEx(0LL, 51LL, 0x20019u, &v36);
          if ( !v25 )
            goto LABEL_51;
          RtlInitUnicodeString(&ValueName, L"SystemDockMode");
          if ( ZwQueryValueKey(v25, &ValueName, KeyValuePartialInformation, v62, 0x14u, v42) < 0 )
          {
            v1 = v36 != 0 ? v1 : 0;
          }
          else
          {
            v1 = v63;
            v36 = 0;
          }
          ZwClose(v25);
        }
        while ( v36 );
        if ( !v1 )
        {
LABEL_51:
          *((_DWORD *)gpsi + 559) &= ~0x10u;
          goto LABEL_52;
        }
        *((_DWORD *)gpsi + 559) |= 0x10u;
      }
    }
  }
LABEL_52:
  KeSetEvent(gpevtVideoInitialized, 1, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v26, 14, 23, (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  }
  UserSessionSwitchLeaveCrit();
  return (unsigned int)ObjectDirectory;
}
