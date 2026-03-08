/*
 * XREFs of MonitorIsMonitorAndDriverWCGCapable @ 0x1C01ADF6C
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01AE02C (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01AE058 (-WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01B0348 (-IsAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 */

__int64 __fastcall MonitorIsMonitorAndDriverWCGCapable(__int64 a1, bool *a2)
{
  DXGMONITOR *v3; // rbx
  int LinkInfo; // eax
  DxgMonitor::MonitorColorState *v5; // rdi
  bool v6; // al
  unsigned int v7; // edi
  __int64 v9; // rax
  struct _DXGK_MONITORLINKINFO v10; // [rsp+20h] [rbp-18h] BYREF
  DXGMONITOR *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  *a2 = 0;
  MONITOR_MGR::AcquireMonitorShared(&v11, a1);
  v3 = v11;
  if ( !v11 )
  {
    v7 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    goto LABEL_9;
  }
  *(_QWORD *)&v10.UsageHints.0 = 0LL;
  v10.DitheringSupport.Value = 0;
  LinkInfo = DXGMONITOR::_GetLinkInfo(v11, &v10);
  if ( LinkInfo != -1073741275 )
  {
    if ( LinkInfo < 0 )
    {
      v7 = LinkInfo;
      goto LABEL_9;
    }
    v5 = (DxgMonitor::MonitorColorState *)*((_QWORD *)v3 + 28);
    v6 = 0;
    if ( DxgMonitor::MonitorColorState::WcgDriverCapsSet(v5, &v10)
      && DxgMonitor::MonitorColorState::IsAutoColorManagementSupported(v5) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 32LL))(*(_QWORD *)v5);
      if ( (*(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) + 48) & 8) != 0 )
        v6 = 1;
    }
    *a2 = v6;
  }
  v7 = 0;
LABEL_9:
  if ( v3 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v3 + 24));
    KeLeaveCriticalRegion();
  }
  return v7;
}
