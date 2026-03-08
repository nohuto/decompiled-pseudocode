/*
 * XREFs of MonitorGetMonitorOrientationsFromMonitor @ 0x1C01B0844
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C01B25E0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z @ 0x1C01B08C8 (-_GetMonitorOrientation@DXGMONITOR@@QEBAJPEAK0@Z.c)
 */

__int64 __fastcall MonitorGetMonitorOrientationsFromMonitor(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  DXGMONITOR *v5; // rbx
  unsigned int MonitorOrientation; // edi
  DXGMONITOR *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(&v8, a1);
    v5 = v8;
    if ( v8 )
    {
      MonitorOrientation = DXGMONITOR::_GetMonitorOrientation(v8, a2, a3);
    }
    else
    {
      MonitorOrientation = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    if ( v5 )
    {
      ExReleaseResourceLite((PERESOURCE)((char *)v5 + 24));
      KeLeaveCriticalRegion();
    }
    return MonitorOrientation;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
