/*
 * XREFs of DxgkUnload @ 0x1C0305A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DxgkEtwShutdown @ 0x1C004D7AC (DxgkEtwShutdown.c)
 *     ?DxgkDiagShutdown@@YAJXZ @ 0x1C004DB94 (-DxgkDiagShutdown@@YAJXZ.c)
 *     ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C004E140 (-DxgkCleanupTelemetry@@YAXXZ.c)
 *     MonitorCleanupGlobal @ 0x1C006AF64 (MonitorCleanupGlobal.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C030D864 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DpiCleanUpGlobalState @ 0x1C03957C0 (DpiCleanUpGlobalState.c)
 *     DxgkCleanupPower @ 0x1C0395C18 (DxgkCleanupPower.c)
 */

void DxgkUnload()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9

  PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 1u);
  WdLogSingleEntry1(2LL, 1580LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Dxgkrnl unloaded!", 1580LL, 0LL, 0LL, 0LL, 0LL);
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
  if ( byte_1C013BB42 )
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
  if ( byte_1C013BB41 )
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
}
