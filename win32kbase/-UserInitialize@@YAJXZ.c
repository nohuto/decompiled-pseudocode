__int64 UserInitialize(void)
{
  int v0; // edx
  int v1; // r8d
  int v2; // r15d
  PDEVICE_OBJECT v3; // rcx
  char v4; // di
  __int64 v5; // r8
  PVOID Reserved; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  struct tagTHREADINFO **v10; // r12
  __int64 v11; // rsi
  LARGE_INTEGER PerformanceCounter; // r14
  LONGLONG v13; // rbx
  int v14; // r8d
  struct tagTHREADINFO *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 CurrentProcessWin32Process; // rax
  HANDLE v21; // rcx
  int ObjectDirectory; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  void *v33; // rsi
  void *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r8
  PDEVICE_OBJECT v37; // rcx
  void *v38; // rdx
  __int64 v40; // rax
  struct tagKERNELHANDLETABLEENTRY *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  ULONG Length[2]; // [rsp+28h] [rbp-A9h]
  ULONG ResultLength[2]; // [rsp+48h] [rbp-89h] BYREF
  PVOID MappedBase; // [rsp+50h] [rbp-81h] BYREF
  PVOID Object; // [rsp+58h] [rbp-79h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-69h] BYREF
  _QWORD v58[10]; // [rsp+78h] [rbp-59h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+C8h] [rbp-9h] BYREF
  int v60; // [rsp+D4h] [rbp+3h]
  _BYTE v61[12]; // [rsp+E0h] [rbp+Fh] BYREF
  int v62; // [rsp+ECh] [rbp+1Bh]

  memset(v58, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v58[1]);
  v2 = 0;
  v58[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v58[3]) = 28;
  LOBYTE(v58[6]) = -1;
  Object = 0LL;
  MappedBase = 0LL;
  InputBuffer = 0LL;
  v3 = WPP_GLOBAL_Control;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(v0) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v0) = 0;
  }
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v1) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v1,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      23,
      (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
  }
  v5 = 0x200000010000000LL;
  if ( dword_1C02C93D8 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL)
    || (Reserved = WPP_MAIN_CB.Reserved,
        v8 = 0x8000002010000000uLL,
        ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
    && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
    || ((__int64)WPP_MAIN_CB.Reserved & v5) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (v5 & qword_1C02C4050) != 0
    && (v5 & qword_1C02C4058) == qword_1C02C4058 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  v9 = SGDGetUserSessionState(v3, Reserved, v5, v8);
  v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v9 + 8));
  if ( !v10 )
  {
    EtwTraceAcquiredExclusiveUserCrit();
LABEL_97:
    gptiCurrent = 0LL;
    goto LABEL_28;
  }
  if ( (unsigned int)IsEtwUserCritEnabled() )
  {
    v11 = PsGetCurrentThreadWin32Thread();
    if ( v11 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v13 = PerformanceCounter.QuadPart - *(_QWORD *)(v11 + 8);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(&unk_1C02D1910, 0, 0x1128uLL);
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
        xmmword_1C02D2BD8 = 0LL;
      }
      UserCritTelemetry::UpdateUserCritInfo(&unk_1C02D1910, v13, 0LL);
      if ( (dword_1C02D1900 & 1) == 0 )
      {
        dword_1C02D1900 |= 1u;
        memset(&unk_1C02D1910, 0, 0x1128uLL);
        word_1C02D2A38 = 0;
        byte_1C02D2A3A = 0;
        memset(&unk_1C02D2A40, 0, 0x168uLL);
        qword_1C02D2BB8 = 0LL;
        qword_1C02D2BD0 = 0LL;
        xmmword_1C02D2BA8 = 0LL;
        qword_1C02D2BE8 = 0LL;
        xmmword_1C02D2BC0 = 0LL;
        xmmword_1C02D2BF0 = 0uLL;
        xmmword_1C02D2BD8 = 0LL;
      }
      UserCritTelemetry::SendUserCritSummary((UserCritTelemetry *)&unk_1C02D1910);
      *(LARGE_INTEGER *)(v11 + 8) = PerformanceCounter;
      if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        McTemplateK0xqx_EtwWriteTransfer(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v14,
          v13,
          1000000 * v13 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      if ( v13 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
        && (signed __int64)(PerformanceCounter.QuadPart
                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0xqx_EtwWriteTransfer(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v14,
            v13,
            1000 * v13 / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      }
      *(_QWORD *)(v11 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
  }
  v15 = *v10;
  if ( (unsigned int)IsThreadCrossSessionAttached() )
    goto LABEL_97;
  gptiCurrent = v15;
  if ( v15 )
  {
    *((_DWORD *)v15 + 387) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
        && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
      {
        while ( 1 )
        {
          v41 = gpSharedUserCritDeferredUnlockListHead;
          if ( !gpSharedUserCritDeferredUnlockListHead )
            break;
          gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                       + 2);
          v40 = *(_QWORD *)v41;
          *((_QWORD *)v41 + 2) = 0LL;
          if ( !*(_DWORD *)(v40 + 8) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
          HMUnlockObject(*(_QWORD *)v41);
        }
      }
    }
  }
LABEL_28:
  v21 = ghSMSS;
  if ( ghSMSS && gpidLogon )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  gdwHydraHint |= 2u;
  if ( gbNonServiceSession )
  {
    Length[0] = *(_DWORD *)SGDGetUserSessionState(v21, v16, v18, v19);
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
    RtlStringCchCopyW(szWindowStationDirectory, 0x100uLL, L"\\Windows\\WindowStations");
  }
  ObjectDirectory = InitCreateObjectDirectory();
  if ( ObjectDirectory >= 0 )
  {
    gpEventPnPWainting = (void *)CreateKernelEvent(SynchronizationEvent);
    if ( !gpEventPnPWainting )
      goto LABEL_114;
    FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, &gdwWaitToKillServiceTimeout, 0);
    *((_DWORD *)gpsi + 559) |= 4u;
    gpEventDiconnectDesktop = (void *)CreateKernelEvent(SynchronizationEvent);
    if ( !gpEventDiconnectDesktop )
      goto LABEL_114;
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
          goto LABEL_61;
      }
      if ( !InitVideo((__int64)v58) )
      {
        ObjectDirectory = DrvDriverFailure();
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        goto LABEL_61;
      }
      MmUnmapViewInSessionSpace(MappedBase);
      ObfDereferenceObject(Object);
      gbVideoInitialized = 1;
      InputBuffer = 2LL;
      ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, 0LL, 0);
    }
    gbUserInitialized = 1;
    ObjectDirectory = xxxCreateThreadInfo(KeGetCurrentThread());
    if ( ObjectDirectory < 0 )
      goto LABEL_61;
    if ( *(_DWORD *)(SGDGetUserSessionState(v24, v23, v25, v26) + 2860) )
    {
      v42 = SGDGetUserSessionState(v28, v27, v29, v30);
      xxxSystemParametersInfo(0x51u, *(_DWORD *)(v42 + 2860));
      v47 = SGDGetUserSessionState(v44, v43, v45, v46);
      xxxSystemParametersInfo(0x52u, *(_DWORD *)(v47 + 2860));
      *(_DWORD *)(SGDGetUserSessionState(v49, v48, v50, v51) + 2860) = 0;
    }
    LOBYTE(v27) = 1;
    gpRemoteSessionOcclusionEvent = (PVOID)CreateKernelEventObject(v28, v27);
    if ( !gpRemoteSessionOcclusionEvent )
    {
LABEL_114:
      ObjectDirectory = -1073741801;
      goto LABEL_61;
    }
    ObjectDirectory = 0;
    if ( (!gbNonServiceSession || gbFirstInteractiveSession) && qword_1C02D63B0 )
      qword_1C02D63B0();
    if ( !gbFirstInteractiveSession
      || !gbNonServiceSession
      || gbSetupDPIInitialized
      || (ObjectDirectory = SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v58), ObjectDirectory >= 0) )
    {
      InitLoadResources(0, v31, v32);
      DestinationString = 0LL;
      ResultLength[1] = 0;
      ResultLength[0] = gdwPolicyFlags;
      do
      {
        v33 = (void *)OpenCacheKeyEx(0LL);
        if ( !v33 )
        {
          v2 = 0;
          goto LABEL_51;
        }
        RtlInitUnicodeString(&DestinationString, L"ConvertibleSlateMode");
        if ( ZwQueryValueKey(
               v33,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength[1]) >= 0 )
        {
          v2 = v60;
          ResultLength[0] = 0;
        }
        else
        {
          v2 = ResultLength[0] != 0 ? v2 : 0;
        }
        ZwClose(v33);
      }
      while ( ResultLength[0] );
      if ( !v2 )
      {
LABEL_51:
        *((_DWORD *)gpsi + 559) &= ~8u;
        goto LABEL_52;
      }
      *((_DWORD *)gpsi + 559) |= 8u;
LABEL_52:
      DestinationString = 0LL;
      ResultLength[1] = 0;
      ResultLength[0] = gdwPolicyFlags;
      do
      {
        v34 = (void *)OpenCacheKeyEx(0LL);
        if ( !v34 )
          goto LABEL_58;
        RtlInitUnicodeString(&DestinationString, L"SystemDockMode");
        if ( ZwQueryValueKey(v34, &DestinationString, KeyValuePartialInformation, v61, 0x14u, &ResultLength[1]) >= 0 )
        {
          v2 = v62;
          ResultLength[0] = 0;
        }
        else
        {
          v2 = ResultLength[0] != 0 ? v2 : 0;
        }
        ZwClose(v34);
      }
      while ( ResultLength[0] );
      if ( !v2 )
      {
LABEL_58:
        *((_DWORD *)gpsi + 559) &= ~0x10u;
        goto LABEL_59;
      }
      *((_DWORD *)gpsi + 559) |= 0x10u;
LABEL_59:
      if ( qword_1C02D6250 )
        qword_1C02D6250();
    }
  }
LABEL_61:
  KeSetEvent(gpevtVideoInitialized, 1, 0);
  v37 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v38 = &WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids;
    LOBYTE(v38) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v38,
      v36,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      24,
      (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids);
  }
  UserSessionSwitchLeaveCrit(v37, v35, v36);
  return (unsigned int)ObjectDirectory;
}
