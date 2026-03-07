void Win32kNtUserCleanupInternal(void)
{
  __int64 v0; // r8
  __int64 v1; // r9
  void **v2; // rcx
  void **v3; // rcx
  void **v4; // rcx
  PKTIMER v5; // rcx
  void *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  void *v11; // rdx
  void *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rbx
  void *v23; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  NSInstrumentation::CLeakTrackingAllocator *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  NSInstrumentation::CLeakTrackingAllocator *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  void *v52; // rdx
  PVOID v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  void *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rbx
  _QWORD *v68; // rbx
  void *v69; // rdx
  _QWORD *v70; // rdi
  void *v71; // rdx
  void *v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  NSInstrumentation::CLeakTrackingAllocator *v77; // [rsp+50h] [rbp+20h] BYREF
  void *v78; // [rsp+58h] [rbp+28h] BYREF
  void **v79; // [rsp+60h] [rbp+30h] BYREF

  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  if ( qword_1C02D6190 && (int)qword_1C02D6190() >= 0 && qword_1C02D6198 )
    qword_1C02D6198();
  if ( qword_1C02D61A0 && (int)qword_1C02D61A0() >= 0 )
  {
    v2 = 0LL;
    v77 = 0LL;
    if ( qword_1C02D61A8 )
    {
      qword_1C02D61A8(&v77);
      v2 = (void **)v77;
    }
    if ( *v2 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v2);
      *(_QWORD *)v77 = 0LL;
    }
  }
  if ( qword_1C02D61B0 && (int)qword_1C02D61B0() >= 0 )
  {
    v3 = 0LL;
    v78 = 0LL;
    if ( qword_1C02D61B8 )
    {
      qword_1C02D61B8(&v78);
      v3 = (void **)v78;
    }
    if ( *v3 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v3);
      *(_QWORD *)v78 = 0LL;
    }
  }
  if ( qword_1C02D61C0 && (int)qword_1C02D61C0() >= 0 )
  {
    v4 = 0LL;
    v79 = 0LL;
    if ( qword_1C02D61C8 )
    {
      qword_1C02D61C8(&v79);
      v4 = v79;
    }
    if ( *v4 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v4);
      *v79 = 0LL;
    }
  }
  while ( (__int64 *)gtmrListHead != &gtmrListHead )
  {
    v67 = gtmrListHead - 72;
    if ( qword_1C02D61D0 && (int)qword_1C02D61D0() >= 0 && qword_1C02D61D8 )
      qword_1C02D61D8(v67);
  }
  if ( gptmrWD )
  {
    KeCancelTimer(gptmrWD);
    if ( gptmrWD )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gptmrWD);
    gptmrWD = 0LL;
  }
  v5 = gptmrMaster;
  if ( gptmrMaster )
  {
    KeCancelTimer(gptmrMaster);
    if ( gptmrMaster )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gptmrMaster);
    gptmrMaster = 0LL;
  }
  if ( gpClipFormatExceptionList )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gpClipFormatExceptionList);
  if ( qword_1C02D6F90 && (int)qword_1C02D6F90() >= 0 && qword_1C02D6F98 )
    qword_1C02D6F98();
  v6 = gpEventPnPWainting;
  if ( gpEventPnPWainting )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gpEventPnPWainting);
    gpEventPnPWainting = 0LL;
  }
  LODWORD(v77) = 0;
  v78 = 0LL;
  if ( *(_QWORD *)(SGDGetUserSessionState(v5, v6, v0, v1) + 8) )
  {
    while ( 1 )
    {
      if ( !(unsigned int)CSTPop((unsigned int *)&v77, &v78) )
        goto LABEL_42;
      if ( (_DWORD)v77 == 2 || (_DWORD)v77 == 4 )
        break;
      if ( (_DWORD)v77 == 8 )
      {
        v68 = v78;
        if ( *(_QWORD *)v78 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(void **)v78);
          *v68 = 0LL;
        }
LABEL_141:
        v69 = (void *)v68[1];
        if ( v69 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v69);
          v68[1] = 0LL;
        }
      }
    }
    v68 = v78;
    goto LABEL_141;
  }
