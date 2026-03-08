/*
 * XREFs of ?DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ @ 0x1C03C0D68
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C006AF64 (MonitorCleanupGlobal.c)
 * Callees:
 *     ??_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006B000 (--_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z.c)
 */

void DxgMonitor::EDIDCACHE::DeleteGlobalCache(void)
{
  if ( DxgMonitor::EDIDCACHE::s_pEdidCache )
    DxgMonitor::EDIDCACHE::`scalar deleting destructor'((DxgMonitor::EDIDCACHE *)DxgMonitor::EDIDCACHE::s_pEdidCache, 1);
  DxgMonitor::EDIDCACHE::s_pEdidCache = 0LL;
}
