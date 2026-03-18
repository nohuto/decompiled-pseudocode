/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B8EAC
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B8C3C (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     IsFreeMessageListSupported @ 0x1C0019A1C (IsFreeMessageListSupported.c)
 *     HMAssignmentUnlockWorker @ 0x1C0038F7C (HMAssignmentUnlockWorker.c)
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0089198 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C008AF34 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B9600 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     IsFreeSMSSupported @ 0x1C00B96B4 (IsFreeSMSSupported.c)
 *     ?OnDriverUnload@CTopologyManager@@SAXXZ @ 0x1C00B96E0 (-OnDriverUnload@CTopologyManager@@SAXXZ.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C00B9BC8 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void Win32kNtUserCleanupInternal(void)
{
  char **v0; // rcx
  char **v1; // rcx
  char **v2; // rcx
  char *v3; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // rbx
  char *v10; // rdx
  char *v11; // rdi
  char *v12; // rdx
  char *v13; // rdx
  __int64 v14; // rax
  NSInstrumentation::CLeakTrackingAllocator *v15; // rcx
  char *v16; // rdx
  char **v17; // [rsp+30h] [rbp-18h] BYREF
  NSInstrumentation::CLeakTrackingAllocator *v18; // [rsp+70h] [rbp+28h] BYREF
  void *v19; // [rsp+78h] [rbp+30h] BYREF
  char **v20; // [rsp+80h] [rbp+38h] BYREF
  char **v21; // [rsp+88h] [rbp+40h] BYREF

  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  if ( qword_1C029B8B0 && (int)qword_1C029B8B0() >= 0 && qword_1C029B8B8 )
    qword_1C029B8B8();
  if ( gpvwplHungRedraw )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpvwplHungRedraw);
    gpvwplHungRedraw = 0LL;
  }
  if ( qword_1C029B8C0 && (int)qword_1C029B8C0() >= 0 )
  {
    v0 = 0LL;
    v20 = 0LL;
    if ( qword_1C029B8C8 )
    {
      qword_1C029B8C8(&v20);
      v0 = v20;
    }
    if ( *v0 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *v0);
      *v20 = 0LL;
    }
  }
  if ( qword_1C029B8D0 && (int)qword_1C029B8D0() >= 0 )
  {
    v1 = 0LL;
    v21 = 0LL;
    if ( qword_1C029B8D8 )
    {
      qword_1C029B8D8(&v21);
      v1 = v21;
    }
    if ( *v1 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *v1);
      *v21 = 0LL;
    }
  }
  if ( qword_1C029B8E0 && (int)qword_1C029B8E0() >= 0 )
  {
    v2 = 0LL;
    v17 = 0LL;
    if ( qword_1C029B8E8 )
    {
      qword_1C029B8E8(&v17);
      v2 = v17;
    }
    if ( *v2 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *v2);
      *v17 = 0LL;
    }
  }
  while ( (__int64 *)gtmrListHead != &gtmrListHead )
  {
    v8 = gtmrListHead - 72;
    if ( qword_1C029B8F0 && (int)qword_1C029B8F0() >= 0 && qword_1C029B8F8 )
      qword_1C029B8F8(v8);
  }
  if ( gptmrWD )
  {
    KeCancelTimer(gptmrWD);
    if ( gptmrWD )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)gptmrWD);
    gptmrWD = 0LL;
  }
  if ( gptmrMaster )
  {
    KeCancelTimer(gptmrMaster);
    if ( gptmrMaster )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)gptmrMaster);
    gptmrMaster = 0LL;
  }
  if ( gpClipFormatExceptionList )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpClipFormatExceptionList);
  if ( qword_1C029B910 )
  {
    if ( (int)qword_1C029B910() >= 0 )
    {
      if ( qword_1C029B918 )
      {
        qword_1C029B918(&gWndsMonitorSnapshotHead);
        if ( qword_1C029B918 )
          qword_1C029B918(&gRemoteWndsMonitorSnapshotHead);
      }
    }
  }
  if ( qword_1C029C748 && (int)qword_1C029C748() >= 0 && qword_1C029C750 )
    qword_1C029C750();
  if ( gpEventPnPWainting )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpEventPnPWainting);
    gpEventPnPWainting = 0LL;
  }
  LODWORD(v18) = 0;
  v19 = 0LL;
  if ( gpresUser )
  {
    while ( 1 )
    {
      if ( !(unsigned int)CSTPop((unsigned int *)&v18, &v19) )
        goto LABEL_49;
      if ( (_DWORD)v18 == 2 || (_DWORD)v18 == 4 )
        break;
      if ( (_DWORD)v18 == 8 )
      {
        v9 = v19;
        if ( *(_QWORD *)v19 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            *(char **)v19);
          *v9 = 0LL;
        }
LABEL_147:
        v10 = (char *)v9[1];
        if ( v10 )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v10);
          v9[1] = 0LL;
        }
      }
    }
    v9 = v19;
    goto LABEL_147;
  }
