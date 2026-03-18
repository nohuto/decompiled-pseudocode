/*
 * XREFs of Win32kBaseDriverEntry @ 0x1C02E4310
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0022CC0 (IsThreadCrossSessionAttached.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028F90 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     InputInitialize @ 0x1C0052DC4 (InputInitialize.c)
 *     DCEInUseCountTelemetryInit @ 0x1C005512C (DCEInUseCountTelemetryInit.c)
 *     RIMInitialize @ 0x1C0056920 (RIMInitialize.c)
 *     IsTelemetryAssertsSupported @ 0x1C005B2D4 (IsTelemetryAssertsSupported.c)
 *     ?InitializeWin32PoolTracking@@YAHXZ @ 0x1C005B300 (-InitializeWin32PoolTracking@@YAHXZ.c)
 *     McGenEventRegister_EtwRegister @ 0x1C005B3B8 (McGenEventRegister_EtwRegister.c)
 *     IsUserkTraceLoggingSupported @ 0x1C005B3F8 (IsUserkTraceLoggingSupported.c)
 *     ApiSetEditionInitializeMoveSizeList @ 0x1C005B424 (ApiSetEditionInitializeMoveSizeList.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C005B520 (-CheckInitialSessions@@YAJXZ.c)
 *     ?VerifyDWMApiSetImplementation@@YAJXZ @ 0x1C005B67C (-VerifyDWMApiSetImplementation@@YAJXZ.c)
 *     WinSqmStartSession @ 0x1C005B74C (WinSqmStartSession.c)
 *     PowerIsDimTimeOutManual @ 0x1C005BAA4 (PowerIsDimTimeOutManual.c)
 *     OPMInitialize @ 0x1C005BC28 (OPMInitialize.c)
 *     WinSqmIsOptedInEx @ 0x1C005BE90 (WinSqmIsOptedInEx.c)
 *     GetWin32kDriverObject @ 0x1C005C0C0 (GetWin32kDriverObject.c)
 *     CreateKernelEvent @ 0x1C005D9C0 (CreateKernelEvent.c)
 *     CreateKernelEventObject @ 0x1C005DED8 (CreateKernelEventObject.c)
 *     CreateKernelSemaphore @ 0x1C005EA70 (CreateKernelSemaphore.c)
 *     RtlLoadStringOrError @ 0x1C00612C0 (RtlLoadStringOrError.c)
 *     RetrieveCurrentDisplayState @ 0x1C007E83C (RetrieveCurrentDisplayState.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C008B8F0 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolati.c)
 *     InitializeWin32KSyscallFilter @ 0x1C00969C0 (InitializeWin32KSyscallFilter.c)
 *     CoreMsgInitialize @ 0x1C00A9F00 (CoreMsgInitialize.c)
 *     InitializeWin32kCall @ 0x1C00AB8EC (InitializeWin32kCall.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00AC3EC (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C00BA8C0 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C00BC680 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     InitializeGraphicsInfrastructure @ 0x1C00BE738 (InitializeGraphicsInfrastructure.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C00C0A70 (InitializeTelemetryAssertsKMByName.c)
 *     ?InitializeWin32CrossSessionGlobals@@YAJW4XSessionGlobalAccess@@@Z @ 0x1C00C2F58 (-InitializeWin32CrossSessionGlobals@@YAJW4XSessionGlobalAccess@@@Z.c)
 *     AllocIndex @ 0x1C00D5968 (AllocIndex.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C02C80F8 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C02C81EC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     Win32UserInitialize @ 0x1C02E231C (Win32UserInitialize.c)
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 *     InitCreateUserCrit @ 0x1C02E3F18 (InitCreateUserCrit.c)
 *     ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C02E5A60 (-wil_InitializeFeatureStaging@@YAJXZ.c)
 */

