/*
 * XREFs of EditionBaseDriverUnloadUninitialize @ 0x1C00BECD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C00BD808 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C00BE6F8 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     UnloadWin32kCall @ 0x1C00BED48 (UnloadWin32kCall.c)
 *     ?OnDriverUnload@CTopologyManager@@SAXXZ @ 0x1C00BF49C (-OnDriverUnload@CTopologyManager@@SAXXZ.c)
 */

__int64 EditionBaseDriverUnloadUninitialize()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct CMonitorTopology *v2; // rcx

  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent();
  CRapidHpdInfo::Delete(3u, v0, v1);
  v2 = DesktopRecalc::pmrLastConnected;
  if ( DesktopRecalc::pmrLastConnected
    && _InterlockedExchangeAdd((volatile signed __int32 *)DesktopRecalc::pmrLastConnected, 0xFFFFFFFF) == 1 )
  {
    Win32FreePool(v2);
  }
  CTopologyManager::OnDriverUnload();
  UnloadWin32kCall();
  if ( g_wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    g_wil_details_featureChangeNotification = 0LL;
  }
  g_wil_details_isFeatureStagingInitialized = 0;
  return 0LL;
}
