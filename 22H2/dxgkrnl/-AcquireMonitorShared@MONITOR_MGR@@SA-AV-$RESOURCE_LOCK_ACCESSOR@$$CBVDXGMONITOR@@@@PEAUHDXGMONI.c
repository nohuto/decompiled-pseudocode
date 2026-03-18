/*
 * XREFs of ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0007198
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C016F150 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C01774C0 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0177C60 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 *     MonitorGetNextFrequencyRange @ 0x1C0178558 (MonitorGetNextFrequencyRange.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0178EE0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C017B3DC (MonitorFillMonitorDeviceInfo.c)
 *     MonitorGetUsageClass @ 0x1C0183844 (MonitorGetUsageClass.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C018649C (MonitorGetPreferredMonitorSourceMode.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C019B748 (MonitorGetMonitorOrientationsFromMonitor.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C019BA70 (DxgkGetAdapterDeviceDesc.c)
 *     MonitorGetIsAutoColorManagementSupported @ 0x1C019D900 (MonitorGetIsAutoColorManagementSupported.c)
 *     MonitorGetAdvancedColorParams @ 0x1C019D9FC (MonitorGetAdvancedColorParams.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C019DC10 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01A0250 (DxgkGetMonitorInternalInfo.c)
 *     _lambda_b5f01eb3f4b149c357ab2eab84592b3f_::operator() @ 0x1C01ABA70 (_lambda_b5f01eb3f4b149c357ab2eab84592b3f_--operator().c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AD190 (DxgkDisplayConfigDeviceInfo.c)
 *     MonitorGetEdidFromMonitor @ 0x1C01D8A3C (MonitorGetEdidFromMonitor.c)
 *     MonitorGetPseudoSpecializedState @ 0x1C01E1E18 (MonitorGetPseudoSpecializedState.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01E4278 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorGetNativeFlags @ 0x1C01E4C78 (MonitorGetNativeFlags.c)
 *     MonitorIsMonitorEdidless @ 0x1C01E53BC (MonitorIsMonitorEdidless.c)
 *     MonitorGetDisplayHdrSupportLevel @ 0x1C01E5438 (MonitorGetDisplayHdrSupportLevel.c)
 *     MonitorIsAdvancedColorEnabled @ 0x1C01E6268 (MonitorIsAdvancedColorEnabled.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C022211C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     MonitorGetLinkInfoFromMonitor @ 0x1C02224F8 (MonitorGetLinkInfoFromMonitor.c)
 *     MonitorIsPhysicalMonitor @ 0x1C022256C (MonitorIsPhysicalMonitor.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0232260 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C03B3684 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 *     MonitorGetAdvancedColorMetadataOverride @ 0x1C03C4184 (MonitorGetAdvancedColorMetadataOverride.c)
 *     MonitorGetCachedApiGammaRampForDiagnostics @ 0x1C03C423C (MonitorGetCachedApiGammaRampForDiagnostics.c)
 *     MonitorGetLidStateFromMonitor @ 0x1C03C42D4 (MonitorGetLidStateFromMonitor.c)
 *     MonitorGetSDRWhiteLevel @ 0x1C03C4388 (MonitorGetSDRWhiteLevel.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C03C4434 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorIsUsingDefaultMonitorProfile @ 0x1C03C4510 (MonitorIsUsingDefaultMonitorProfile.c)
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
