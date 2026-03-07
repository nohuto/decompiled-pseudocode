__int64 __fastcall Win32kBaseDriverEntry(__int64 a1)
{
  int CurrentProcessSessionId; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r14
  unsigned __int8 v17; // di
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int CurrentDisplayState; // ebx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r8d
  NTSTATUS InformationJobObject; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  struct _DRIVER_OBJECT *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  bool v50; // al
  PVOID v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r9
  unsigned int *v59; // rax
  struct _KEVENT *Pool2; // rax
  __int64 v61; // rcx
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rsi
  unsigned int v68; // ebx
  PVOID v69; // r15
  __int64 v70; // rax
  __int64 v71; // rbx
  unsigned int W32pServiceLimitFilter; // eax
  PVOID v73; // r15
  unsigned int v74; // esi
  __int64 v75; // rax
  struct tagTHREADINFO *v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 *v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  bool v92; // sf
  int v93; // eax
  __int64 v94; // rcx
  PVOID KernelEventObject; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 KernelEvent; // rbx
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // r9
  HANDLE CurrentProcessId; // rax
  __int64 v119; // [rsp+58h] [rbp-B0h] BYREF
  struct _CLIENT_ID JobInformation; // [rsp+60h] [rbp-A8h] BYREF
  struct _CLIENT_ID JobInformation_8[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v124[208]; // [rsp+C8h] [rbp-40h] BYREF
  _WORD v125[80]; // [rsp+198h] [rbp+90h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v124);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  *(_DWORD *)SGDGetUserSessionState(v4, v3, v5, v6) = CurrentProcessSessionId;
  gServiceSessionId = RtlGetCurrentServiceSessionId();
  KeQueryPerformanceCounter(&gliQpcFreq);
  JobInformation.UniqueProcess = 0LL;
  if ( (int)wil_InitializeFeatureStaging() < 0 )
  {
    if ( wil_details_featureChangeNotification )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      wil_details_featureChangeNotification = 0LL;
    }
    v11 = -1073741823;
LABEL_24:
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v124);
    return (unsigned int)v11;
  }
  v11 = InitializeWin32kCall(v8, v7, v9, v10);
  if ( v11 < 0 )
  {
    if ( wil_details_featureChangeNotification )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      wil_details_featureChangeNotification = 0LL;
    }
    goto LABEL_24;
  }
  v16 = 1;
  if ( *(_DWORD *)SGDGetUserSessionState(v13, v12, v14, v15) == gServiceSessionId && !gServiceSessionId )
  {
    v17 = 1;
LABEL_11:
    v18 = 200;
    goto LABEL_12;
  }
  v17 = 0;
  if ( !gServiceSessionId )
    goto LABEL_11;
  memset(JobInformation_8, 0, sizeof(JobInformation_8));
  InformationJobObject = ZwQueryInformationJobObject(
                           0LL,
                           JobObjectEndOfJobTimeInformation|0x20,
                           JobInformation_8,
                           0x20u,
                           0LL);
  if ( InformationJobObject < 0 )
    KeBugCheckEx(0x164u, InformationJobObject, 0LL, 0LL, 0LL);
  v18 = BYTE4(JobInformation_8[0].UniqueThread);
LABEL_12:
  gCallerKernelAbiVersion = v18;
  InitializeTelemetryAssertsKMByName();
  CurrentDisplayState = InitializeWin32CrossSessionGlobals(v17 ^ 1u, v19);
  if ( CurrentDisplayState < 0 )
  {
    v25 = 2106;
LABEL_21:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v25);
    if ( wil_details_featureChangeNotification )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      wil_details_featureChangeNotification = 0LL;
    }
    v11 = CurrentDisplayState;
    goto LABEL_24;
  }
  if ( v17 )
  {
    CurrentDisplayState = AllocIndex(v21, v20, v23, v24);
    if ( CurrentDisplayState < 0 )
    {
      v25 = 2121;
      goto LABEL_21;
    }
  }
  EnsureRequiredApiSetExtensions();
  *(_QWORD *)(SGDGetUserSessionState(v29, v28, v30, v31) + 13840) = KbdTablesFallback;
  *(_QWORD *)(SGDGetUserSessionState(KbdTablesFallback, v32, v33, v34) + 13872) = &ausMouseVKey;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  if ( *(_DWORD *)SGDGetUserSessionState(v36, v35, v37, v38) )
  {
    if ( gpWin32kDriverObject )
      goto LABEL_32;
    GetWin32kDriverObject(v40, v39, v41, v42);
  }
  else
  {
    gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CurrentDisplayState = IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    dword_1C02D132C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
  }
  if ( !gpWin32kDriverObject )
    CurrentDisplayState = -1073741823;
