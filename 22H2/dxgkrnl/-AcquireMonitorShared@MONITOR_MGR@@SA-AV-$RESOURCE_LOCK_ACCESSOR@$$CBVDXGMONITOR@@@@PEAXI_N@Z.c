/*
 * XREFs of ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000882C
 * Callers:
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C0193AA8 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C019ADDC (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     MonitorGetLinkInfoFromTarget @ 0x1C019D978 (MonitorGetLinkInfoFromTarget.c)
 *     MonitorGetDeviceObject @ 0x1C01AC5FC (MonitorGetDeviceObject.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01DAF30 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C01DBABC (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorGetPreferredScaleFactor @ 0x1C01DC15C (MonitorGetPreferredScaleFactor.c)
 *     MonitorIsBoostRefreshRateEnabledByDefault @ 0x1C01E7660 (MonitorIsBoostRefreshRateEnabledByDefault.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C020F9F8 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C020FD68 (MonitorGetContainerIDFromDescriptor.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C021075C (MonitorGetMonitorDescriptorIDs.c)
 *     DpiPdoHandleQueryDeviceText @ 0x1C0222EF0 (DpiPdoHandleQueryDeviceText.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AC420 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
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
