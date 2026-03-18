/*
 * XREFs of ?InitializeGlobalCache@EDIDCACHE@DxgMonitor@@SAJXZ @ 0x1C020AF74
 * Callers:
 *     MonitorInitializeGlobal @ 0x1C020A038 (MonitorInitializeGlobal.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0EDIDCACHE@DxgMonitor@@QEAA@XZ @ 0x1C020AFBC (--0EDIDCACHE@DxgMonitor@@QEAA@XZ.c)
 */

__int64 DxgMonitor::EDIDCACHE::InitializeGlobalCache(void)
{
  DxgMonitor::EDIDCACHE *v0; // rax

  v0 = (DxgMonitor::EDIDCACHE *)operator new[](0x2A8uLL, 0x4D677844u, 256LL);
  if ( v0 )
  {
    DxgMonitor::EDIDCACHE::s_pEdidCache = (PVOID)DxgMonitor::EDIDCACHE::EDIDCACHE(v0);
    if ( DxgMonitor::EDIDCACHE::s_pEdidCache )
      return 0LL;
  }
  else
  {
    DxgMonitor::EDIDCACHE::s_pEdidCache = 0LL;
  }
  WdLogSingleEntry0(6LL);
  return 3221225495LL;
}