LABEL_49:
  gfRecordPnpNotification = 0;
  if ( gpPnpNotificationRecord )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpPnpNotificationRecord);
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
  if ( gpHidInterfaceGuid )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpHidInterfaceGuid);
    gpHidInterfaceGuid = 0LL;
  }
  if ( gThinwireFileObject )
    ObfDereferenceObject(gThinwireFileObject);
  if ( gVideoFileObject )
    ObfDereferenceObject(gVideoFileObject);
  if ( gpRemoteBeepDevice )
    ObfDereferenceObject(gpRemoteBeepDevice);
  if ( gpEventDiconnectDesktop )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpEventDiconnectDesktop);
    gpEventDiconnectDesktop = 0LL;
  }
  if ( gpevtDesktopDestroyed )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpevtDesktopDestroyed);
    gpevtDesktopDestroyed = 0LL;
  }
  if ( gpevtVideoInitialized )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpevtVideoInitialized);
    gpevtVideoInitialized = 0LL;
  }
  if ( gpevtQueueReadyForCallout )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpevtQueueReadyForCallout);
    gpevtQueueReadyForCallout = 0LL;
  }
  if ( gpevtVideoportCallout )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpevtVideoportCallout);
    gpevtVideoportCallout = 0LL;
  }
  if ( gpevtRitReadyForCallOut )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpevtRitReadyForCallOut);
    gpevtRitReadyForCallOut = 0LL;
  }
  if ( gpevtMonitorPowerWaiter )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpevtMonitorPowerWaiter);
    gpevtMonitorPowerWaiter = 0LL;
  }
  if ( gpsemSwitchInProgressWaiters )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpsemSwitchInProgressWaiters);
    gpsemSwitchInProgressWaiters = 0LL;
  }
  if ( gpsemDITLuidHitTestWaiters )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpsemDITLuidHitTestWaiters);
    gpsemDITLuidHitTestWaiters = 0LL;
  }
  if ( qword_1C029B940 && (int)qword_1C029B940() >= 0 && qword_1C029B948 )
    qword_1C029B948();
  if ( gpevtPTPOperation )
  {
    ObfDereferenceObject(gpevtPTPOperation);
    gpevtPTPOperation = 0LL;
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
  CTopologyManager::OnDriverUnload();
  v3 = (char *)gpJobsList;
  if ( gpJobsList )
  {
    do
    {
      v11 = v3;
      v3 = *(char **)v3;
      v12 = (char *)*((_QWORD *)v11 + 7);
      if ( v12 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v12);
        *((_QWORD *)v11 + 7) = 0LL;
      }
      v13 = (char *)*((_QWORD *)v11 + 5);
      if ( v13 )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v13);
        *((_QWORD *)v11 + 5) = 0LL;
      }
      RtlDestroyAtomTable(*((PRTL_ATOM_TABLE *)v11 + 2));
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v11);
    }
    while ( v3 );
    gpJobsList = 0LL;
  }
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    if ( gsmsList )
    {
      while ( 1 )
      {
        v4 = (NSInstrumentation::CLeakTrackingAllocator *)gsmsList;
        if ( gsmsList == &gsmsList )
          break;
        if ( *((void ***)gsmsList + 1) != &gsmsList
          || (v14 = *(_QWORD *)gsmsList, *(void **)(*(_QWORD *)gsmsList + 8LL) != gsmsList) )
        {
          __fastfail(3u);
        }
        gsmsList = *(void **)gsmsList;
        *(_QWORD *)(v14 + 8) = &gsmsList;
        if ( qword_1C029B958 )
          qword_1C029B958(v4, 0LL);
      }
    }
    qword_1C0298A90 = (__int64)&gsmsList;
    gsmsList = &gsmsList;
  }
  if ( qword_1C029B960 && (int)qword_1C029B960() >= 0 )
  {
    v4 = 0LL;
    v18 = 0LL;
    if ( qword_1C029B968 )
    {
      qword_1C029B968(&v18);
      v4 = v18;
    }
    if ( *(_QWORD *)v4 )
    {
      NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v4, *(char **)v4);
      *(_QWORD *)v18 = 0LL;
    }
  }
  if ( qword_1C0294DF8 )
  {
    if ( (int)IsFreeMessageListSupported() >= 0 && qword_1C029BE88 )
      qword_1C029BE88((char *)qword_1C0294DF8 + 24);
    NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
      v15,
      (char *)QLookaside,
      (struct _SLIST_ENTRY *)qword_1C0294DF8);
    qword_1C0294DF8 = 0LL;
  }
  if ( QLookaside )
  {
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v4, (char *)QLookaside);
    QLookaside = 0LL;
  }
  v7 = QEntryLookaside;
  if ( QEntryLookaside )
  {
    NSInstrumentation::CLeakTrackingAllocator::FreePagedLookasideList(v4, (char *)QEntryLookaside);
    QEntryLookaside = 0LL;
  }
  if ( gspklGlobalActive )
    HMAssignmentUnlockWorker(&gspklGlobalActive, (__int64)v7, v5, v6);
  if ( gspklWinstaLessSessionLayouts )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  if ( gspklBaseLayout )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  while ( gpwtiFirst )
  {
    v16 = (char *)gpwtiFirst;
    gpwtiFirst = *(void **)gpwtiFirst;
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v16);
  }
  if ( qword_1C0298AD8 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)qword_1C0298AD8);
  if ( gpsdInitWinSta )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpsdInitWinSta);
    gpsdInitWinSta = 0LL;
  }
  if ( gpHandleFlagsMutex )
  {
    ExFreePoolWithTag(gpHandleFlagsMutex, 0);
    gpHandleFlagsMutex = 0LL;
  }
  if ( gpPowerRequestMutex )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpPowerRequestMutex);
    gpPowerRequestMutex = 0LL;
  }
  if ( gpresRender )
  {
    ExDeleteResourceLite(gpresRender);
    ExFreePoolWithTag(gpresRender, 0);
    gpresRender = 0LL;
  }
  if ( gpRemoteSessionOcclusionEvent )
  {
    ObfDereferenceObject(gpRemoteSessionOcclusionEvent);
    gpRemoteSessionOcclusionEvent = 0LL;
  }
  if ( qword_1C029BAA0 && (int)qword_1C029BAA0() >= 0 && qword_1C029BAA8 )
    qword_1C029BAA8();
  if ( DispBroker::DispBrokerClient::s_pSessionBroker )
    ExFreePoolWithTag(DispBroker::DispBrokerClient::s_pSessionBroker, 0x44535042u);
  DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
}
