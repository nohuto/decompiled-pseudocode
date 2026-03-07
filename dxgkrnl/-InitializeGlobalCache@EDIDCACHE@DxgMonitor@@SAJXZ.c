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
