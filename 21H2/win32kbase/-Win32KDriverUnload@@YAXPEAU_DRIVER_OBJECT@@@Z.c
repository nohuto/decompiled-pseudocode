/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01481B0
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ??0CTempW32TlsForThread@@QEAA@XZ @ 0x1C0029CE8 (--0CTempW32TlsForThread@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CTempW32TlsForThread@@QEAA@XZ @ 0x1C0047598 (--1CTempW32TlsForThread@@QEAA@XZ.c)
 *     DCompositionSessionUninitialize @ 0x1C0059A70 (DCompositionSessionUninitialize.c)
 *     IsTelemetryAssertsSupported @ 0x1C005B2D4 (IsTelemetryAssertsSupported.c)
 *     IsUserkTraceLoggingSupported @ 0x1C005B3F8 (IsUserkTraceLoggingSupported.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0089198 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MultiUserNtGreCleanup @ 0x1C008F7E4 (MultiUserNtGreCleanup.c)
 *     InputUnInitialize @ 0x1C009E774 (InputUnInitialize.c)
 *     UnloadWin32kCall @ 0x1C00AB850 (UnloadWin32kCall.c)
 *     Win32ExtractSessionPoolTagInfo @ 0x1C00B64C0 (Win32ExtractSessionPoolTagInfo.c)
 *     WinSqmEndSession @ 0x1C00B73BC (WinSqmEndSession.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B8C3C (-Win32kNtUserCleanup@@YAHXZ.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C00BB610 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolat.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00BFD40 (-CleanupDomainLocks@@YAXXZ.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C00C090C (UninitializeTelemetryAssertsKM.c)
 *     ??1COPM@@QEAA@XZ @ 0x1C00C19EC (--1COPM@@QEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C00C1AF0 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00C351C (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     CoreMsgUninitialize @ 0x1C00C35C8 (CoreMsgUninitialize.c)
 *     RIMUnInitialize @ 0x1C00C4580 (RIMUnInitialize.c)
 *     ??1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ @ 0x1C00C46D0 (--1CLeakTrackingAllocator@NSInstrumentation@@QEAA@XZ.c)
 *     ?Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ @ 0x1C00C4714 (-Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x1C00C49C8 (-UninitializeBaseWppLog@@YAXXZ.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1C00C579C (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     ?UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00C5CFC (-UnInitialize@EnterLeaveCritMitRitHandOffHazard@@SAXXZ.c)
 *     McGenEventUnregister_EtwUnregister @ 0x1C00C5E04 (McGenEventUnregister_EtwUnregister.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     FreeIndex @ 0x1C0146218 (FreeIndex.c)
 *     ?Win32kCreateLeakedTagsKernelDump@@YAX_K00PEAKK@Z @ 0x1C0146710 (-Win32kCreateLeakedTagsKernelDump@@YAX_K00PEAKK@Z.c)
 *     ?FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QEAAXXZ @ 0x1C017A184 (-FreeAll@CLeakTrackingAllocator@NSInstrumentation@@QEAAXXZ.c)
 *     TlgUnregisterAggregateProvider @ 0x1C02C8634 (TlgUnregisterAggregateProvider.c)
 *     WppCleanupKm @ 0x1C02C8BAC (WppCleanupKm.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  OPM *v4; // rbx
  void *v5; // rdx
  char *v6; // rcx
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  void (*i)(void); // rdi
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  NSInstrumentation::CLeakTrackingAllocator *v18; // rcx
  REGHANDLE v19; // rcx
  REGHANDLE v20; // rcx
  REGHANDLE v21; // rcx
  REGHANDLE v22; // rcx
  REGHANDLE v23; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v24; // rcx
  __int64 v25; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v26; // rcx
  __int64 v27; // r8
  _DWORD *v28; // rbx
  int v29; // edi
  unsigned int v30; // r14d
  __int64 Pool2; // rax
  NSInstrumentation::CLeakTrackingAllocator *v32; // rcx
  unsigned int *v33; // rsi
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 v36; // r8
  PVOID v37; // rbx
  PDRIVER_OBJECT v38; // rbx
  unsigned __int64 v39[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v40; // [rsp+98h] [rbp+38h] BYREF
  unsigned __int64 v41; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v42; // [rsp+A8h] [rbp+48h] BYREF

  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      15,
      15,
      (__int64)&WPP_11ad7c7350dd3b21899c34d304d73f52_Traceguids);
  if ( qword_1C029CAE0 && (int)qword_1C029CAE0(v3, a2, a3) >= 0 && qword_1C029CAE8 )
    qword_1C029CAE8();
  if ( qword_1C029B9B0 && (int)qword_1C029B9B0(v3, a2, a3) >= 0 && qword_1C029B9B8 )
    qword_1C029B9B8();
  DCompositionSessionUninitialize((__int64)v3, a2);
  if ( qword_1C029B9D0 && (int)qword_1C029B9D0() >= 0 && qword_1C029B9D8 )
    qword_1C029B9D8();
  v4 = qword_1C0296A08;
  if ( qword_1C0296A08 )
  {
    COPM::~COPM(qword_1C0296A08);
    OPM::OPMFreeMemory(v4, v5);
  }
  gdwHydraHint |= 0x80u;
  qword_1C0296A08 = 0LL;
  MultiUserNtGreCleanup();
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  if ( gpDispInfo )
  {
    v6 = (char *)*((_QWORD *)gpDispInfo + 3);
    if ( v6 )
    {
      do
      {
        v7 = *(char **)v6;
        Win32FreePool(v6);
        v6 = v7;
      }
      while ( v7 );
      *((_QWORD *)gpDispInfo + 3) = 0LL;
    }
  }
  CTempW32TlsForThread::CTempW32TlsForThread((CTempW32TlsForThread *)v39);
  InputUnInitialize(v9, v8, v10);
  Win32kNtUserCleanup(v12, v11, v13);
  if ( qword_1C0294B68 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( i = (void (*)(void))DestroyHandleFirstPass; ; i = (void (*)(void))DestroyHandleSecondPass )
    {
      v15 = 0;
      do
      {
        if ( *((_BYTE *)qword_1C0294B68 + 32 * v15 + 24) )
          i();
        ++v15;
      }
      while ( v15 <= giheLast );
      if ( (char *)i != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  if ( qword_1C029C030 && (int)qword_1C029C030() >= 0 && qword_1C029C038 )
    qword_1C029C038(0LL);
  CleanupDomainLocks();
  CTempW32TlsForThread::~CTempW32TlsForThread((CTempW32TlsForThread *)v39, v16, v17);
  EnterLeaveCritMitRitHandOffHazard::UnInitialize();
  gdwHydraHint |= 0x200u;
  if ( gpStackRefLookAside )
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v18, (char *)gpStackRefLookAside);
  if ( gpUserTypeIsolation )
  {
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy();
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
    Win32FreePool((char *)gpDispInfo);
  if ( gpkdiStatic )
    Win32FreePool((char *)gpkdiStatic);
  if ( ghSectionKernelHandleTable )
  {
    if ( gpKernelHandleTable )
      MmUnmapViewInSessionSpace(gpKernelHandleTable);
    ObfDereferenceObject(ghSectionKernelHandleTable);
  }
  if ( qword_1C029B9E0 && (int)qword_1C029B9E0() >= 0 && qword_1C029B9E8 )
    qword_1C029B9E8(&gMagnContext);
  WinSqmEndSession();
  if ( gbTraceLoggingInitialized )
  {
    if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C029CB00 )
      qword_1C029CB00();
    v19 = qword_1C028D710;
    qword_1C028D710 = 0LL;
    dword_1C028D6F0 = 0;
    EtwUnregister(v19);
    v20 = qword_1C028D6D8;
    qword_1C028D6D8 = 0LL;
    dword_1C028D6B8 = 0;
    EtwUnregister(v20);
    v21 = qword_1C028D668;
    qword_1C028D668 = 0LL;
    dword_1C028D648 = 0;
    EtwUnregister(v21);
    v22 = qword_1C028D630;
    qword_1C028D630 = 0LL;
    dword_1C028D610 = 0;
    EtwUnregister(v22);
    v23 = qword_1C028EE90;
    qword_1C028EE90 = 0LL;
    dword_1C028EE70 = 0;
    EtwUnregister(v23);
    if ( InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside )
    {
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(
        v24,
        (char *)InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside);
      InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside = 0LL;
    }
    TlgUnregisterAggregateProvider(&dword_1C028D680);
    TlgUnregisterAggregateProvider(&dword_1C0288378);
  }
  if ( gpAsyncKeyEventMonitor )
  {
    CAsyncKeyEventMonitor::`scalar deleting destructor'(gpAsyncKeyEventMonitor);
    gpAsyncKeyEventMonitor = 0LL;
  }
  McGenEventUnregister_EtwUnregister();
  if ( qword_1C029B9F0 && (int)qword_1C029B9F0() >= 0 && qword_1C029B9F8 )
    qword_1C029B9F8();
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
  v28 = gpLeakTrackingAllocator;
  v29 = 0;
  if ( gpLeakTrackingAllocator )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::Empty(v26) )
    {
      v29 = 1;
      v41 = 0LL;
      v30 = v28[11];
      v42 = 0LL;
      v39[0] = 0LL;
      v40 = 0;
      Pool2 = ExAllocatePool2(64LL, 4 * v30);
      v33 = (unsigned int *)Pool2;
      if ( Pool2 )
      {
        if ( Win32ExtractSessionPoolTagInfo(gSessionId, Pool2, v30, &v40, &v41, &v42, v39, (__int64)v28, v30) >= 0 )
        {
          v34 = v41;
          v35 = v42;
          v36 = v39[0];
        }
        else
        {
          v34 = 0LL;
          v35 = 0LL;
          v36 = 0LL;
        }
        Win32kCreateLeakedTagsKernelDump(v34, v35, v36, v33, v40);
        ExFreePoolWithTag(v33, 0x746C7355u);
      }
      NSInstrumentation::CLeakTrackingAllocator::FreeAll(v32);
    }
    v37 = gpLeakTrackingAllocator;
    if ( *((_BYTE *)gpLeakTrackingAllocator + 72) )
    {
      NSInstrumentation::CLeakTrackingAllocator::~CLeakTrackingAllocator((NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator);
      ExFreePoolWithTag(v37, 0);
    }
    gpLeakTrackingAllocator = 0LL;
  }
  if ( gSessionId == gServiceSessionId )
  {
    if ( !gServiceSessionId )
    {
      if ( gpxsGlobals )
      {
        v26 = (NSInstrumentation::CLeakTrackingAllocator *)*((_QWORD *)gpxsGlobals + 5);
        if ( v26 )
        {
          ExFreePoolWithTag(v26, 0);
          *((_QWORD *)gpxsGlobals + 5) = 0LL;
        }
      }
    }
    if ( gSessionId == gServiceSessionId && !gServiceSessionId )
      FreeIndex((__int64)v26, v25, v27);
  }
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
  if ( !v29 && qword_1C029BA80 && (int)qword_1C029BA80() >= 0 && qword_1C029BA88 )
    qword_1C029BA88();
  UninitializeTelemetryAssertsKM();
  v38 = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    UninitializeBaseWppLog();
    if ( qword_1C029D728 )
      qword_1C029D728(v38);
    WppCleanupKm(v38);
  }
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C029CB18 )
    qword_1C029CB18();
  UnloadWin32kCall();
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
}
