/*
 * XREFs of ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C000935C
 * Callers:
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C016ACA0 (MonitorGetPreferredMonitorSourceMode.c)
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C016D868 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C016E85C (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 *     MonitorGetNextFrequencyRange @ 0x1C016F178 (MonitorGetNextFrequencyRange.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     MonitorIsAdvancedColorEnabled @ 0x1C017140C (MonitorIsAdvancedColorEnabled.c)
 *     MonitorGetUsageClass @ 0x1C0171C64 (MonitorGetUsageClass.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C017F2A0 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01AA250 (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     MonitorGetAdvancedColorParams @ 0x1C01ADD58 (MonitorGetAdvancedColorParams.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C01ADF6C (MonitorIsMonitorAndDriverWCGCapable.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01AE290 (DxgkGetAdapterDeviceDesc.c)
 *     MonitorGetIsAutoColorManagementSupported @ 0x1C01B01A4 (MonitorGetIsAutoColorManagementSupported.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C01B0844 (MonitorGetMonitorOrientationsFromMonitor.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01B25E0 (DxgkGetMonitorInternalInfo.c)
 *     MonitorGetPseudoSpecializedState @ 0x1C01D5398 (MonitorGetPseudoSpecializedState.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01D7358 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorGetNativeFlags @ 0x1C01D7E10 (MonitorGetNativeFlags.c)
 *     MonitorIsMonitorEdidless @ 0x1C01D7EB0 (MonitorIsMonitorEdidless.c)
 *     MonitorGetDisplayHdrSupportLevel @ 0x1C01D88B8 (MonitorGetDisplayHdrSupportLevel.c)
 *     MonitorGetEdidFromMonitor @ 0x1C01D9C9C (MonitorGetEdidFromMonitor.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C01E0008 (MonitorFillMonitorDeviceInfo.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0213B3C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     MonitorGetLinkInfoFromMonitor @ 0x1C0213F18 (MonitorGetLinkInfoFromMonitor.c)
 *     MonitorIsPhysicalMonitor @ 0x1C0213F8C (MonitorIsPhysicalMonitor.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0223CC0 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03AEDC4 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     MonitorGetAdvancedColorMetadataOverride @ 0x1C03BF8C4 (MonitorGetAdvancedColorMetadataOverride.c)
 *     MonitorGetCachedApiGammaRampForDiagnostics @ 0x1C03BF97C (MonitorGetCachedApiGammaRampForDiagnostics.c)
 *     MonitorGetLidStateFromMonitor @ 0x1C03BFA14 (MonitorGetLidStateFromMonitor.c)
 *     MonitorGetSDRWhiteLevel @ 0x1C03BFAC8 (MonitorGetSDRWhiteLevel.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C03BFB74 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorIsUsingDefaultMonitorProfile @ 0x1C03BFC50 (MonitorIsUsingDefaultMonitorProfile.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MONITOR_MGR::AcquireMonitorShared(_QWORD *a1, __int64 a2)
{
  if ( a2 )
  {
    *a1 = a2;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a2 + 24), 1u);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
