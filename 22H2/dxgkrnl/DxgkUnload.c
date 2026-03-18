/*
 * XREFs of DxgkUnload @ 0x1C030A890
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     DxgkEtwShutdown @ 0x1C004E80C (DxgkEtwShutdown.c)
 *     ?DxgkDiagShutdown@@YAJXZ @ 0x1C004EBF4 (-DxgkDiagShutdown@@YAJXZ.c)
 *     ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C004F1A0 (-DxgkCleanupTelemetry@@YAXXZ.c)
 *     MonitorCleanupGlobal @ 0x1C006BB94 (MonitorCleanupGlobal.c)
 *     wil_UninitializeFeatureStaging @ 0x1C01673F4 (wil_UninitializeFeatureStaging.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0312694 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DpiCleanUpGlobalState @ 0x1C039A0A0 (DpiCleanUpGlobalState.c)
 *     DxgkCleanupPower @ 0x1C039A4F8 (DxgkCleanupPower.c)
 */

__int64 DxgkUnload()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9

  PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 1u);
  WdLogSingleEntry1(2LL, 1588LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Dxgkrnl unloaded!", 1588LL, 0LL, 0LL, 0LL, 0LL);
  SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
  MonitorCleanupGlobal(v1, v0, v2, v3);
  if ( CCD_BTL::m_pGlobalBtl )
  {
    (*(void (__fastcall **)(struct CCD_BTL *, __int64))(*(_QWORD *)CCD_BTL::m_pGlobalBtl + 8LL))(
      CCD_BTL::m_pGlobalBtl,
      1LL);
    CCD_BTL::m_pGlobalBtl = 0LL;
  }
  DxgkCleanupPower();
  DpiCleanUpGlobalState();
  if ( byte_1C0140B31 )
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
  if ( byte_1C0140B30 )
  {
    KeDeregisterBugCheckReasonCallback(P);
    ExFreePoolWithTag(P, 0x4B677844u);
    P = 0LL;
    KtriageDumpDataArray = 0LL;
  }
  DxgkEtwShutdown();
  if ( gScreenStudyEventSubscription )
  {
    ExUnsubscribeWnfStateChange(gScreenStudyEventSubscription);
    gScreenStudyEventSubscription = 0LL;
  }
  DxgkCleanupTelemetry();
  DxgkDiagShutdown();
  if ( g_pDeviceObject )
  {
    IoUnregisterShutdownNotification((PDEVICE_OBJECT)g_pDeviceObject);
    IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
    g_pDeviceObject = 0LL;
  }
  DXGGLOBAL::DestroyGlobal();
  PsTlsFree(g_DxgkThreadTlsId);
  g_DxgkThreadTlsId = -1;
  ExDeleteLookasideListEx(&g_DxgkThreadLookasideList);
  operator delete(g_RegistryPath.Buffer);
  g_RegistryPath = 0LL;
  return wil_UninitializeFeatureStaging();
}