LABEL_32:
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C02D7348 )
    qword_1C02D7348();
  if ( CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = InitializeWppLogging(v43);
    if ( CurrentDisplayState >= 0 )
    {
      if ( (unsigned int)InitializeWin32PoolTracking(v45, v44, v46, v47) )
      {
        if ( !(unsigned int)InitCreateUserCrit() )
          goto LABEL_40;
        LODWORD(JobInformation.UniqueProcess) = 8;
        CurrentDisplayState = ZwQuerySystemInformation(
                                MaxSystemInfoClass|SystemProcessInformation,
                                &JobInformation,
                                8u,
                                0LL);
        v50 = 0;
        if ( CurrentDisplayState >= 0 )
          v50 = (BYTE4(JobInformation.UniqueProcess) & 2) != 0;
        gbOSTestSigningEnabled = v50;
        WdInitialize();
        TlgRegisterAggregateProviderEx(&dword_1C02C4098);
        McGenEventRegister_EtwRegister();
        DCEInUseCountTelemetryInit();
        if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C02D7330 )
          qword_1C02D7330();
        if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                    (char *)&dword_1C02C93D8,
                    (__int64)W32kTraceLoggingEnableCallback,
                    0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2275);
        if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1C02C93A0, 0LL, 0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2279);
        if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1C02C9330, 0LL, 0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2283);
        if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                    (char *)&dword_1C02C92F8,
                    (__int64)W32kBaseInputEnableCallback,
                    0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2287);
        if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                    (char *)&dword_1C02CA7E0,
                    (__int64)InputCoreProviderCallback,
                    0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2291);
        WPP_MAIN_CB.Dpc.SystemArgument2 = (PVOID)Win32AllocPagedLookasideList(
                                                   (NSInstrumentation::CLeakTrackingAllocator *)0x48,
                                                   0x616C7355u,
                                                   0x6C6F7355u,
                                                   0x10u);
        if ( !WPP_MAIN_CB.Dpc.SystemArgument2 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2295);
        TlgRegisterAggregateProviderEx(&dword_1C02C9368);
        gbTraceLoggingInitialized = 1;
      }
      else
      {
        CurrentDisplayState = -1073741801;
      }
    }
  }
  v51 = MmPageEntireDriver(Win32kBaseDriverEntry);
  hModuleWinKernel = v51;
  if ( v51 )
  {
    if ( CurrentDisplayState >= 0 )
      CurrentDisplayState = InitializeGraphicsInfrastructure(v51);
  }
  else
  {
    CurrentDisplayState = -1073741801;
  }
  gdwHydraHint |= 1u;
  v52 = 64LL;
  WPP_MAIN_CB.Dpc.DpcData = *(PVOID *)(a1 + 24);
  qword_1C02D4768 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  qword_1C02D4758 = (__int64)&gtmrAdjustmentListHead;
  gtmrAdjustmentListHead = (__int64)&gtmrAdjustmentListHead;
  v53 = &gTimerHashTable;
  do
  {
    v53[1] = v53;
    *v53 = v53;
    v53 += 2;
    --v52;
  }
  while ( v52 );
  memset(&gTimerId, 0, 0xFE0uLL);
  qword_1C02D3360 = (__int64)&gPendingNotifiesList;
  gPendingNotifiesList = (__int64)&gPendingNotifiesList;
  ApiSetEditionInitializeMoveSizeList();
  if ( qword_1C02D62C8 && (int)qword_1C02D62C8() >= 0 && qword_1C02D62D0 )
    qword_1C02D62D0();
  if ( qword_1C02D62D8 && (int)qword_1C02D62D8() >= 0 && qword_1C02D62E0 )
    qword_1C02D62E0();
  if ( BCryptGenRandom(0LL, (PUCHAR)&WPP_MAIN_CB.Dpc.DeferredContext, 8u, 2u) < 0 )
    goto LABEL_41;
  WPP_MAIN_CB.Dpc.DeferredContext = (PVOID)((unsigned __int64)WPP_MAIN_CB.Dpc.DeferredContext & ~0x8000000000000000uLL);
  if ( qword_1C02D6338 && (int)qword_1C02D6338() >= 0 && qword_1C02D6340 )
    qword_1C02D6340(1LL);
  if ( CurrentDisplayState < 0 )
    goto LABEL_41;
  v56 = CheckInitialSessions(v54, v48, v49, v55);
  CurrentDisplayState = v56;
  if ( v56 && v56 != -1073741771 )
  {
    if ( v56 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_41;
  }
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    v59 = (unsigned int *)SGDGetUserSessionState(v57, v48, v49, v58);
    RtlSetActiveConsoleId(*v59);
  }
  if ( qword_1C02D60F8 )
    qword_1C02D60F8(Win32KDriverUnload);
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 56LL, 1716220757LL);
  gpW32FastMutex = Pool2;
  if ( !Pool2 )
    goto LABEL_40;
  Pool2->Header.LockNV = 1;
  Pool2->Header.WaitListHead.Flink = 0LL;
  LODWORD(Pool2->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(Pool2 + 1, SynchronizationEvent, 0);
  gpStackRefLookAside = (void *)Win32AllocPagedLookasideList(
                                  (NSInstrumentation::CLeakTrackingAllocator *)0x10,
                                  0x616C7355u,
                                  0x6C6F7355u,
                                  0xFFFEu);
  if ( !gpStackRefLookAside )
    goto LABEL_40;
  WPP_MAIN_CB.Dpc.ProcessorHistory = ExAllocatePool2(260LL, 48LL, 1869834581LL);
  if ( !WPP_MAIN_CB.Dpc.ProcessorHistory
    || !TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create() )
  {
    goto LABEL_40;
  }
  if ( !*(_DWORD *)SGDGetUserSessionState(v61, v48, v49, v62) )
  {
    if ( qword_1C02D60C0 )
      v67 = qword_1C02D60C0();
    else
      v67 = 0LL;
    if ( qword_1C02D60B8 )
      v68 = qword_1C02D60B8();
    else
      v68 = 0;
    v69 = gpCountTable;
    if ( qword_1C02D60B0 )
      v70 = qword_1C02D60B0(0LL);
    else
      v70 = 0LL;
    KeAddSystemServiceTable(v70, v69, v68, v67, 1);
  }
  if ( !*(_DWORD *)SGDGetUserSessionState(v64, v63, v65, v66) )
  {
    if ( qword_1C02D60E0 )
      v71 = qword_1C02D60E0();
    else
      v71 = 0LL;
    W32pServiceLimitFilter = (unsigned int)SysEntryGetW32pServiceLimitFilter();
    v73 = gpCountTable;
    v74 = W32pServiceLimitFilter;
    if ( qword_1C02D60D0 )
      v75 = qword_1C02D60D0(0LL);
    else
      v75 = 0LL;
    KeAddSystemServiceTable(v75, v73, v74, v71, 2);
  }
  v76 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL);
  gptiCurrent = v76;
  if ( v76 )
  {
    *((_DWORD *)v76 + 387) = 1;
    if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v77) )
    {
      while ( 1 )
      {
        v79 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
        if ( !gpSharedUserCritDeferredUnlockListHead )
          break;
        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                     + 2);
        v78 = *v79;
        v79[2] = 0LL;
        if ( !*(_DWORD *)(v78 + 8) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
        HMUnlockObject(*v79);
      }
    }
  }
  CurrentDisplayState = InitializeWin32KSyscallFilter();
  if ( CurrentDisplayState < 0 )
  {
    UserSessionSwitchLeaveCrit(v81, v80, v82, v83);
    goto LABEL_41;
  }
  UserSessionSwitchLeaveCrit(v81, v80, v82, v83);
  if ( !*(_DWORD *)SGDGetUserSessionState(v85, v84, v86, v87) && qword_1C02D60E8 )
    qword_1C02D60E8();
  if ( !*(_DWORD *)SGDGetUserSessionState(v89, v88, v90, v91) )
    DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  if ( (int)RtlIsApiSetImplemented("ext-ms-win-composition-init-l1-1-0") < 0
    || (v92 = (int)VerifyDWMApiSetImplementation() < 0, v93 = 1, v92) )
  {
    v93 = 0;
  }
  gDWMCapable = v93;
  RIMInitialize();
  CurrentDisplayState = CoreMsgInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_41;
  if ( qword_1C02D62E8 && (int)qword_1C02D62E8() >= 0 && qword_1C02D62F0 )
    qword_1C02D62F0(&gMagnContext);
  if ( qword_1C02D62F8 && (int)qword_1C02D62F8() >= 0 && qword_1C02D6300 )
    qword_1C02D6300();
  if ( qword_1C02D6308 && (int)qword_1C02D6308() >= 0 && qword_1C02D6310 )
    qword_1C02D6310();
  KernelEventObject = CreateKernelEventObject(v94, 0);
  *(_QWORD *)(SGDGetUserSessionState(v97, v96, v98, v99) + 16824) = KernelEventObject;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v101, v100, v102, v103) + 16824) )
    goto LABEL_40;
  gpevtSynthesizedContainerMouseInput = CreateKernelEventObject(v104, 0);
  if ( !gpevtSynthesizedContainerMouseInput )
    goto LABEL_40;
  gpevtDesktopDestroyed = (void *)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtDesktopDestroyed )
    goto LABEL_40;
  gpevtVideoInitialized = (PRKEVENT)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtVideoInitialized )
    goto LABEL_40;
  gpevtQueueReadyForCallout = (PRKEVENT)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtQueueReadyForCallout )
    goto LABEL_40;
  gpevtVideoportCallout = (PRKEVENT)CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtVideoportCallout )
    goto LABEL_40;
  gpevtRitReadyForCallOut = (void *)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtRitReadyForCallOut )
    goto LABEL_40;
  *(_BYTE *)(SGDGetUserGdiSessionState(v105) + 1) = 0;
  KernelEvent = CreateKernelEvent(NotificationEvent, 1u);
  *(_QWORD *)(SGDGetUserGdiSessionState(v107) + 8) = KernelEvent;
  if ( !*(_QWORD *)(SGDGetUserGdiSessionState(v108) + 8)
    || (gcSwitchInProgressWaiters = 0,
        (gpsemSwitchInProgressWaiters = (PRKSEMAPHORE)CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0LL)
    || (gcDITLuidHitTestWaiters = 0, (gpsemDITLuidHitTestWaiters = (void *)CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0LL)
    || (RtlLoadStringOrError(0x268u, v125, 80, 0),
        hModuleWin = MmUserProbeAddress,
        !InitializeGre((Gre::Base *)MmUserProbeAddress)) )
  {
LABEL_40:
    CurrentDisplayState = -1073741801;
LABEL_41:
    if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v16 = 0;
      }
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v48) = v16;
        LOBYTE(v49) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v48,
          v49,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          14,
          17,
          (__int64)&WPP_e58a4daabae13b57bd97824ed9a307f2_Traceguids,
          CurrentDisplayState);
      }
    }
    Win32KDriverUnload(0LL);
    if ( CurrentDisplayState == -1073741822 )
      CurrentDisplayState = -1073741637;
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v124);
    return (unsigned int)CurrentDisplayState;
  }
  CurrentDisplayState = Win32UserInitialize(v109, v48, v49);
  if ( CurrentDisplayState < 0 )
    goto LABEL_41;
  gSessionCreationTime = MEMORY[0xFFFFF78000000008];
  if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    gPlatformRole = 1;
  CurrentDisplayState = InitializePowerGlobals();
  if ( CurrentDisplayState < 0 )
    goto LABEL_41;
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState < 0 )
      goto LABEL_41;
    HIDWORD(v119) = *(_DWORD *)(SGDGetUserSessionState(v110, v48, v49, v111) + 2952) != 0 ? 3 : 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, (char *)&v119 + 4, 4LL, 0LL, 0LL);
  }
  ExInitializeRundownProtection(&gWinstaRunRef);
  if ( (int)InputInitialize(v113, v112, v114) < 0 )
    goto LABEL_41;
  CurrentDisplayState = OPMInitialize(v115);
  if ( CurrentDisplayState < 0 )
    goto LABEL_41;
  if ( qword_1C02D6318 && (int)qword_1C02D6318() >= 0 )
  {
    if ( !qword_1C02D6320 )
      goto LABEL_189;
    CurrentDisplayState = qword_1C02D6320();
    if ( CurrentDisplayState < 0 )
      goto LABEL_41;
  }
  if ( qword_1C02D6328 && (int)qword_1C02D6328() >= 0 )
  {
    if ( !qword_1C02D6330 )
      goto LABEL_189;
    CurrentDisplayState = qword_1C02D6330();
    if ( CurrentDisplayState < 0 )
      goto LABEL_41;
  }
  if ( !qword_1C02D7308 || (int)qword_1C02D7308() < 0 )
    goto LABEL_185;
  if ( !qword_1C02D7310 )
  {
LABEL_189:
    CurrentDisplayState = -1073741637;
    goto LABEL_41;
  }
  CurrentDisplayState = qword_1C02D7310();
  if ( CurrentDisplayState < 0 )
    goto LABEL_41;
LABEL_185:
  if ( *(_DWORD *)SGDGetUserSessionState(v116, v48, v49, v117) )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    CurrentProcessId = PsGetCurrentProcessId();
    JobInformation_8[0].UniqueThread = 0LL;
    JobInformation_8[0].UniqueProcess = CurrentProcessId;
    if ( ZwOpenProcess(&ghSMSS, 0x1000u, &ObjectAttributes, JobInformation_8) < 0 )
      ghSMSS = 0LL;
  }
  ReportUsageForAllVelocityKeys();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v124);
  return 0LL;
}
