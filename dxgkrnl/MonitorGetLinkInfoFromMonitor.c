/*
 * XREFs of MonitorGetLinkInfoFromMonitor @ 0x1C0213F18
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C00226AC (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01AE02C (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfoFromMonitor(__int64 a1, struct _DXGK_MONITORLINKINFO *a2)
{
  DXGMONITOR *v3; // rbx
  unsigned int LinkInfo; // edi
  DXGMONITOR *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(&v6, a1);
    v3 = v6;
    if ( v6 )
    {
      LinkInfo = DXGMONITOR::_GetLinkInfo(v6, a2);
    }
    else
    {
      LinkInfo = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
    }
    if ( v3 )
    {
      ExReleaseResourceLite((PERESOURCE)((char *)v3 + 24));
      KeLeaveCriticalRegion();
    }
    return LinkInfo;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
