/*
 * XREFs of Win32kBaseDriverEntry @ 0x1C029A770
 * Callers:
 *     <none>
 * Callees:
 *     GetWin32kDriverObject @ 0x1C0004EF0 (GetWin32kDriverObject.c)
 *     RtlLoadStringOrError @ 0x1C0010F50 (RtlLoadStringOrError.c)
 *     HMUnlockObject @ 0x1C002EA10 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030200 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0037480 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C00394B0 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     IsValidGuiThreadContext @ 0x1C003A9B4 (IsValidGuiThreadContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003AAE8 (EnterCritAvoidingDitHitTestHazard.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003AFF4 (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003B070 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     CreateKernelEvent @ 0x1C0058E20 (CreateKernelEvent.c)
 *     PowerIsDimTimeOutManual @ 0x1C0068494 (PowerIsDimTimeOutManual.c)
 *     InitializeWin32KSyscallFilter @ 0x1C0069460 (InitializeWin32KSyscallFilter.c)
 *     Win32AllocPagedLookasideList @ 0x1C006C190 (Win32AllocPagedLookasideList.c)
 *     RIMInitialize @ 0x1C006CD60 (RIMInitialize.c)
 *     CoreMsgInitialize @ 0x1C0075708 (CoreMsgInitialize.c)
 *     InputInitialize @ 0x1C008B0FC (InputInitialize.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C0098EC0 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     InitializeWin32kCall @ 0x1C009C580 (InitializeWin32kCall.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C00ABCF0 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?InitializeUserTypeIsolation@@YA_NXZ @ 0x1C00AEF80 (-InitializeUserTypeIsolation@@YA_NXZ.c)
 *     CreateKernelSemaphore @ 0x1C00AFED0 (CreateKernelSemaphore.c)
 *     OPMInitialize @ 0x1C00B08D8 (OPMInitialize.c)
 *     WinSqmStartSession @ 0x1C00B1600 (WinSqmStartSession.c)
 *     InitializeGraphicsInfrastructure @ 0x1C00B2824 (InitializeGraphicsInfrastructure.c)
 *     WinSqmIsOptedInEx @ 0x1C00B3090 (WinSqmIsOptedInEx.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C00B3464 (InitializeTelemetryAssertsKMByName.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C00B54D0 (-CheckInitialSessions@@YAJXZ.c)
 *     ApiSetEditionInitializeMoveSizeList @ 0x1C00B6F70 (ApiSetEditionInitializeMoveSizeList.c)
 *     IsTelemetryAssertsSupported @ 0x1C00B7FB0 (IsTelemetryAssertsSupported.c)
 *     IsUserkTraceLoggingSupported @ 0x1C00B7FDC (IsUserkTraceLoggingSupported.c)
 *     McGenEventRegister_EtwRegister @ 0x1C00B8654 (McGenEventRegister_EtwRegister.c)
 *     RetrieveCurrentDisplayState @ 0x1C00C4B44 (RetrieveCurrentDisplayState.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C011BB50 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     SysEntryGetW32pServiceLimitFilter @ 0x1C01FC7BC (SysEntryGetW32pServiceLimitFilter.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C027E5D8 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C027E6CC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     wil_InitializeFeatureStaging @ 0x1C0297078 (wil_InitializeFeatureStaging.c)
 *     Win32UserInitialize @ 0x1C0297BBC (Win32UserInitialize.c)
 *     InitializeGre @ 0x1C02990FC (InitializeGre.c)
 *     InitCreateUserCrit @ 0x1C0299C78 (InitCreateUserCrit.c)
 */