__int64 __fastcall Win32kBaseDriverEntry(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int CurrentDisplayState; // ebx
  int CurrentServiceSessionId; // eax
  char v8; // di
  unsigned __int8 v9; // si
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _DRIVER_OBJECT *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  char v18; // al
  NSInstrumentation::CLeakTrackingAllocator *v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  int v22; // eax
  struct _KEVENT *Pool2; // rax
  NSInstrumentation::CLeakTrackingAllocator *v24; // rcx
  __int64 v25; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  struct tagTHREADINFO **v29; // rbx
  struct tagTHREADINFO *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  bool v36; // sf
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  HANDLE CurrentProcessId; // rax
  LARGE_INTEGER *v47; // rbx
  __int64 v48; // r14
  unsigned int v49; // ebx
  PVOID v50; // r15
  __int64 v51; // rax
  __int64 v52; // r14
  unsigned int v53; // ebx
  PVOID v54; // r15
  __int64 v55; // rax
  NTSTATUS InformationJobObject; // eax
  unsigned int v57; // r8d
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v59; // rax
  __int64 v60; // rcx
  __int64 *v61; // rbx
  BOOL v62; // [rsp+58h] [rbp-B0h] BYREF
  int v63; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 SystemInformation; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD OutputBuffer[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+B8h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  GUID JobInformation[2]; // [rsp+F8h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+118h] [rbp+10h] BYREF
  BOOL *v71; // [rsp+138h] [rbp+30h]
  __int64 v72; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+148h] [rbp+40h] BYREF
  BOOL *v74; // [rsp+168h] [rbp+60h]
  __int64 v75; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+178h] [rbp+70h] BYREF
  BOOL *v77; // [rsp+198h] [rbp+90h]
  __int64 v78; // [rsp+1A0h] [rbp+98h]
  _WORD v79[80]; // [rsp+1A8h] [rbp+A0h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  SystemInformation = 0LL;
  if ( (int)wil_InitializeFeatureStaging() >= 0 )
  {
    CurrentDisplayState = InitializeWin32kCall(v3, v2, v4, v5);
    if ( CurrentDisplayState < 0 )
      goto LABEL_162;
    gSessionId = PsGetCurrentProcessSessionId();
    CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
    v8 = 1;
    gServiceSessionId = CurrentServiceSessionId;
    if ( gSessionId != CurrentServiceSessionId || CurrentServiceSessionId )
    {
      v9 = 0;
      if ( CurrentServiceSessionId )
      {
        memset(JobInformation, 0, sizeof(JobInformation));
        InformationJobObject = ZwQueryInformationJobObject(
                                 0LL,
                                 JobObjectEndOfJobTimeInformation|0x20,
                                 JobInformation,
                                 0x20u,
                                 0LL);
        if ( InformationJobObject < 0 )
          KeBugCheckEx(0x164u, InformationJobObject, 0LL, 0LL, 0LL);
        v10 = JobInformation[0].Data4[4];
LABEL_6:
        gCallerKernelAbiVersion = v10;
        InitializeTelemetryAssertsKMByName();
        CurrentDisplayState = InitializeWin32CrossSessionGlobals(v9 ^ 1u, v11);
        if ( CurrentDisplayState < 0 || v9 && (CurrentDisplayState = AllocIndex(v13, v12, v14), CurrentDisplayState < 0) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
LABEL_162:
          if ( wil_details_featureChangeNotification )
          {
            RtlUnregisterFeatureConfigurationChangeNotification();
            wil_details_featureChangeNotification = 0LL;
          }
          return (unsigned int)CurrentDisplayState;
        }
        EnsureRequiredApiSetExtensions();
        gpKbdTbl = (__int64)KbdTablesFallback;
        gpusMouseVKey = (__int64)&ausMouseVKey;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
        if ( gSessionId )
        {
          if ( gpWin32kDriverObject )
            goto LABEL_13;
          GetWin32kDriverObject();
        }
        else
        {
          gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          CurrentDisplayState = IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
          dword_1C02957CC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          if ( CurrentDisplayState < 0 )
            CurrentDisplayState = 0;
        }
        if ( !gpWin32kDriverObject )
          CurrentDisplayState = -1073741823;
LABEL_13:
        if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C029CB10 )
          qword_1C029CB10();
        if ( CurrentDisplayState >= 0 )
        {
          CurrentDisplayState = InitializeWppLogging(v15);
          if ( CurrentDisplayState >= 0 )
          {
            if ( (unsigned int)InitializeWin32PoolTracking() )
            {
              if ( !(unsigned int)InitCreateUserCrit() )
                goto LABEL_215;
              LODWORD(SystemInformation) = 8;
              CurrentDisplayState = ZwQuerySystemInformation(
                                      MaxSystemInfoClass|SystemProcessInformation,
                                      &SystemInformation,
                                      8u,
                                      0LL);
              if ( CurrentDisplayState < 0 || (v18 = 1, (SystemInformation & 0x200000000LL) == 0) )
                v18 = 0;
              gbOSTestSigningEnabled = v18;
              WdInitialize();
              TlgRegisterAggregateProviderEx(&dword_1C0288378);
              McGenEventRegister_EtwRegister();
              DCEInUseCountTelemetryInit();
              if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C029CAF8 )
                qword_1C029CAF8();
              if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                          (char *)&dword_1C028D6F0,
                          (__int64)W32kTraceLoggingEnableCallback,
                          0LL) < 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1C028D6B8, 0LL, 0LL) < 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1C028D648, 0LL, 0LL) < 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                          (char *)&dword_1C028D610,
                          (__int64)W32kBaseInputEnableCallback,
                          0LL) < 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                          (char *)&dword_1C028EE70,
                          (__int64)InputCoreProviderCallback,
                          0LL) < 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                                                                          v19,
                                                                          0x48uLL,
                                                                          1634497365,
                                                                          0x6C6F7355u,
                                                                          0x10u);
              if ( !InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              TlgRegisterAggregateProviderEx(&dword_1C028D680);
              gbTraceLoggingInitialized = 1;
              if ( CurrentDisplayState >= 0 )
                CurrentDisplayState = InitializeGraphicsInfrastructure();
            }
            else
            {
              CurrentDisplayState = -1073741801;
            }
          }
        }
        gdwHydraHint |= 1u;
        gpvWin32kImageBase = *(PVOID *)(a1 + 24);
        v20 = 64LL;
        qword_1C0298A38 = (__int64)&gtmrListHead;
        gtmrListHead = (__int64)&gtmrListHead;
        qword_1C0298A28 = (__int64)&gtmrAdjustmentListHead;
        gtmrAdjustmentListHead = (__int64)&gtmrAdjustmentListHead;
        v21 = &gTimerHashTable;
        do
        {
          v21[1] = v21;
          *v21 = v21;
          v21 += 2;
          --v20;
        }
        while ( v20 );
        memset(&gTimerId, 0, 0xFE0uLL);
        qword_1C0297638 = (__int64)&gPendingNotifiesList;
        gPendingNotifiesList = (__int64)&gPendingNotifiesList;
        ApiSetEditionInitializeMoveSizeList();
        if ( qword_1C029BA00 && (int)qword_1C029BA00() >= 0 && qword_1C029BA08 )
          qword_1C029BA08();
        if ( qword_1C029BA10 && (int)qword_1C029BA10() >= 0 && qword_1C029BA18 )
          qword_1C029BA18();
        if ( BCryptGenRandom(0LL, &gCookie, 8u, 2u) < 0 )
          goto LABEL_216;
        *(_QWORD *)&gCookie &= ~0x8000000000000000uLL;
        if ( qword_1C029BA70 && (int)qword_1C029BA70() >= 0 && qword_1C029BA78 )
          qword_1C029BA78(1LL);
        if ( CurrentDisplayState < 0 )
          goto LABEL_216;
        v22 = CheckInitialSessions();
        CurrentDisplayState = v22;
        if ( v22 && v22 != -1073741771 )
        {
          if ( v22 >= 0 )
            CurrentDisplayState = -1073741823;
          goto LABEL_216;
        }
        if ( !gbNonServiceSession || gbFirstInteractiveSession )
          RtlSetActiveConsoleId((unsigned int)gSessionId);
        if ( qword_1C029AD28 )
          qword_1C029AD28(Win32KDriverUnload);
        gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 56LL);
        gpW32FastMutex = Pool2;
        if ( Pool2 )
        {
          Pool2->Header.LockNV = 1;
          Pool2->Header.WaitListHead.Flink = 0LL;
          LODWORD(Pool2->Header.WaitListHead.Blink) = 0;
          KeInitializeEvent(Pool2 + 1, SynchronizationEvent, 0);
          gpStackRefLookAside = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                                  v24,
                                  0x10uLL,
                                  1634497365,
                                  0x6C6F7355u,
                                  0xFFFEu);
          if ( gpStackRefLookAside )
          {
            gpUserTypeIsolation = (PVOID)ExAllocatePool2(260LL, 48LL);
            if ( gpUserTypeIsolation )
            {
              if ( TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create() )
              {
                if ( !gSessionId )
                {
                  v48 = qword_1C029ACF0 ? qword_1C029ACF0() : 0LL;
                  v49 = qword_1C029ACE8 ? qword_1C029ACE8() : 0;
                  v50 = gpCountTable;
                  v51 = qword_1C029ACE0 ? qword_1C029ACE0() : 0LL;
                  KeAddSystemServiceTable(v51, v50, v49, v48, 1);
                  if ( !gSessionId )
                  {
                    if ( qword_1C029AD10 )
                      v52 = qword_1C029AD10();
                    else
                      v52 = 0LL;
                    if ( qword_1C029AD08 )
                      v53 = qword_1C029AD08();
                    else
                      v53 = 0;
                    v54 = gpCountTable;
                    if ( qword_1C029AD00 )
                      v55 = qword_1C029AD00();
                    else
                      v55 = 0LL;
                    KeAddSystemServiceTable(v55, v54, v53, v52, 2);
                  }
                }
                if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v25, v16, v17);
                else
                  CurrentThreadWin32Thread = 0LL;
                *(_QWORD *)&JobInformation[0].Data1 = CurrentThreadWin32Thread;
                *(_DWORD *)JobInformation[0].Data4 = 1;
                if ( CurrentThreadWin32Thread
                  && (*(int *)(CurrentThreadWin32Thread + 24) > 0
                   || *(_DWORD *)(*(_QWORD *)&JobInformation[0].Data1 + 48LL)) )
                {
                  EtwActivityIdControl(3u, (LPGUID)&JobInformation[0].Data4[4]);
                  if ( (unsigned int)dword_1C028EE70 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                  {
                    v72 = 4LL;
                    v62 = *(_DWORD *)JobInformation[0].Data4 == 1;
                    v71 = &v62;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C028EE70,
                      (unsigned __int8 *)dword_1C025AD79,
                      (const GUID *)&JobInformation[0].Data4[4],
                      0LL,
                      3u,
                      &v70);
                  }
                }
                if ( dword_1C028D6F0 && tlgKeywordOn((__int64)&dword_1C028D6F0, 0x400000000000LL)
                  || (v27 = W32kEtwEnabledKeyword,
                      v28 = 0x8000002010000000uLL,
                      (W32kEtwEnabledKeyword & 0x8000002010000000uLL) != 0)
                  && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
                  && (qword_1C028DB20 & 0x8000002010000000uLL) != 0
                  && (qword_1C028DB28 & 0x8000002010000000uLL) == qword_1C028DB28
                  || (v28 = 0x200000010000000LL, (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0)
                  && (unsigned __int8)(byte_1C028DB38 - 1) > 2u
                  && (qword_1C028DB20 & 0x200000010000000LL) != 0
                  && (qword_1C028DB28 & 0x200000010000000LL) == qword_1C028DB28 )
                {
                  v47 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v25, v27, v28);
                  if ( v47 )
                    v47[1] = KeQueryPerformanceCounter(0LL);
                }
                v29 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                EtwTraceAcquiredExclusiveUserCrit();
                if ( v29 )
                {
                  v30 = *v29;
                  if ( IsThreadCrossSessionAttached() )
                    v30 = 0LL;
                  if ( *(_QWORD *)&JobInformation[0].Data1 )
                  {
                    v31 = *(unsigned int *)(*(_QWORD *)&JobInformation[0].Data1 + 24LL);
                    if ( *(_DWORD *)(*(_QWORD *)&JobInformation[0].Data1 + 48LL) || (int)v31 > 0 )
                    {
                      *(_DWORD *)(*(_QWORD *)&JobInformation[0].Data1 + 44LL) = 1;
                      *(GUID *)(*(_QWORD *)&JobInformation[0].Data1 + 28LL) = *(GUID *)&JobInformation[0].Data4[4];
                      if ( (unsigned int)dword_1C028EE70 > 6 )
                      {
                        if ( tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                        {
                          v75 = 4LL;
                          v62 = *(_DWORD *)JobInformation[0].Data4 == 1;
                          v74 = &v62;
                          tlgWriteTransfer_EtwWriteTransfer(
                            (__int64)&dword_1C028EE70,
                            (unsigned __int8 *)dword_1C025AD22,
                            (const GUID *)&JobInformation[0].Data4[4],
                            0LL,
                            3u,
                            &v73);
                          v57 = dword_1C028EE70;
                        }
                        if ( v57 > 6 && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
                        {
                          v78 = 4LL;
                          v62 = *(_DWORD *)JobInformation[0].Data4 == 1;
                          v77 = &v62;
                          tlgWriteTransfer_EtwWriteTransfer(
                            (__int64)&dword_1C028EE70,
                            (unsigned __int8 *)dword_1C025AD4F,
                            (const GUID *)&JobInformation[0].Data4[4],
                            0LL,
                            3u,
                            &v76);
                        }
                      }
                    }
                  }
                  gptiCurrent = v30;
                  if ( v30 )
                  {
                    *((_DWORD *)v30 + 377) = 1;
                    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
                    if ( CurrentProcessWin32Process )
                    {
                      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                        && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                        && (*((_DWORD *)gptiCurrent + 314) & 0x80u) == 0 )
                      {
                        while ( 1 )
                        {
                          v61 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                          if ( !gpSharedUserCritDeferredUnlockListHead )
                            break;
                          v59 = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                    + 2);
                          v60 = *(_QWORD *)gpSharedUserCritDeferredUnlockListHead;
                          *((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2) = 0LL;
                          gpSharedUserCritDeferredUnlockListHead = v59;
                          if ( !*(_DWORD *)(v60 + 8) )
                          {
                            MicrosoftTelemetryAssertTriggeredNoArgsKM();
                            v60 = *v61;
                          }
                          HMUnlockObject(v60);
                        }
                      }
                    }
                  }
                }
                else
                {
                  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)JobInformation);
                  gptiCurrent = 0LL;
                }
                CurrentDisplayState = InitializeWin32KSyscallFilter();
                if ( CurrentDisplayState < 0 )
                {
                  UserSessionSwitchLeaveCrit(v33, v32, v34, v35);
                  goto LABEL_216;
                }
                UserSessionSwitchLeaveCrit(v33, v32, v34, v35);
                if ( !gSessionId )
                {
                  if ( !qword_1C029AD18 || (qword_1C029AD18(), !gSessionId) )
                    DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
                }
                KeQueryPerformanceCounter(&gliQpcFreq);
                if ( (int)RtlIsApiSetImplemented("ext-ms-win-composition-init-l1-1-0") < 0
                  || (v36 = (int)VerifyDWMApiSetImplementation() < 0, v37 = 1, v36) )
                {
                  v37 = 0;
                }
                gDWMCapable = v37;
                RIMInitialize();
                CurrentDisplayState = CoreMsgInitialize();
                if ( CurrentDisplayState < 0 )
                  goto LABEL_216;
                if ( qword_1C029BA20 && (int)qword_1C029BA20() >= 0 && qword_1C029BA28 )
                  qword_1C029BA28(&gMagnContext);
                gSqmSession = (struct _GUID *)WinSqmStartSession();
                gSqmIsOptedIn = WinSqmIsOptedInEx(1);
                if ( qword_1C029BA30 && (int)qword_1C029BA30() >= 0 && qword_1C029BA38 )
                  qword_1C029BA38();
                if ( qword_1C029BA40 && (int)qword_1C029BA40() >= 0 && qword_1C029BA48 )
                  qword_1C029BA48();
                gpevtPTPOperation = CreateKernelEventObject(v38, 0);
                if ( gpevtPTPOperation )
                {
                  gpevtSynthesizedContainerMouseInput = CreateKernelEventObject(v39, 0);
                  if ( gpevtSynthesizedContainerMouseInput )
                  {
                    gpevtDesktopDestroyed = (void *)CreateKernelEvent(SynchronizationEvent, 0);
                    if ( gpevtDesktopDestroyed )
                    {
                      gpevtVideoInitialized = (PRKEVENT)CreateKernelEvent(NotificationEvent, 0);
                      if ( gpevtVideoInitialized )
                      {
                        gpevtQueueReadyForCallout = (PRKEVENT)CreateKernelEvent(NotificationEvent, 0);
                        if ( gpevtQueueReadyForCallout )
                        {
                          gpevtVideoportCallout = (PRKEVENT)CreateKernelEvent(NotificationEvent, 1u);
                          if ( gpevtVideoportCallout )
                          {
                            gpevtRitReadyForCallOut = (void *)CreateKernelEvent(NotificationEvent, 0);
                            if ( gpevtRitReadyForCallOut )
                            {
                              gfMonitorPowerInProgress = 0;
                              gpevtMonitorPowerWaiter = (PRKEVENT)CreateKernelEvent(NotificationEvent, 1u);
                              if ( gpevtMonitorPowerWaiter )
                              {
                                gcSwitchInProgressWaiters = 0;
                                gpsemSwitchInProgressWaiters = (PRKSEMAPHORE)CreateKernelSemaphore(0, 0x7FFFFFFF);
                                if ( gpsemSwitchInProgressWaiters )
                                {
                                  gcDITLuidHitTestWaiters = 0;
                                  gpsemDITLuidHitTestWaiters = (void *)CreateKernelSemaphore(0, 0x7FFFFFFF);
                                  if ( gpsemDITLuidHitTestWaiters )
                                  {
                                    hModuleWinKernel = MmPageEntireDriver(Win32kBaseDriverEntry);
                                    if ( hModuleWinKernel )
                                    {
                                      RtlLoadStringOrError(0x268u, v79, 80, 0);
                                      hModuleWin = MmUserProbeAddress;
                                      if ( InitializeGre() )
                                      {
                                        CurrentDisplayState = Win32UserInitialize(v40, v16, v17);
                                        if ( CurrentDisplayState < 0 )
                                          goto LABEL_216;
                                        gSessionCreationTime = MEMORY[0xFFFFF78000000008];
                                        CurrentDisplayState = ZwPowerInformation(
                                                                SessionPowerInit,
                                                                0LL,
                                                                0,
                                                                OutputBuffer,
                                                                0x40u);
                                        if ( CurrentDisplayState < 0 )
                                          goto LABEL_216;
                                        if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
                                          gPlatformRole = 1;
                                        gbTtmEnabled = OutputBuffer[7];
                                        giPowerOffTimeOutMs = 1000 * LODWORD(OutputBuffer[2]);
                                        dword_1C0296FC4 = LODWORD(OutputBuffer[3]) == 1;
                                        dword_1C0296FD0 = HIDWORD(OutputBuffer[3]) == 0;
                                        dword_1C0296FEC = LOBYTE(OutputBuffer[6]);
                                        dword_1C0296FE4 = (MEMORY[0xFFFFF78000000320]
                                                         * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                                        dword_1C0296FCC = 1;
                                        dword_1C0296FF0 = HIDWORD(OutputBuffer[6]) != 0;
                                        dword_1C0296F70 = 1;
                                        qword_1C0296F38 = 0LL;
                                        qword_1C0296F50 = 0LL;
                                        qword_1C0296F48 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                                         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
                                        qword_1C0296F58 = 0LL;
                                        qword_1C0296F60 = 0LL;
                                        v41 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
                                        gpbIgnoreSleepInput = OutputBuffer[0];
                                        gpbInHiberBoot = OutputBuffer[1];
                                        qword_1C0296F40 = (v41
                                                         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
                                        dword_1C0296F68 = 0;
                                        dword_1C0296FF8 = 0;
                                        giDimTimeOutMs = 1000 * HIDWORD(OutputBuffer[2]);
                                        qword_1C0296F88 = OutputBuffer[5];
                                        dword_1C0296F80 = HIDWORD(OutputBuffer[4]);
                                        dword_1C0296F78 = OutputBuffer[4];
                                        dword_1C0296FF4 = BYTE1(OutputBuffer[6]);
                                        dword_1C0296FFC = BYTE1(OutputBuffer[7]);
                                        gbManualDimTimeOut = PowerIsDimTimeOutManual((const unsigned __int16 *)v41);
                                        dword_1C0296F94 = dword_1C0296F78;
                                        dword_1C0296FA4 = dword_1C0296F80;
                                        dword_1C0296F98 = -1;
                                        dword_1C0296F9C = -1;
                                        dword_1C0296FA0 = -1;
                                        dword_1C0296FA8 = -1;
                                        dword_1C0296FAC = -1;
                                        dword_1C0296FB0 = -1;
                                        byte_1C0296FB4 = 0;
                                        dword_1C0296F90 = -1;
                                        if ( !gbNonServiceSession || gbFirstInteractiveSession )
                                        {
                                          CurrentDisplayState = RetrieveCurrentDisplayState();
                                          if ( CurrentDisplayState < 0 )
                                            goto LABEL_216;
                                          v63 = gPowerTransitionsState != 0 ? 3 : 0;
                                          ZwUpdateWnfStateData(
                                            &WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE,
                                            &v63,
                                            4LL,
                                            0LL,
                                            0LL);
                                        }
                                        ExInitializeRundownProtection(&gWinstaRunRef);
                                        if ( (int)InputInitialize(v43, v42, v44) < 0 )
                                          goto LABEL_216;
                                        CurrentDisplayState = OPMInitialize();
                                        if ( CurrentDisplayState < 0 )
                                          goto LABEL_216;
                                        if ( qword_1C029BA50 && (int)qword_1C029BA50() >= 0 )
                                        {
                                          if ( !qword_1C029BA58 )
                                            goto LABEL_214;
                                          CurrentDisplayState = qword_1C029BA58();
                                          if ( CurrentDisplayState < 0 )
                                            goto LABEL_216;
                                        }
                                        if ( qword_1C029BA60 && (int)qword_1C029BA60() >= 0 )
                                        {
                                          if ( !qword_1C029BA68 )
                                            goto LABEL_214;
                                          CurrentDisplayState = qword_1C029BA68();
                                          if ( CurrentDisplayState < 0 )
                                            goto LABEL_216;
                                        }
                                        if ( !qword_1C029CAD0 || (int)qword_1C029CAD0() < 0 )
                                          goto LABEL_125;
                                        if ( qword_1C029CAD8 )
                                        {
                                          CurrentDisplayState = qword_1C029CAD8();
                                          if ( CurrentDisplayState >= 0 )
                                          {
LABEL_125:
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
LABEL_216:
                                          if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
                                          {
                                            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                                              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
                                              || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
                                            {
                                              v8 = 0;
                                            }
                                            LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                                            if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                            {
                                              LOBYTE(v16) = v8;
                                              WPP_RECORDER_AND_TRACE_SF_D(
                                                WPP_GLOBAL_Control->AttachedDevice,
                                                v16,
                                                v17,
                                                WPP_MAIN_CB.Queue.ListEntry.Flink,
                                                2,
                                                14,
                                                17,
                                                (__int64)&WPP_11ad7c7350dd3b21899c34d304d73f52_Traceguids,
                                                CurrentDisplayState);
                                            }
                                          }
                                          Win32KDriverUnload(0LL, v16, v17);
                                          if ( CurrentDisplayState == -1073741822 )
                                            return (unsigned int)-1073741637;
                                          return (unsigned int)CurrentDisplayState;
                                        }
LABEL_214:
                                        CurrentDisplayState = -1073741637;
                                        goto LABEL_216;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_215:
        CurrentDisplayState = -1073741801;
        goto LABEL_216;
      }
    }
    else
    {
      v9 = 1;
    }
    v10 = 200;
    goto LABEL_6;
  }
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
  return 3221225473LL;
}
