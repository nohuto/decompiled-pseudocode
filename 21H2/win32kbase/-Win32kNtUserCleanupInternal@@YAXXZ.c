/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C007B65C
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0072CCC (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     Win32FreeToPagedLookasideList @ 0x1C002BAA0 (Win32FreeToPagedLookasideList.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMAssignmentUnlock @ 0x1C0030630 (HMAssignmentUnlock.c)
 *     Win32FreePagedLookasideList @ 0x1C007C440 (Win32FreePagedLookasideList.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C007C488 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     IsFreeSMSSupported @ 0x1C007C508 (IsFreeSMSSupported.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C007C890 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     IsFreeMessageListSupported @ 0x1C0095194 (IsFreeMessageListSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     FreeTimer @ 0x1C01FC360 (FreeTimer.c)
 */

void Win32kNtUserCleanupInternal(void)
{
  int v0; // esi
  int v1; // eax
  int v2; // eax
  __int64 *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _QWORD *v14; // rbx
  void *v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v27; // [rsp+50h] [rbp+20h] BYREF
  void *v28; // [rsp+58h] [rbp+28h] BYREF

  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  v0 = -1073741637;
  if ( qword_1C0256B40 )
    v1 = qword_1C0256B40();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0256B48 )
    qword_1C0256B48();
  if ( gpvwplHungRedraw )
  {
    Win32FreePool((__int64)gpvwplHungRedraw);
    gpvwplHungRedraw = 0LL;
  }
  if ( qword_1C0256B50 )
    v2 = qword_1C0256B50();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    v3 = 0LL;
    v27 = 0LL;
    if ( qword_1C0256B58 )
    {
      qword_1C0256B58(&v27);
      v3 = v27;
    }
    v4 = *v3;
    if ( v4 )
    {
      Win32FreePool(v4);
      *v27 = 0LL;
    }
  }
  if ( qword_1C0256B60 )
    v5 = qword_1C0256B60();
  else
    v5 = -1073741637;
  if ( v5 >= 0 )
  {
    v6 = 0LL;
    v27 = 0LL;
    if ( qword_1C0256B68 )
    {
      qword_1C0256B68(&v27);
      v6 = v27;
    }
    v7 = *v6;
    if ( v7 )
    {
      Win32FreePool(v7);
      *v27 = 0LL;
    }
  }
  if ( qword_1C0256B70 )
    v8 = qword_1C0256B70();
  else
    v8 = -1073741637;
  if ( v8 >= 0 )
  {
    v9 = 0LL;
    v27 = 0LL;
    if ( qword_1C0256B78 )
    {
      qword_1C0256B78(&v27);
      v9 = v27;
    }
    v10 = *v9;
    if ( v10 )
    {
      Win32FreePool(v10);
      *v27 = 0LL;
    }
  }
  while ( (__int64 *)gtmrListHead != &gtmrListHead )
  {
    v19 = gtmrListHead - 72;
    if ( qword_1C0256B80 )
      v20 = qword_1C0256B80();
    else
      v20 = -1073741637;
    if ( v20 >= 0 )
      FreeTimer(v19);
  }
  if ( gptmrWD )
  {
    KeCancelTimer(gptmrWD);
    Win32FreePool((__int64)gptmrWD);
    gptmrWD = 0LL;
  }
  if ( gptmrMaster )
  {
    KeCancelTimer(gptmrMaster);
    Win32FreePool((__int64)gptmrMaster);
    gptmrMaster = 0LL;
  }
  if ( gpClipFormatExceptionList )
    Win32FreePool(gpClipFormatExceptionList);
  if ( qword_1C0256BA0 )
    v11 = qword_1C0256BA0();
  else
    v11 = -1073741637;
  if ( v11 >= 0 )
  {
    if ( qword_1C0256BA8 )
    {
      qword_1C0256BA8(&gWndsMonitorSnapshotHead);
      if ( qword_1C0256BA8 )
        qword_1C0256BA8(&gRemoteWndsMonitorSnapshotHead);
    }
  }
  if ( qword_1C02579E8 )
    v12 = qword_1C02579E8();
  else
    v12 = -1073741637;
  if ( v12 >= 0 && qword_1C02579F0 )
    qword_1C02579F0();
  if ( gpEventPnPWainting )
  {
    Win32FreePool(gpEventPnPWainting);
    gpEventPnPWainting = 0LL;
  }
  LODWORD(v27) = 0;
  v28 = 0LL;
  if ( gpresUser )
  {
    while ( (unsigned int)CSTPop((unsigned int *)&v27, &v28) )
    {
      if ( (_DWORD)v27 == 2 || (_DWORD)v27 == 4 )
      {
        v21 = v28;
        v22 = *((_QWORD *)v28 + 1);
        if ( v22 )
        {
          Win32FreePool(v22);
          v21[1] = 0LL;
        }
      }
    }
  }
  gfRecordPnpNotification = 0;
  if ( gpPnpNotificationRecord )
  {
    Win32FreePool((__int64)gpPnpNotificationRecord);
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
    Win32FreePool(gpHidInterfaceGuid);
    gpHidInterfaceGuid = 0LL;
  }
  if ( gThinwireFileObject )
    ObfDereferenceObject(gThinwireFileObject);
  if ( gVideoFileObject )
    ObfDereferenceObject(gVideoFileObject);
  if ( gpRemoteBeepDevice )
    ObfDereferenceObject(gpRemoteBeepDevice);
  if ( gpresPTPEventQueue )
  {
    ExDeleteResourceLite(gpresPTPEventQueue);
    ExFreePoolWithTag(gpresPTPEventQueue, 0);
    gpresPTPEventQueue = 0LL;
  }
  if ( gpEventDiconnectDesktop )
  {
    Win32FreePool(gpEventDiconnectDesktop);
    gpEventDiconnectDesktop = 0LL;
  }
  if ( gpevtDesktopDestroyed )
  {
    Win32FreePool(gpevtDesktopDestroyed);
    gpevtDesktopDestroyed = 0LL;
  }
  if ( gpevtVideoInitialized )
  {
    Win32FreePool((__int64)gpevtVideoInitialized);
    gpevtVideoInitialized = 0LL;
  }
  if ( gpevtQueueReadyForCallout )
  {
    Win32FreePool((__int64)gpevtQueueReadyForCallout);
    gpevtQueueReadyForCallout = 0LL;
  }
  if ( gpevtVideoportCallout )
  {
    Win32FreePool((__int64)gpevtVideoportCallout);
    gpevtVideoportCallout = 0LL;
  }
  if ( gpevtRitReadyForCallOut )
  {
    Win32FreePool(gpevtRitReadyForCallOut);
    gpevtRitReadyForCallOut = 0LL;
  }
  if ( gpevtMonitorPowerWaiter )
  {
    Win32FreePool((__int64)gpevtMonitorPowerWaiter);
    gpevtMonitorPowerWaiter = 0LL;
  }
  if ( gpsemSwitchInProgressWaiters )
  {
    Win32FreePool((__int64)gpsemSwitchInProgressWaiters);
    gpsemSwitchInProgressWaiters = 0LL;
  }
  if ( gpsemDITHitTestWaiters )
  {
    Win32FreePool((__int64)gpsemDITHitTestWaiters);
    gpsemDITHitTestWaiters = 0LL;
  }
  if ( gpsemDITLuidHitTestWaiters )
  {
    Win32FreePool(gpsemDITLuidHitTestWaiters);
    gpsemDITLuidHitTestWaiters = 0LL;
  }
  if ( qword_1C0256BD0 )
    v13 = qword_1C0256BD0();
  else
    v13 = -1073741637;
  if ( v13 >= 0 && qword_1C0256BD8 )
    qword_1C0256BD8();
  if ( gpevtPTPOperation )
  {
    Win32FreePool(gpevtPTPOperation);
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
    Win32FreePool((__int64)gpevtSynthesizedContainerMouseInput);
    gpevtSynthesizedContainerMouseInput = 0LL;
  }
  GetDomainLockRef(17);
  v14 = (_QWORD *)gpJobsList;
  if ( gpJobsList )
  {
    do
    {
      v23 = (__int64)v14;
      v14 = (_QWORD *)*v14;
      v24 = *(_QWORD *)(v23 + 56);
      if ( v24 )
      {
        Win32FreePool(v24);
        *(_QWORD *)(v23 + 56) = 0LL;
      }
      v25 = *(_QWORD *)(v23 + 40);
      if ( v25 )
      {
        Win32FreePool(v25);
        *(_QWORD *)(v23 + 40) = 0LL;
      }
      RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v23 + 16));
      Win32FreePool(v23);
    }
    while ( v14 );
    gpJobsList = 0LL;
  }
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    if ( gsmsList )
    {
      while ( 1 )
      {
        v15 = gsmsList;
        if ( gsmsList == &gsmsList )
          break;
        if ( *((void ***)gsmsList + 1) != &gsmsList
          || (v26 = *(_QWORD *)gsmsList, *(void **)(*(_QWORD *)gsmsList + 8LL) != gsmsList) )
        {
          __fastfail(3u);
        }
        gsmsList = *(void **)gsmsList;
        *(_QWORD *)(v26 + 8) = &gsmsList;
        if ( qword_1C0256BE8 )
          qword_1C0256BE8(v15, 0LL);
      }
    }
    qword_1C0253BD0 = (__int64)&gsmsList;
    gsmsList = &gsmsList;
  }
  if ( qword_1C0256BF0 )
    v16 = qword_1C0256BF0();
  else
    v16 = -1073741637;
  if ( v16 >= 0 )
  {
    v17 = 0LL;
    v27 = 0LL;
    if ( qword_1C0256BF8 )
    {
      qword_1C0256BF8(&v27);
      v17 = v27;
    }
    if ( *v17 )
    {
      Win32FreePagedLookasideList();
      *v27 = 0LL;
    }
  }
  if ( qword_1C0250878 )
  {
    if ( (int)IsFreeMessageListSupported() >= 0 && qword_1C0257148 )
      qword_1C0257148(qword_1C0250878 + 24);
    Win32FreeToPagedLookasideList((__int64)QLookaside, qword_1C0250878);
    qword_1C0250878 = 0LL;
  }
  if ( QLookaside )
  {
    Win32FreePagedLookasideList();
    QLookaside = 0LL;
  }
  if ( QEntryLookaside )
  {
    Win32FreePagedLookasideList();
    QEntryLookaside = 0LL;
  }
  if ( gspklGlobalActive )
    HMAssignmentUnlock(&gspklGlobalActive);
  if ( gspklWinstaLessSessionLayouts )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  if ( gspklBaseLayout )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  while ( 1 )
  {
    v18 = gpwtiFirst;
    if ( !gpwtiFirst )
      break;
    gpwtiFirst = *(_QWORD *)gpwtiFirst;
    Win32FreePool(v18);
  }
  if ( qword_1C0253C10 )
    Win32FreePool(qword_1C0253C10);
  if ( gpsdInitWinSta )
  {
    Win32FreePool(gpsdInitWinSta);
    gpsdInitWinSta = 0LL;
  }
  if ( gpHandleFlagsMutex )
  {
    ExFreePoolWithTag(gpHandleFlagsMutex, 0);
    gpHandleFlagsMutex = 0LL;
  }
  if ( gpPowerRequestMutex )
  {
    Win32FreePool((__int64)gpPowerRequestMutex);
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
  if ( qword_1C0256D50 )
    v0 = qword_1C0256D50();
  if ( v0 >= 0 && qword_1C0256D58 )
    qword_1C0256D58();
  if ( DispBroker::DispBrokerClient::s_pSessionBroker )
    ExFreePoolWithTag(DispBroker::DispBrokerClient::s_pSessionBroker, 0x44535042u);
  DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
}
