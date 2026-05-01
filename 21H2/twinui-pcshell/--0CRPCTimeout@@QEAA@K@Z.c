/*
 * XREFs of ??0CRPCTimeout@@QEAA@K@Z @ 0x1801E9418
 * Callers:
 *     ?QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z @ 0x1801EFB90 (-QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEA.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180203188 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _lambda_4b23a44972d25bfc52aa58256fd4c9b9_::operator() @ 0x1802DA790 (_lambda_4b23a44972d25bfc52aa58256fd4c9b9_--operator().c)
 *     _lambda_cf21efff913cfa189e82bd10310d9d23_::operator() @ 0x1802DAF70 (_lambda_cf21efff913cfa189e82bd10310d9d23_--operator().c)
 *     ?OnTabMenuItemsRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerMenuItemsRequestedEventArgs@3456@@Z @ 0x1802E3460 (-OnTabMenuItemsRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@W.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x1802EDAE0 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x1802EE0C4 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate.c)
 *     _lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator() @ 0x1802FD4C8 (_lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator().c)
 *     _lambda_476f18e24aa1fbee26857ac5b809e782_::operator() @ 0x1802FD8D8 (_lambda_476f18e24aa1fbee26857ac5b809e782_--operator().c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x1802FF394 (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?PerformDrop@TabTransferManager@@AEAAXXZ @ 0x1802FFA04 (-PerformDrop@TabTransferManager@@AEAAXXZ.c)
 *     _lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator() @ 0x18033A048 (_lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--operator().c)
 *     _lambda_1c848fc40f8d66460ef5049a4e343f17_::operator() @ 0x18034ADF4 (_lambda_1c848fc40f8d66460ef5049a4e343f17_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___::Run @ 0x18034BE30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___--Run.c)
 * Callees:
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x1801EB494 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 */

CRPCTimeout *__fastcall CRPCTimeout::CRPCTimeout(CRPCTimeout *this, DWORD DueTime)
{
  DWORD CurrentThreadId; // eax
  HRESULT v5; // eax
  DWORD v6; // eax

  CurrentThreadId = GetCurrentThreadId();
  *((_QWORD *)this + 2) = 0LL;
  *(_DWORD *)this = CurrentThreadId;
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 2) = -2147467259;
  CBaseRPCTimeout::Disarm(this);
  v5 = CoEnableCallCancellation(0LL);
  *((_DWORD *)this + 2) = v5;
  if ( v5 >= 0 )
  {
    v6 = 5000;
    if ( DueTime )
      v6 = DueTime;
    CreateTimerQueueTimer((PHANDLE)this + 2, 0LL, CBaseRPCTimeout::s_Callback, this, v6, 0x3E8u, 0);
  }
  return this;
}
