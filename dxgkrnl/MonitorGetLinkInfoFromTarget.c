/*
 * XREFs of MonitorGetLinkInfoFromTarget @ 0x1C01B0120
 * Callers:
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C0176944 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C01B0450 (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C02F5694 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0009184 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01AE02C (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfoFromTarget(__int64 a1, unsigned int a2, struct _DXGK_MONITORLINKINFO *a3)
{
  DXGMONITOR *v4; // rbx
  unsigned int LinkInfo; // edi
  DXGMONITOR *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 == -1 )
    {
      return -1073741275LL;
    }
    else
    {
      MONITOR_MGR::AcquireMonitorShared(&v7, a1, a2);
      v4 = v7;
      if ( v7 )
      {
        LinkInfo = DXGMONITOR::_GetLinkInfo(v7, a3);
      }
      else
      {
        LinkInfo = -1073741275;
        WdLogSingleEntry1(2LL, -1073741275LL);
      }
      if ( v4 )
      {
        ExReleaseResourceLite((PERESOURCE)((char *)v4 + 24));
        KeLeaveCriticalRegion();
      }
      return LinkInfo;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    return 3221225485LL;
  }
}