LABEL_42:
  gfRecordPnpNotification = 0;
  if ( gpPnpNotificationRecord )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gpPnpNotificationRecord);
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
  if ( gpRemoteBeepDevice )
    ObfDereferenceObject(gpRemoteBeepDevice);
  if ( gpEventDiconnectDesktop )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gpEventDiconnectDesktop);
    gpEventDiconnectDesktop = 0LL;
  }
  if ( gpevtDesktopDestroyed )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gpevtDesktopDestroyed);
    gpevtDesktopDestroyed = 0LL;
  }
  if ( gpevtVideoInitialized )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gpevtVideoInitialized);
    gpevtVideoInitialized = 0LL;
  }
  if ( gpevtQueueReadyForCallout )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gpevtQueueReadyForCallout);
    gpevtQueueReadyForCallout = 0LL;
  }
  if ( gpevtVideoportCallout )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gpevtVideoportCallout);
    gpevtVideoportCallout = 0LL;
  }
  if ( gpevtRitReadyForCallOut )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gpevtRitReadyForCallOut);
    gpevtRitReadyForCallOut = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserGdiSessionState() + 8) )
  {
    v10 = SGDGetUserGdiSessionState();
    v11 = *(void **)(v10 + 8);
    if ( v11 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
    *(_QWORD *)(v10 + 8) = 0LL;
  }
  if ( gpsemSwitchInProgressWaiters )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gpsemSwitchInProgressWaiters);
    gpsemSwitchInProgressWaiters = 0LL;
  }
  v12 = gpsemDITLuidHitTestWaiters;
  if ( gpsemDITLuidHitTestWaiters )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gpsemDITLuidHitTestWaiters);
    gpsemDITLuidHitTestWaiters = 0LL;
  }
  if ( qword_1C02D6200 && (int)qword_1C02D6200() >= 0 && qword_1C02D6208 )
    qword_1C02D6208();
  if ( *(_QWORD *)(SGDGetUserSessionState(v7, v12, v8, v9) + 16824) )
  {
    v17 = SGDGetUserSessionState(v14, v13, v15, v16);
    ObfDereferenceObject(*(PVOID *)(v17 + 16824));
    *(_QWORD *)(SGDGetUserSessionState(v19, v18, v20, v21) + 16824) = 0LL;
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
  v22 = gpJobsList;
  if ( gpJobsList )
  {
    do
    {
      v70 = v22;
      v22 = (_QWORD *)*v22;
      v71 = (void *)v70[7];
      if ( v71 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v71);
        v70[7] = 0LL;
      }
      v72 = (void *)v70[5];
      if ( v72 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v72);
        v70[5] = 0LL;
      }
      RtlDestroyAtomTable((PRTL_ATOM_TABLE)v70[2]);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v70);
    }
    while ( v22 );
    gpJobsList = 0LL;
  }
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    if ( gsmsList )
    {
      while ( 1 )
      {
        v24 = (NSInstrumentation::CLeakTrackingAllocator *)gsmsList;
        if ( gsmsList == &gsmsList )
          break;
        if ( *((void ***)gsmsList + 1) != &gsmsList
          || (v73 = *(_QWORD *)gsmsList, *(void **)(*(_QWORD *)gsmsList + 8LL) != gsmsList) )
        {
          __fastfail(3u);
        }
        gsmsList = *(void **)gsmsList;
        *(_QWORD *)(v73 + 8) = &gsmsList;
        if ( qword_1C02D6218 )
          qword_1C02D6218(v24, 0LL);
      }
    }
    qword_1C02D47D0 = (__int64)&gsmsList;
    gsmsList = &gsmsList;
  }
  if ( qword_1C02D6220 && (int)qword_1C02D6220() >= 0 )
  {
    v24 = 0LL;
    v77 = 0LL;
    if ( qword_1C02D6228 )
    {
      qword_1C02D6228(&v77);
      v24 = v77;
    }
    v23 = *(void **)v24;
    if ( *(_QWORD *)v24 )
    {
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v24, v23);
      *(_QWORD *)v77 = 0LL;
    }
  }
  if ( qword_1C02D10B0 )
  {
    if ( (int)IsFreeMessageListSupported() >= 0 && qword_1C02D6730 )
      qword_1C02D6730((char *)qword_1C02D10B0 + 24);
    FreeQueue(qword_1C02D10B0, v74, v75, v76);
    qword_1C02D10B0 = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v24, v23, v25, v26) + 16864) )
  {
    v31 = SGDGetUserSessionState(v28, v27, v29, v30);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v32, *(void **)(v31 + 16864));
    *(_QWORD *)(SGDGetUserSessionState(v34, v33, v35, v36) + 16864) = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v28, v27, v29, v30) + 16872) )
  {
    v41 = SGDGetUserSessionState(v38, v37, v39, v40);
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v42, *(void **)(v41 + 16872));
    *(_QWORD *)(SGDGetUserSessionState(v44, v43, v45, v46) + 16872) = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v38, v37, v39, v40) + 13912) )
  {
    v51 = SGDGetUserSessionState(v48, v47, v49, v50);
    HMAssignmentUnlockWorker((__int64 *)(v51 + 13912));
  }
  if ( gspklWinstaLessSessionLayouts )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  if ( gspklBaseLayout )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  if ( qword_1C02D4818 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, qword_1C02D4818);
  v52 = gpsdInitWinSta;
  if ( gpsdInitWinSta )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, gpsdInitWinSta);
    gpsdInitWinSta = 0LL;
  }
  v53 = gpHandleFlagsMutex;
  if ( gpHandleFlagsMutex )
  {
    ExFreePoolWithTag(gpHandleFlagsMutex, 0);
    gpHandleFlagsMutex = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v53, v52, v49, v50) + 696) )
  {
    v58 = *(void **)(SGDGetUserSessionState(v55, v54, v56, v57) + 696);
    if ( v58 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v58);
    *(_QWORD *)(SGDGetUserSessionState(v59, v58, v60, v61) + 696) = 0LL;
  }
  if ( *(_QWORD *)(SGDGetUserSessionState(v55, v54, v56, v57) + 16) )
  {
    v66 = SGDGetUserSessionState(v63, v62, v64, v65);
    CLEANUP_CRIT_RESOURCE((union _USERCRIT_TYPE *)(v66 + 16));
  }
  if ( gpRemoteSessionOcclusionEvent )
  {
    ObfDereferenceObject(gpRemoteSessionOcclusionEvent);
    gpRemoteSessionOcclusionEvent = 0LL;
  }
  if ( qword_1C02D6358 && (int)qword_1C02D6358() >= 0 && qword_1C02D6360 )
    qword_1C02D6360();
  if ( DispBroker::DispBrokerClient::s_pSessionBroker )
    ExFreePoolWithTag(DispBroker::DispBrokerClient::s_pSessionBroker, 0x44535042u);
  DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
}
