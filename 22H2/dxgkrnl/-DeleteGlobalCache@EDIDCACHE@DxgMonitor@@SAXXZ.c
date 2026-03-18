/*
 * XREFs of ?DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ @ 0x1C03C55C4
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C006BB94 (MonitorCleanupGlobal.c)
 * Callees:
 *     ??_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006BC30 (--_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z.c)
 */

void DxgMonitor::EDIDCACHE::DeleteGlobalCache(void)
{
  if ( DxgMonitor::EDIDCACHE::s_pEdidCache )
    DxgMonitor::EDIDCACHE::`scalar deleting destructor'((DxgMonitor::EDIDCACHE *)DxgMonitor::EDIDCACHE::s_pEdidCache, 1);
  DxgMonitor::EDIDCACHE::s_pEdidCache = 0LL;
}
