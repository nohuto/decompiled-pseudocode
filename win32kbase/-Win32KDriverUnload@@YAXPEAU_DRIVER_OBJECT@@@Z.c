void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  PDEVICE_OBJECT v3; // rcx
  Gre::Base *v4; // rcx
  Gre::Base *v5; // rcx
  __int64 v6; // rdi
  OPM *v7; // rbx
  void *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // rcx
  char *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  void (*i)(void); // rdi
  unsigned int v17; // ebx
  NSInstrumentation::CLeakTrackingAllocator *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rdx
  PVOID v22; // rcx
  REGHANDLE v23; // rcx
  REGHANDLE v24; // rcx
  REGHANDLE v25; // rcx
  REGHANDLE v26; // rcx
  REGHANDLE v27; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  CAsyncKeyEventMonitor *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  PVOID v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  NSInstrumentation::CLeakTrackingAllocator *v52; // rcx
  unsigned __int64 OutstandingPoolTags; // rax
  unsigned __int64 v54; // rbx
  unsigned int *Pool2; // rax
  unsigned int *v56; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v57; // rbx
  NSInstrumentation::CPointerHashTable *v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  PVOID v64; // rbx
  unsigned __int64 v65; // [rsp+40h] [rbp-F8h] BYREF
  _BYTE v66[208]; // [rsp+50h] [rbp-E8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v66);
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
    || (LOBYTE(v1) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v1) = 0;
  }
  LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      v2,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      15,
      15,
      (__int64)&WPP_e58a4daabae13b57bd97824ed9a307f2_Traceguids);
  if ( qword_1C02D7318 && (int)qword_1C02D7318(v3, v1, v2) >= 0 && qword_1C02D7320 )
    qword_1C02D7320();
  if ( qword_1C02D6278 && (int)qword_1C02D6278(v3, v1, v2) >= 0 && qword_1C02D6280 )
    qword_1C02D6280();
  DCompositionSessionUninitialize((__int64)v3, v1);
  if ( qword_1C02D6298 && (int)qword_1C02D6298() >= 0 && qword_1C02D62A0 )
    qword_1C02D62A0();
  if ( Gre::Base::IsSessionGlobalsAreaAllocated(v4) )
  {
    v6 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
    v7 = *(OPM **)(v6 + 3824);
    if ( v7 )
    {
      COPM::~COPM(*(COPM **)(v6 + 3824));
      OPM::OPMFreeMemory(v7, v8);
    }
    *(_QWORD *)(v6 + 3824) = 0LL;
  }
  gdwHydraHint |= 0x80u;
  MultiUserNtGreCleanup(v5);
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  v11 = (char *)gpDispInfo;
  if ( gpDispInfo )
  {
    v11 = (char *)*((_QWORD *)gpDispInfo + 3);
    if ( v11 )
    {
      do
      {
        v12 = *(char **)v11;
        Win32FreePool(v11);
        v11 = v12;
      }
      while ( v12 );
      *((_QWORD *)gpDispInfo + 3) = 0LL;
    }
  }
  InputUnInitialize((__int64)v11, v9, v10);
  Win32kNtUserCleanup(v14, v13, v15);
  if ( qword_1C02D0E08 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( i = (void (*)(void))DestroyHandleFirstPass; ; i = (void (*)(void))DestroyHandleSecondPass )
    {
      v17 = 0;
      do
      {
        if ( *((_BYTE *)qword_1C02D0E08 + 32 * v17 + 24) )
          i();
        ++v17;
      }
      while ( v17 <= giheLast );
      if ( (char *)i != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  if ( qword_1C02D68C8 && (int)qword_1C02D68C8() >= 0 && qword_1C02D68D0 )
    qword_1C02D68D0();
  CleanupDomainLocks();
  EnterLeaveCritMitRitHandOffHazard::UnInitialize();
  v21 = gpStackRefLookAside;
  gdwHydraHint |= 0x200u;
  if ( gpStackRefLookAside )
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v18, (char *)gpStackRefLookAside);
  if ( WPP_MAIN_CB.Dpc.ProcessorHistory )
  {
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy();
    ExFreePoolWithTag((PVOID)WPP_MAIN_CB.Dpc.ProcessorHistory, 0);
    WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  }
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  if ( ghSectionShared )
  {
    gpsi = 0LL;
    if ( gpvSharedBase )
    {
      RtlDestroyHeap(gpvSharedAlloc);
      MmUnmapViewInSessionSpace(gpvSharedBase);
    }
    ObfDereferenceObject(ghSectionShared);
  }
  if ( gpDispInfo )
    Win32FreePool((char *)gpDispInfo);
  v22 = gpkdiStatic;
  if ( gpkdiStatic )
    Win32FreePool((char *)gpkdiStatic);
  if ( ghSectionKernelHandleTable )
  {
    if ( gpKernelHandleTable )
      MmUnmapViewInSessionSpace(gpKernelHandleTable);
    ObfDereferenceObject(ghSectionKernelHandleTable);
  }
  if ( qword_1C02D62A8 && (int)qword_1C02D62A8() >= 0 && qword_1C02D62B0 )
    qword_1C02D62B0(&gMagnContext);
  if ( gbTraceLoggingInitialized )
  {
    if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C02D7338 )
      qword_1C02D7338();
    v23 = qword_1C02C93F8;
    qword_1C02C93F8 = 0LL;
    dword_1C02C93D8 = 0;
    EtwUnregister(v23);
    v24 = qword_1C02C93C0;
    qword_1C02C93C0 = 0LL;
    dword_1C02C93A0 = 0;
    EtwUnregister(v24);
    v25 = qword_1C02C9350;
    qword_1C02C9350 = 0LL;
    dword_1C02C9330 = 0;
    EtwUnregister(v25);
    v26 = qword_1C02C9318;
    qword_1C02C9318 = 0LL;
    dword_1C02C92F8 = 0;
    EtwUnregister(v26);
    v27 = qword_1C02CA800;
    qword_1C02CA800 = 0LL;
    dword_1C02CA7E0 = 0;
    EtwUnregister(v27);
    if ( WPP_MAIN_CB.Dpc.SystemArgument2 )
    {
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v28, (char *)WPP_MAIN_CB.Dpc.SystemArgument2);
      WPP_MAIN_CB.Dpc.SystemArgument2 = 0LL;
    }
    TlgUnregisterAggregateProvider(&dword_1C02C9368);
    TlgUnregisterAggregateProvider(&dword_1C02C4098);
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v22, v21, v19, v20) + 14152) )
  {
    v34 = *(CAsyncKeyEventMonitor **)(SGDGetUserSessionState(v30, v29, v31, v32) + 14152);
    if ( v34 )
      CAsyncKeyEventMonitor::`scalar deleting destructor'(v34);
    *(_QWORD *)(SGDGetUserSessionState(v34, v33, v35, v36) + 14152) = 0LL;
  }
  McGenEventUnregister_EtwUnregister();
  if ( qword_1C02D62B8 && (int)qword_1C02D62B8() >= 0 && qword_1C02D62C0 )
    qword_1C02D62C0();
  CoreMsgUninitialize();
  RIMUnInitialize(v38, v37, v39, v40);
  v44 = gpW32FastMutex;
  if ( gpW32FastMutex )
  {
    ExFreePoolWithTag(gpW32FastMutex, 0);
    gpW32FastMutex = 0LL;
  }
  if ( !*(_DWORD *)SGDGetUserSessionState(v44, v41, v42, v43) )
    KeRemoveSystemServiceTable(1LL);
  if ( !*(_DWORD *)SGDGetUserSessionState(v46, v45, v47, v48) )
    KeRemoveSystemServiceTable(2LL);
  if ( gpCountTable )
  {
    ExFreePoolWithTag(gpCountTable, 0);
    gpCountTable = 0LL;
  }
  FreeWin32KSyscallFilter();
  v52 = gpLeakTrackingAllocator;
  if ( gpLeakTrackingAllocator )
  {
    v65 = 0LL;
    OutstandingPoolTags = NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(
                            gpLeakTrackingAllocator,
                            0LL,
                            0LL,
                            0LL);
    v54 = OutstandingPoolTags;
    if ( OutstandingPoolTags )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(64LL, 4 * OutstandingPoolTags, 1953264469LL);
      v56 = Pool2;
      if ( Pool2 )
      {
        NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(gpLeakTrackingAllocator, Pool2, v54, &v65);
        PoolLeakCaptureLiveDump(v65, v56, v54);
        ExFreePoolWithTag(v56, 0);
      }
    }
    v57 = gpLeakTrackingAllocator;
    v58 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 11);
    if ( v58 )
      NSInstrumentation::CPointerHashTable::Enumerate(
        v58,
        (void (*)(void *, void *, void *))NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
        gpLeakTrackingAllocator);
    v59 = *((_QWORD *)v57 + 12);
    if ( v59 )
      NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
        v59,
        NSInstrumentation::CLeakTrackingAllocator::CleanupCallback,
        v57);
    NSInstrumentation::CLeakTrackingAllocator::Destroy(gpLeakTrackingAllocator);
    gpLeakTrackingAllocator = 0LL;
  }
  v61 = *(unsigned int *)SGDGetUserSessionState(v52, v49, v50, v51);
  if ( (_DWORD)v61 == gServiceSessionId && !gServiceSessionId )
    FreeIndex(v61, v60, v62, v63);
  if ( gpxsGlobals )
  {
    MmUnmapViewInSessionSpace(gpxsGlobals);
    gpxsGlobals = 0LL;
  }
  if ( gxsSection )
  {
    ObfDereferenceObject(gxsSection);
    gxsSection = 0LL;
  }
  if ( gxsSectionHandle )
  {
    ZwClose(gxsSectionHandle);
    gxsSectionHandle = 0LL;
  }
  UninitializeTelemetryAssertsKM();
  v64 = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    UninitializeBaseWppLog();
    if ( qword_1C02D7EF0 )
      qword_1C02D7EF0(v64);
    WppCleanupKm(v64);
  }
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C02D7350 )
    qword_1C02D7350();
  UnloadWin32kCall();
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v66);
}
