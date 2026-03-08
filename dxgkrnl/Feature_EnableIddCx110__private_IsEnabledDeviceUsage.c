/*
 * XREFs of Feature_EnableIddCx110__private_IsEnabledDeviceUsage @ 0x1C0024584
 * Callers:
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0162810 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C0171DE0 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C017779C (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C01A5DA4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01AE058 (-WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z.c)
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C01F90BC (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C01FA828 (MonitorCreatePhysicalMonitor.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C020D8B0 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     DpiInitializeEx @ 0x1C020F728 (DpiInitializeEx.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0217DE8 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C0218254 (-SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x1C0219CA8 (-OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     DxgkHandleIndirectEscape @ 0x1C03A0354 (DxgkHandleIndirectEscape.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C03BFFD0 (MonitorRemovePhysicalMonitor.c)
 *     ?SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C03C9658 (-SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1C03C987C (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C03CD618 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     Feature_EnableIddCx110__private_IsEnabledFallback @ 0x1C00245BC (Feature_EnableIddCx110__private_IsEnabledFallback.c)
 */

__int64 Feature_EnableIddCx110__private_IsEnabledDeviceUsage()
{
  if ( (Feature_EnableIddCx110__private_featureState & 0x10) != 0 )
    return Feature_EnableIddCx110__private_featureState & 1;
  else
    return Feature_EnableIddCx110__private_IsEnabledFallback(
             (unsigned int)Feature_EnableIddCx110__private_featureState,
             3LL);
}
