/*
 * XREFs of MonitorIsMonitorAndLinkHDRCapable @ 0x1C03BFB74
 * Callers:
 *     ?DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEAUHDXGMONITOR__@@@Z @ 0x1C01689F8 (-DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C0171DE0 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01AE02C (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorAndLinkHDRCapable(__int64 a1, union MONITOR_AND_LINK_HDR_CAPS *a2)
{
  DXGMONITOR *v3; // rbx
  unsigned int v4; // edi
  int LinkInfo; // eax
  struct _DXGK_MONITORLINKINFO v7; // [rsp+20h] [rbp-18h] BYREF
  DXGMONITOR *v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  *(_DWORD *)a2 = 0;
  MONITOR_MGR::AcquireMonitorShared(&v8, a1);
  v3 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v7.UsageHints.0 = 0LL;
    v7.DitheringSupport.Value = 0;
    LinkInfo = DXGMONITOR::_GetLinkInfo(v8, &v7);
    if ( LinkInfo != -1073741275 )
    {
      if ( LinkInfo < 0 )
      {
        v4 = LinkInfo;
        goto LABEL_10;
      }
      DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(*((DxgMonitor::MonitorColorState **)v3 + 28), &v7, a2);
    }
    v4 = 0;
    goto LABEL_10;
  }
  v4 = -1073741275;
  WdLogSingleEntry1(2LL, -1073741275LL);
LABEL_10:
  if ( v3 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v3 + 24));
    KeLeaveCriticalRegion();
  }
  return v4;
}
