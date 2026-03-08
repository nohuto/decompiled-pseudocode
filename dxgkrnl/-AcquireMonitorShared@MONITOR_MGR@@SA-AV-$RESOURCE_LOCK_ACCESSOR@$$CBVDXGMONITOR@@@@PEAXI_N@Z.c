/*
 * XREFs of ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C0009184
 * Callers:
 *     MonitorGetPreferredScaleFactor @ 0x1C01673EC (MonitorGetPreferredScaleFactor.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C0168844 (MonitorGetDpiInfoFromDescriptor.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0169828 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     MonitorIsBoostRefreshRateEnabledByDefault @ 0x1C0171484 (MonitorIsBoostRefreshRateEnabledByDefault.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C017FDC8 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C01821A4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     MonitorGetDeviceObject @ 0x1C01AAF60 (MonitorGetDeviceObject.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C01B0120 (MonitorGetLinkInfoFromTarget.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0200E78 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C02011E8 (MonitorGetContainerIDFromDescriptor.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C0201BDC (MonitorGetMonitorDescriptorIDs.c)
 *     DpiPdoHandleQueryDeviceText @ 0x1C0214910 (DpiPdoHandleQueryDeviceText.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AAC00 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

struct DXGMONITOR **__fastcall MONITOR_MGR::AcquireMonitorShared(struct DXGMONITOR **a1, __int64 a2, unsigned int a3)
{
  MONITOR_MGR *v6; // rcx
  struct DXGMONITOR *v7; // rdi
  struct DXGMONITOR *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !*(_QWORD *)(a2 + 2920) )
    WdLogSingleEntry0(1LL);
  v6 = *(MONITOR_MGR **)(*(_QWORD *)(a2 + 2920) + 112LL);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a2);
    goto LABEL_8;
  }
  v9 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v6, a3, 1u, &v9) < 0 )
  {
LABEL_8:
    *a1 = 0LL;
    return a1;
  }
  v7 = v9;
  *a1 = v9;
  if ( v7 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v7 + 24), 1u);
  }
  return a1;
}
