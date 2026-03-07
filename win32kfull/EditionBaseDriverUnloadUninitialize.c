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