__int64 __fastcall Win32kBaseDriverEntry(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int CurrentDisplayState; // ebx
  struct _DRIVER_OBJECT *v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char v10; // al
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  char v15; // dl
  int v16; // eax
  int v17; // eax
  struct _KEVENT *PoolWithTag; // rax
  __int64 v19; // rdi
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rbx
  unsigned int W32pServiceLimitFilter; // eax
  __int64 v25; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  PVOID *DomainLockRef; // rbx
  __int64 *v33; // rdi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  HANDLE CurrentProcessId; // rax
  __int64 v42; // [rsp+50h] [rbp-B8h] BYREF
  __int64 SystemInformation; // [rsp+58h] [rbp-B0h] BYREF
  PERESOURCE *v44; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD OutputBuffer[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+B8h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v49[32]; // [rsp+F8h] [rbp-10h] BYREF
  _WORD v50[80]; // [rsp+118h] [rbp+10h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  SystemInformation = 0LL;
  if ( (int)wil_InitializeFeatureStaging() < 0 )
  {
    if ( wil_details_featureChangeNotification )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      wil_details_featureChangeNotification = 0LL;
    }
    return 3221225473LL;
  }
  CurrentDisplayState = InitializeWin32kCall(v3, v2);
  if ( CurrentDisplayState < 0 )
  {
    if ( wil_details_featureChangeNotification )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      wil_details_featureChangeNotification = 0LL;
    }
    return (unsigned int)CurrentDisplayState;
  }
  InitializeTelemetryAssertsKMByName();
  EnsureRequiredApiSetExtensions();
  gpKbdTbl = (__int64)KbdTablesFallback;
  gpusMouseVKey = (__int64)&ausMouseVKey;
  gSessionId = PsGetCurrentProcessSessionId();
  gServiceSessionId = RtlGetCurrentServiceSessionId();
  DestinationString = 0LL;
  CurrentDisplayState = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  if ( gSessionId )
  {
    if ( gpWin32kDriverObject )
      goto LABEL_15;
    GetWin32kDriverObject();
  }
  else
  {
    gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CurrentDisplayState = IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    dword_1C024F694 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
  }
  if ( !gpWin32kDriverObject )
    CurrentDisplayState = -1073741823;
