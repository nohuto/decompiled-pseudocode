/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C011BB50
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029A770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00743A8 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     RIMUnInitialize @ 0x1C0074670 (RIMUnInitialize.c)
 *     WinSqmEndSession @ 0x1C0079D8C (WinSqmEndSession.c)
 *     MultiUserNtGreCleanup @ 0x1C007D498 (MultiUserNtGreCleanup.c)
 *     Win32FreePagedLookasideList @ 0x1C007DB20 (Win32FreePagedLookasideList.c)
 *     UnloadWin32kCall @ 0x1C009CB30 (UnloadWin32kCall.c)
 *     DCompositionSessionUninitialize @ 0x1C00AB5BC (DCompositionSessionUninitialize.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00AFB24 (-CleanupDomainLocks@@YAXXZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C00B11D4 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolat.c)
 *     ?Destroy@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00B154C (-Destroy@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ??1COPM@@QEAA@XZ @ 0x1C00B2D24 (--1COPM@@QEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C00B2E30 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C00B3320 (UninitializeTelemetryAssertsKM.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00B4938 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     CoreMsgUninitialize @ 0x1C00B4A80 (CoreMsgUninitialize.c)
 *     InputUnInitialize @ 0x1C00B4F7C (InputUnInitialize.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x1C00B5EB0 (-UninitializeBaseWppLog@@YAXXZ.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1C00B778C (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     IsTelemetryAssertsSupported @ 0x1C00B7FB0 (IsTelemetryAssertsSupported.c)
 *     IsUserkTraceLoggingSupported @ 0x1C00B7FDC (IsUserkTraceLoggingSupported.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C00B84A4 (McGenEventUnregister_EtwUnregister.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     TlgUnregisterAggregateProvider @ 0x1C027E8D8 (TlgUnregisterAggregateProvider.c)
 *     WppCleanupKm @ 0x1C027EA94 (WppCleanupKm.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1, char a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  OPM *v6; // rbx
  void *v7; // rdx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  void (*i)(void); // rsi
  unsigned int v11; // ebx
  int v12; // eax
  PVOID v13; // rbx
  int v14; // eax
  REGHANDLE v15; // rcx
  REGHANDLE v16; // rcx
  REGHANDLE v17; // rcx
  REGHANDLE v18; // rcx
  REGHANDLE v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  PDRIVER_OBJECT v24; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      15,
      15,
      (__int64)&WPP_a844338296dc32a54b50029aac15bf9a_Traceguids);
  v2 = -1073741637;
  if ( qword_1C0256EC0 )
    v3 = qword_1C0256EC0(a1);
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0256EC8 )
    qword_1C0256EC8();
  if ( qword_1C0255C40 )
    v4 = qword_1C0255C40();
  else
    v4 = -1073741637;
  if ( v4 >= 0 && qword_1C0255C48 )
    qword_1C0255C48();
  DCompositionSessionUninitialize((__int64)a1, a2);
  if ( qword_1C0255C60 )
    v5 = qword_1C0255C60();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0255C68 )
    qword_1C0255C68();
  v6 = qword_1C0250C58;
  if ( qword_1C0250C58 )
  {
    COPM::~COPM(qword_1C0250C58);
    OPM::OPMFreeMemory(v6, v7);
  }
  gdwHydraHint |= 0x80u;
  qword_1C0250C58 = 0LL;
  MultiUserNtGreCleanup();
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  if ( gpDispInfo )
  {
    v8 = *(_QWORD **)(gpDispInfo + 24);
    if ( v8 )
    {
      do
      {
        v9 = (_QWORD *)*v8;
        Win32FreePool((__int64)v8);
        v8 = v9;
      }
      while ( v9 );
      *(_QWORD *)(gpDispInfo + 24) = 0LL;
    }
  }
  InputUnInitialize();
  Win32kNtUserCleanup();
  if ( qword_1C024FA38 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( i = (void (*)(void))DestroyHandleFirstPass; ; i = (void (*)(void))DestroyHandleSecondPass )
    {
      v11 = 0;
      do
      {
        if ( *((_BYTE *)qword_1C024FA38 + 32 * v11 + 24) )
          i();
        ++v11;
      }
      while ( v11 <= giheLast );
      if ( (char *)i != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  if ( qword_1C02562F0 )
    v12 = qword_1C02562F0();
  else
    v12 = -1073741637;
  if ( v12 >= 0 && qword_1C02562F8 )
    qword_1C02562F8();
  CleanupDomainLocks();
  gdwHydraHint |= 0x200u;
  if ( gpStackRefLookAside )
    Win32FreePagedLookasideList((__int64)gpStackRefLookAside);
  v13 = gpUserTypeIsolation;
  if ( gpUserTypeIsolation )
  {
    if ( *(_QWORD *)gpUserTypeIsolation )
      NSInstrumentation::CTypeIsolation<36864,144>::Destroy(*(PVOID *)gpUserTypeIsolation);
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy((__int64)v13);
    ExFreePoolWithTag(gpUserTypeIsolation, 0);
    gpUserTypeIsolation = 0LL;
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
    Win32FreePool(gpDispInfo);
  if ( gpkdiStatic )
    Win32FreePool(gpkdiStatic);
  if ( ghSectionKernelHandleTable )
  {
    if ( gpKernelHandleTable )
      MmUnmapViewInSessionSpace(gpKernelHandleTable);
    ObfDereferenceObject(ghSectionKernelHandleTable);
  }
  if ( qword_1C0255C70 )
    v14 = qword_1C0255C70();
  else
    v14 = -1073741637;
  if ( v14 >= 0 && qword_1C0255C78 )
    qword_1C0255C78(&gMagnContext);
  WinSqmEndSession();
  if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C0256EE0 )
    qword_1C0256EE0();
  if ( gbTraceLoggingInitialized )
  {
    v15 = qword_1C0249270;
    qword_1C0249270 = 0LL;
    dword_1C0249250 = 0;
    EtwUnregister(v15);
    v16 = qword_1C0249238;
    qword_1C0249238 = 0LL;
    dword_1C0249218 = 0;
    EtwUnregister(v16);
    v17 = qword_1C02491C8;
    qword_1C02491C8 = 0LL;
    dword_1C02491A8 = 0;
    EtwUnregister(v17);
    v18 = qword_1C0249190;
    qword_1C0249190 = 0LL;
    dword_1C0249170 = 0;
    EtwUnregister(v18);
    v19 = qword_1C024AAB0;
    qword_1C024AAB0 = 0LL;
    dword_1C024AA90 = 0;
    EtwUnregister(v19);
    if ( InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside )
    {
      Win32FreePagedLookasideList((__int64)InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
      InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside = 0LL;
    }
  }
  TlgUnregisterAggregateProvider(&dword_1C02491E0);
  if ( gpAsyncKeyEventMonitor )
  {
    CAsyncKeyEventMonitor::`scalar deleting destructor'(gpAsyncKeyEventMonitor);
    gpAsyncKeyEventMonitor = 0LL;
  }
  McGenEventUnregister_EtwUnregister();
  if ( qword_1C0255C80 )
    v20 = qword_1C0255C80();
  else
    v20 = -1073741637;
  if ( v20 >= 0 && qword_1C0255C88 )
    qword_1C0255C88();
  CoreMsgUninitialize();
  RIMUnInitialize();
  if ( gpW32FastMutex )
  {
    ExFreePoolWithTag(gpW32FastMutex, 0);
    gpW32FastMutex = 0LL;
  }
  if ( !gSessionId )
  {
    KeRemoveSystemServiceTable(1LL);
    if ( !gSessionId )
      KeRemoveSystemServiceTable(2LL);
  }
  if ( gpCountTable )
  {
    ExFreePoolWithTag(gpCountTable, 0);
    gpCountTable = 0LL;
  }
  FreeWin32KSyscallFilter();
  if ( qword_1C0256CF0 )
    v21 = qword_1C0256CF0();
  else
    v21 = -1073741637;
  if ( v21 >= 0 && qword_1C0256CF8 )
    v22 = qword_1C0256CF8();
  else
    v22 = 0;
  if ( qword_1C0255D30 )
    v23 = qword_1C0255D30();
  else
    v23 = -1073741637;
  if ( v23 >= 0 && qword_1C0255D38 )
    qword_1C0255D38();
  if ( !v22 )
  {
    if ( qword_1C0255D10 )
      v2 = qword_1C0255D10();
    if ( v2 >= 0 && qword_1C0255D18 )
      qword_1C0255D18();
  }
  TlgUnregisterAggregateProvider(&dword_1C0245378);
  UninitializeTelemetryAssertsKM();
  v24 = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    UninitializeBaseWppLog();
    if ( qword_1C0257AD0 )
      qword_1C0257AD0(v24);
    WppCleanupKm(v24);
  }
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C0256EF8 )
    qword_1C0256EF8();
  UnloadWin32kCall();
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
}
