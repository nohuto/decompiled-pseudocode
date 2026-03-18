/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B1DA0
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B1AE4 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     FreeQueue @ 0x1C0038668 (FreeQueue.c)
 *     IsFreeMessageListSupported @ 0x1C00386BC (IsFreeMessageListSupported.c)
 *     HMAssignmentUnlockWorker @ 0x1C0056D3C (HMAssignmentUnlockWorker.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C41C (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     IsFreeSMSSupported @ 0x1C00B2668 (IsFreeSMSSupported.c)
 *     CSTCleanupStack @ 0x1C00B2694 (CSTCleanupStack.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B2974 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     ?CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_ERESOURCE@@@Z @ 0x1C00D0CEC (-CLEANUP_CRIT_RESOURCE@@YAXAEAPEAU_ERESOURCE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     FreeTimer @ 0x1C0232FC0 (FreeTimer.c)
 */

void Win32kNtUserCleanupInternal(void)
{
  char **v0; // rcx
  char **v1; // rcx
  char **v2; // rcx
  __int64 v3; // rbx
  PVOID v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  char *v9; // rdx
  void *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char *v20; // rbx
  char *v21; // rdi
  char *v22; // rdx
  char *v23; // rdx
  char *v24; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  NSInstrumentation::CLeakTrackingAllocator *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  NSInstrumentation::CLeakTrackingAllocator *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  NSInstrumentation::CLeakTrackingAllocator *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  void *v58; // rdx
  PVOID v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  char *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  NSInstrumentation::CLeakTrackingAllocator *v73; // [rsp+50h] [rbp+20h] BYREF
  char **v74; // [rsp+58h] [rbp+28h] BYREF
  char **v75; // [rsp+60h] [rbp+30h] BYREF

  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  if ( qword_1C0295010 && (int)qword_1C0295010() >= 0 && qword_1C0295018 )
    qword_1C0295018();
  if ( qword_1C0295020 && (int)qword_1C0295020() >= 0 )
  {
    v0 = 0LL;
    v73 = 0LL;
    if ( qword_1C0295028 )
    {
      qword_1C0295028(&v73);
      v0 = (char **)v73;
    }
    if ( *v0 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v0);
      *(_QWORD *)v73 = 0LL;
    }
  }
  if ( qword_1C0295030 && (int)qword_1C0295030() >= 0 )
  {
    v1 = 0LL;
    v74 = 0LL;
    if ( qword_1C0295038 )
    {
      qword_1C0295038(&v74);
      v1 = v74;
    }
    if ( *v1 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v1);
      *v74 = 0LL;
    }
  }
  if ( qword_1C0295040 && (int)qword_1C0295040() >= 0 )
  {
    v2 = 0LL;
    v75 = 0LL;
    if ( qword_1C0295048 )
    {
      qword_1C0295048(&v75);
      v2 = v75;
    }
    if ( *v2 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v2);
      *v75 = 0LL;
    }
  }
  while ( (__int64 *)gtmrListHead != &gtmrListHead )
  {
    v3 = gtmrListHead - 72;
    if ( qword_1C0295050 && (int)qword_1C0295050() >= 0 )
      FreeTimer(v3);
  }
  if ( gptmrWD )
  {
    KeCancelTimer(gptmrWD);
    if ( gptmrWD )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gptmrWD);
    gptmrWD = 0LL;
  }
  if ( gptmrMaster )
  {
    KeCancelTimer(gptmrMaster);
    if ( gptmrMaster )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gptmrMaster);
    gptmrMaster = 0LL;
  }
  if ( gpClipFormatExceptionList )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpClipFormatExceptionList);
  if ( qword_1C0295E18 && (int)qword_1C0295E18() >= 0 && qword_1C0295E20 )
    qword_1C0295E20();
  if ( gpEventPnPWainting )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpEventPnPWainting);
    gpEventPnPWainting = 0LL;
  }
  CSTCleanupStack();
  gfRecordPnpNotification = 0;
  if ( gpPnpNotificationRecord )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpPnpNotificationRecord);
    gpPnpNotificationRecord = 0LL;
  }
  if ( gpresDitTouchInjection )
  {
    ExDeleteResourceLite(gpresDitTouchInjection);
    ExFreePoolWithTag(gpresDitTouchInjection, 0);
  }
  if ( gpresDitMouseInjectionFlush )
  {
    ExDeleteResourceLite(gpresDitMouseInjectionFlush);
    ExFreePoolWithTag(gpresDitMouseInjectionFlush, 0);
  }
  if ( gpresDitCompositionInputSinkQuery )
  {
    ExDeleteResourceLite(gpresDitCompositionInputSinkQuery);
    ExFreePoolWithTag(gpresDitCompositionInputSinkQuery, 0);
  }
  if ( gThinwireFileObject )
    ObfDereferenceObject(gThinwireFileObject);
  if ( gVideoFileObject )
    ObfDereferenceObject(gVideoFileObject);
  v4 = gpRemoteBeepDevice;
  if ( gpRemoteBeepDevice )
    ObfDereferenceObject(gpRemoteBeepDevice);
  if ( gpEventDiconnectDesktop )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpEventDiconnectDesktop);
    gpEventDiconnectDesktop = 0LL;
  }
  if ( gpevtDesktopDestroyed )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpevtDesktopDestroyed);
    gpevtDesktopDestroyed = 0LL;
  }
  if ( gpevtVideoInitialized )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpevtVideoInitialized);
    gpevtVideoInitialized = 0LL;
  }
  if ( gpevtQueueReadyForCallout )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpevtQueueReadyForCallout);
    gpevtQueueReadyForCallout = 0LL;
  }
  if ( gpevtVideoportCallout )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpevtVideoportCallout);
    gpevtVideoportCallout = 0LL;
  }
  if ( gpevtRitReadyForCallOut )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpevtRitReadyForCallOut);
    gpevtRitReadyForCallOut = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserGdiSessionState(v4) + 8) )
  {
    v8 = SGDGetUserGdiSessionState(v5);
    v9 = *(char **)(v8 + 8);
    if ( v9 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
    *(_QWORD *)(v8 + 8) = 0LL;
  }
  if ( gpsemSwitchInProgressWaiters )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpsemSwitchInProgressWaiters);
    gpsemSwitchInProgressWaiters = 0LL;
  }
  v10 = gpsemDITLuidHitTestWaiters;
  if ( gpsemDITLuidHitTestWaiters )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpsemDITLuidHitTestWaiters);
    gpsemDITLuidHitTestWaiters = 0LL;
  }
  if ( qword_1C0295080 && (int)qword_1C0295080() >= 0 && qword_1C0295088 )
    qword_1C0295088();
  if ( *(_QWORD *)(SGDGetUserSessionState(v5, v10, v6, v7) + 16824) )
  {
    v15 = SGDGetUserSessionState(v12, v11, v13, v14);
    ObfDereferenceObject(*(PVOID *)(v15 + 16824));
    *(_QWORD *)(SGDGetUserSessionState(v17, v16, v18, v19) + 16824) = 0LL;
  }
  if ( UserAtomTableHandle )
  {
    RtlDestroyAtomTable(UserAtomTableHandle);
    UserAtomTableHandle = 0LL;
  }
  if ( UserLibmgmtAtomTableHandle )
  {
    RtlDestroyAtomTable(UserLibmgmtAtomTableHandle);
    UserLibmgmtAtomTableHandle = 0LL;
  }
  if ( gpevtSynthesizedContainerMouseInput )
  {
    ObfDereferenceObject(gpevtSynthesizedContainerMouseInput);
    gpevtSynthesizedContainerMouseInput = 0LL;
  }
  v20 = (char *)gpJobsList;
  if ( gpJobsList )
  {
    do
    {
      v21 = v20;
      v20 = *(char **)v20;
      v22 = (char *)*((_QWORD *)v21 + 7);
      if ( v22 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v22);
        *((_QWORD *)v21 + 7) = 0LL;
      }
      v23 = (char *)*((_QWORD *)v21 + 5);
      if ( v23 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v23);
        *((_QWORD *)v21 + 5) = 0LL;
      }
      RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)v21 + 2));
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v21);
    }
    while ( v20 );
    gpJobsList = 0LL;
  }
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    if ( gsmsList )
    {
      while ( 1 )
      {
        v28 = (NSInstrumentation::CLeakTrackingAllocator *)gsmsList;
        if ( gsmsList == &gsmsList )
          break;
        if ( *((void ***)gsmsList + 1) != &gsmsList
          || (v29 = *(_QWORD *)gsmsList, *(void **)(*(_QWORD *)gsmsList + 8LL) != gsmsList) )
        {
          __fastfail(3u);
        }
        gsmsList = *(void **)gsmsList;
        *(_QWORD *)(v29 + 8) = &gsmsList;
        v25 = v28;
        if ( qword_1C0295098 )
          qword_1C0295098(v28, 0LL);
      }
    }
    qword_1C0293750 = (__int64)&gsmsList;
    gsmsList = &gsmsList;
  }
  if ( qword_1C02950A0 && (int)qword_1C02950A0() >= 0 )
  {
    v25 = 0LL;
    v73 = 0LL;
    if ( qword_1C02950A8 )
    {
      qword_1C02950A8(&v73);
      v25 = v73;
    }
    v24 = *(char **)v25;
    if ( *(_QWORD *)v25 )
    {
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v25, v24);
      *(_QWORD *)v73 = 0LL;
    }
  }
  if ( qword_1C0290110 )
  {
    if ( (int)IsFreeMessageListSupported() >= 0 && qword_1C02955B8 )
      qword_1C02955B8((char *)qword_1C0290110 + 24);
    FreeQueue(qword_1C0290110, v30, v31, v32);
    qword_1C0290110 = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v25, v24, v26, v27) + 16864) )
  {
    v37 = SGDGetUserSessionState(v34, v33, v35, v36);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v38, *(char **)(v37 + 16864));
    *(_QWORD *)(SGDGetUserSessionState(v40, v39, v41, v42) + 16864) = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v34, v33, v35, v36) + 16872) )
  {
    v47 = SGDGetUserSessionState(v44, v43, v45, v46);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v48, *(char **)(v47 + 16872));
    *(_QWORD *)(SGDGetUserSessionState(v50, v49, v51, v52) + 16872) = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v44, v43, v45, v46) + 13912) )
  {
    v57 = SGDGetUserSessionState(v54, v53, v55, v56);
    HMAssignmentUnlockWorker((__int64 *)(v57 + 13912));
  }
  if ( gspklWinstaLessSessionLayouts )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  if ( gspklBaseLayout )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  if ( qword_1C0293798 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)qword_1C0293798);
  v58 = gpsdInitWinSta;
  if ( gpsdInitWinSta )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)gpsdInitWinSta);
    gpsdInitWinSta = 0LL;
  }
  v59 = gpHandleFlagsMutex;
  if ( gpHandleFlagsMutex )
  {
    ExFreePoolWithTag(gpHandleFlagsMutex, 0);
    gpHandleFlagsMutex = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v59, v58, v55, v56) + 696) )
  {
    v64 = *(char **)(SGDGetUserSessionState(v61, v60, v62, v63) + 696);
    if ( v64 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v64);
    *(_QWORD *)(SGDGetUserSessionState(v65, v64, v66, v67) + 696) = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v61, v60, v62, v63) + 16) )
  {
    v72 = SGDGetUserSessionState(v69, v68, v70, v71);
    CLEANUP_CRIT_RESOURCE((struct _ERESOURCE **)(v72 + 16));
  }
  if ( gpRemoteSessionOcclusionEvent )
  {
    ObfDereferenceObject(gpRemoteSessionOcclusionEvent);
    gpRemoteSessionOcclusionEvent = 0LL;
  }
  if ( qword_1C02951D8 && (int)qword_1C02951D8() >= 0 && qword_1C02951E0 )
    qword_1C02951E0();
  if ( DispBroker::DispBrokerClient::s_pSessionBroker )
    ExFreePoolWithTag(DispBroker::DispBrokerClient::s_pSessionBroker, 0x44535042u);
  DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
}
