/*
 * XREFs of ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01AE02C
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C01ADF6C (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C01B0120 (MonitorGetLinkInfoFromTarget.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01B25E0 (DxgkGetMonitorInternalInfo.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0210E00 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0213B3C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     MonitorGetLinkInfoFromMonitor @ 0x1C0213F18 (MonitorGetLinkInfoFromMonitor.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C03BFB74 (MonitorIsMonitorAndLinkHDRCapable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetLinkInfo(DXGMONITOR *this, struct _DXGK_MONITORLINKINFO *a2)
{
  if ( (*((_BYTE *)this + 177) & 4) != 0 )
  {
    *a2 = *(struct _DXGK_MONITORLINKINFO *)((char *)this + 356);
    return 0LL;
  }
  else
  {
    *(_QWORD *)&a2->UsageHints.0 = 0LL;
    a2->DitheringSupport.Value = 0;
    return 3221226021LL;
  }
}
