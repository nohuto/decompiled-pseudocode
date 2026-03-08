/*
 * XREFs of EditionBaseDriverUnloadUninitialize @ 0x1C00E23C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C0077C24 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     UnloadWin32kCall @ 0x1C00E2430 (UnloadWin32kCall.c)
 *     ?OnDriverUnload@CTopologyManager@@SAXXZ @ 0x1C00E2B54 (-OnDriverUnload@CTopologyManager@@SAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C00F62D8 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 */

__int64 EditionBaseDriverUnloadUninitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  struct CMonitorTopology *v3; // rcx

  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  CRapidHpdInfo::Delete(3LL, v0, v1, v2);
  v3 = DesktopRecalc::pmrLastConnected;
  if ( DesktopRecalc::pmrLastConnected
    && _InterlockedExchangeAdd((volatile signed __int32 *)DesktopRecalc::pmrLastConnected, 0xFFFFFFFF) == 1 )
  {
    Win32FreePool(v3);
  }
  CTopologyManager::OnDriverUnload();
  UnloadWin32kCall();
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
  return 0LL;
}