LABEL_15:
  if ( dword_1C0254E00 == 1 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C0256EF0 )
    qword_1C0256EF0();
  if ( CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = InitializeWppLogging(v6);
    if ( CurrentDisplayState >= 0 )
    {
      v7 = qword_1C0255D20 ? qword_1C0255D20() : -1073741637;
      if ( v7 >= 0 )
      {
        if ( qword_1C0255D28 )
          CurrentDisplayState = qword_1C0255D28();
        else
          CurrentDisplayState = -1073741637;
      }
    }
  }
  if ( dword_1C0254E00 == 2 )
    CurrentDisplayState = -1073741801;
  if ( qword_1C0256CE0 )
    v8 = qword_1C0256CE0();
  else
    v8 = -1073741637;
  if ( v8 >= 0 )
  {
    v9 = qword_1C0256CE8 ? qword_1C0256CE8() : 0;
    if ( !v9 && CurrentDisplayState >= 0 )
      CurrentDisplayState = -1073741801;
  }
  if ( dword_1C0254E00 == 3 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
  {
    LODWORD(SystemInformation) = 8;
    CurrentDisplayState = ZwQuerySystemInformation(
                            MaxSystemInfoClass|SystemProcessInformation,
                            &SystemInformation,
                            8u,
                            0LL);
    if ( CurrentDisplayState < 0 || (v10 = 1, (SystemInformation & 0x200000000LL) == 0) )
      v10 = 0;
    gbOSTestSigningEnabled = v10;
    WdInitialize();
    TlgRegisterAggregateProviderEx(&dword_1C0245378);
  }
  if ( dword_1C0254E00 == 4 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure();
  v11 = 64LL;
  if ( dword_1C0254E00 == 5 )
    CurrentDisplayState = -1073741801;
  gdwHydraHint |= 1u;
  gpvWin32kImageBase = *(PVOID *)(a1 + 24);
  qword_1C0252B68 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  qword_1C0252B58 = (__int64)&gtmrAdjustmentListHead;
  gtmrAdjustmentListHead = (__int64)&gtmrAdjustmentListHead;
  v12 = &gTimerHashTable;
  do
  {
    v12[1] = v12;
    *v12 = v12;
    v12 += 2;
    --v11;
  }
  while ( v11 );
  memset(&gTimerId, 0, 0xFE0uLL);
  qword_1C0251768 = (__int64)&gPendingNotifiesList;
  gPendingNotifiesList = (__int64)&gPendingNotifiesList;
  ApiSetEditionInitializeMoveSizeList();
  if ( qword_1C0255C90 )
    v13 = qword_1C0255C90();
  else
    v13 = -1073741637;
  if ( v13 >= 0 && qword_1C0255C98 )
    qword_1C0255C98();
  if ( qword_1C0255CA0 )
    v14 = qword_1C0255CA0();
  else
    v14 = -1073741637;
  if ( v14 >= 0 && qword_1C0255CA8 )
    qword_1C0255CA8();
  if ( BCryptGenRandom(0LL, &gCookie, 8u, 2u) < 0 )
    goto LABEL_80;
  *(_QWORD *)&gCookie &= ~0x8000000000000000uLL;
  if ( qword_1C0255D00 )
    v16 = qword_1C0255D00();
  else
    v16 = -1073741637;
  if ( v16 >= 0 && qword_1C0255D08 )
    qword_1C0255D08(1LL);
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  v17 = CheckInitialSessions();
  CurrentDisplayState = v17;
  if ( v17 && v17 != -1073741771 )
  {
    if ( v17 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_80;
  }
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
    RtlSetActiveConsoleId((unsigned int)gSessionId);
  if ( qword_1C0254F98 )
    qword_1C0254F98(Win32KDriverUnload);
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
  gpW32FastMutex = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_89;
  PoolWithTag->Header.LockNV = 1;
  PoolWithTag->Header.WaitListHead.Flink = 0LL;
  LODWORD(PoolWithTag->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(PoolWithTag + 1, SynchronizationEvent, 0);
  gpStackRefLookAside = (void *)Win32AllocPagedLookasideList(16LL, 0x616C7355u, 0x6C6F7355u, 0xFFFEu);
  if ( !gpStackRefLookAside || !(unsigned __int8)InitializeUserTypeIsolation() )
    goto LABEL_89;
  if ( !gSessionId )
  {
    v19 = qword_1C0254F60 ? qword_1C0254F60() : 0LL;
    v20 = qword_1C0254F58 ? qword_1C0254F58() : 0;
    v21 = qword_1C0254F50 ? qword_1C0254F50() : 0LL;
    KeAddSystemServiceTable(v21, gpCountTable, v20, v19, 1);
    if ( !gSessionId )
    {
      if ( qword_1C0254F80 )
        v22 = qword_1C0254F80();
      else
        v22 = 0LL;
      if ( qword_1C0254F70 )
        v23 = qword_1C0254F70();
      else
        v23 = 0LL;
      W32pServiceLimitFilter = (unsigned int)SysEntryGetW32pServiceLimitFilter();
      KeAddSystemServiceTable(v23, gpCountTable, W32pServiceLimitFilter, v22, 2);
    }
  }
  if ( !(unsigned int)InitCreateUserCrit() )
    goto LABEL_89;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v25);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v49, 1);
  v27 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v49, v28, v29, v30);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v27;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v44);
    while ( 1 )
    {
      v33 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v31 = *v33;
      v33[2] = 0LL;
      if ( !*(_DWORD *)(v31 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4307);
      DomainLockRef = (PVOID *)GetDomainLockRef(12);
      if ( DomainLockRef == gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 490);
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)*DomainLockRef);
      HMUnlockObject(*v33);
      tagDomLock::LockExclusive((PERESOURCE *)DomainLockRef);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*v44);
  }
  CurrentDisplayState = InitializeWin32KSyscallFilter();
  if ( CurrentDisplayState < 0 )
  {
    UserSessionSwitchLeaveCrit();
    goto LABEL_80;
  }
  UserSessionSwitchLeaveCrit();
  if ( !gSessionId )
  {
    if ( !qword_1C0254F88 || (qword_1C0254F88(), !gSessionId) )
      DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  KeQueryPerformanceCounter(&gliQpcFreq);
  RIMInitialize();
  CurrentDisplayState = CoreMsgInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  if ( qword_1C0255CB0 )
    v34 = qword_1C0255CB0();
  else
    v34 = -1073741637;
  if ( v34 >= 0 && qword_1C0255CB8 )
    qword_1C0255CB8(&gMagnContext);
  McGenEventRegister_EtwRegister();
  if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C0256ED8 )
    qword_1C0256ED8();
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
              (ULONGLONG *)&dword_1C0249250,
              (unsigned __int16 *)W32kTraceLoggingEnableCallback,
              0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2271);
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_1C0249218, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2275);
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_1C02491A8, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2279);
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
              (ULONGLONG *)&dword_1C0249170,
              (unsigned __int16 *)W32kBaseInputEnableCallback,
              0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2283);
  if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
              (ULONGLONG *)&dword_1C024AA90,
              (unsigned __int16 *)InputCoreProviderCallback,
              0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2287);
  InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside = (void *)Win32AllocPagedLookasideList(
                                                                      72LL,
                                                                      0x616C7355u,
                                                                      0x6C6F7355u,
                                                                      0x10u);
  if ( !InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2291);
  gbTraceLoggingInitialized = 1;
  TlgRegisterAggregateProviderEx(&dword_1C02491E0);
  gSqmSession = (struct _GUID *)WinSqmStartSession();
  gSqmIsOptedIn = WinSqmIsOptedInEx(1);
  if ( qword_1C0255CC0 )
    v35 = qword_1C0255CC0();
  else
    v35 = -1073741637;
  if ( v35 >= 0 && qword_1C0255CC8 )
    qword_1C0255CC8();
  if ( qword_1C0255CD0 )
    v36 = qword_1C0255CD0();
  else
    v36 = -1073741637;
  if ( v36 >= 0 && qword_1C0255CD8 )
    qword_1C0255CD8();
  gpevtPTPOperation = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtPTPOperation )
    goto LABEL_89;
  gpevtSynthesizedContainerMouseInput = CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtSynthesizedContainerMouseInput )
    goto LABEL_89;
  gpevtDesktopDestroyed = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtDesktopDestroyed )
    goto LABEL_89;
  gpevtVideoInitialized = CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtVideoInitialized )
    goto LABEL_89;
  gpevtQueueReadyForCallout = CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtQueueReadyForCallout )
    goto LABEL_89;
  gpevtVideoportCallout = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtVideoportCallout )
    goto LABEL_89;
  gpevtRitReadyForCallOut = (__int64)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtRitReadyForCallOut )
    goto LABEL_89;
  gfMonitorPowerInProgress = 0;
  gpevtMonitorPowerWaiter = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtMonitorPowerWaiter )
    goto LABEL_89;
  gcSwitchInProgressWaiters = 0;
  gpsemSwitchInProgressWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemSwitchInProgressWaiters
    || (gcDITHitTestWaiters = 0, (gpsemDITHitTestWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0LL)
    || (gcDITLuidHitTestWaiters = 0, (gpsemDITLuidHitTestWaiters = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0)
    || (hModuleWinKernel = MmPageEntireDriver(Win32kBaseDriverEntry)) == 0LL
    || (RtlLoadStringOrError(0x268u, v50, 80, 0), hModuleWin = MmUserProbeAddress, !InitializeGre()) )
  {
LABEL_89:
    CurrentDisplayState = -1073741801;
    goto LABEL_80;
  }
  CurrentDisplayState = Win32UserInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  gSessionCreationTime = MEMORY[0xFFFFF78000000008];
  CurrentDisplayState = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x40u);
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    gPlatformRole = 1;
  gbTtmEnabled = OutputBuffer[7];
  giPowerOffTimeOutMs = 1000 * LODWORD(OutputBuffer[2]);
  dword_1C0251194 = LODWORD(OutputBuffer[3]) == 1;
  dword_1C02511A0 = HIDWORD(OutputBuffer[3]) == 0;
  dword_1C02511BC = LOBYTE(OutputBuffer[6]);
  dword_1C02511B4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C025119C = 1;
  dword_1C02511C0 = HIDWORD(OutputBuffer[6]) != 0;
  dword_1C0251210 = 1;
  qword_1C02511D8 = 0LL;
  qword_1C02511F0 = 0LL;
  qword_1C02511E8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  qword_1C02511F8 = 0LL;
  qword_1C0251200 = 0LL;
  v37 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  gpbIgnoreSleepInput = OutputBuffer[0];
  gpbInHiberBoot = OutputBuffer[1];
  qword_1C02511E0 = (v37 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  dword_1C0251208 = 0;
  dword_1C02511C8 = 0;
  giDimTimeOutMs = 1000 * HIDWORD(OutputBuffer[2]);
  qword_1C0251228 = OutputBuffer[5];
  dword_1C0251220 = HIDWORD(OutputBuffer[4]);
  dword_1C0251218 = OutputBuffer[4];
  dword_1C02511C4 = BYTE1(OutputBuffer[6]);
  gbManualDimTimeOut = PowerIsDimTimeOutManual((const unsigned __int16 *)v37);
  dword_1C0251234 = dword_1C0251218;
  dword_1C0251244 = dword_1C0251220;
  dword_1C0251238 = -1;
  dword_1C025123C = -1;
  dword_1C0251240 = -1;
  dword_1C0251248 = -1;
  dword_1C025124C = -1;
  dword_1C0251250 = -1;
  byte_1C0251254 = 0;
  dword_1C0251230 = -1;
  gbPowerHighPrecisionBrightnessSupported = 0;
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState < 0 )
      goto LABEL_80;
    LODWORD(v42) = gPowerTransitionsState != 0 ? 3 : 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v42, 4LL, 0LL, 0LL, 0, 0);
  }
  ExInitializeRundownProtection(&gWinstaRunRef);
  if ( (int)InputInitialize() < 0 )
    goto LABEL_80;
  CurrentDisplayState = OPMInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_80;
  v38 = qword_1C0255CE0 ? qword_1C0255CE0() : -1073741637;
  if ( v38 >= 0 )
  {
    CurrentDisplayState = qword_1C0255CE8 ? qword_1C0255CE8() : -1073741637;
    if ( CurrentDisplayState < 0 )
      goto LABEL_80;
  }
  v39 = qword_1C0255CF0 ? qword_1C0255CF0() : -1073741637;
  if ( v39 >= 0
    && (!qword_1C0255CF8 ? (CurrentDisplayState = -1073741637) : (CurrentDisplayState = qword_1C0255CF8()),
        CurrentDisplayState < 0)
    || (!qword_1C0256EB0 ? (v40 = -1073741637) : (v40 = qword_1C0256EB0()),
        v40 >= 0
     && (!qword_1C0256EB8 ? (CurrentDisplayState = -1073741637) : (CurrentDisplayState = qword_1C0256EB8()),
         CurrentDisplayState < 0)) )
  {
LABEL_80:
    Win32KDriverUnload(0LL, v15);
    if ( CurrentDisplayState == -1073741822 )
      return (unsigned int)-1073741637;
    return (unsigned int)CurrentDisplayState;
  }
  if ( gSessionId )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    CurrentProcessId = PsGetCurrentProcessId();
    ClientId.UniqueThread = 0LL;
    ClientId.UniqueProcess = CurrentProcessId;
    if ( ZwOpenProcess(&ghSMSS, 0x1000u, &ObjectAttributes, &ClientId) < 0 )
      ghSMSS = 0LL;
  }
  return 0LL;
}
