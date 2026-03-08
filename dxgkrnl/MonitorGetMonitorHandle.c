/*
 * XREFs of MonitorGetMonitorHandle @ 0x1C0171B54
 * Callers:
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C0167480 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C0171AB4 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01D9AB0 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01E80D0 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0213B3C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x1C0218790 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0223CC0 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     DxgkIsMonitorConnected @ 0x1C02CE070 (DxgkIsMonitorConnected.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C02F7E30 (DxgkHandleForceProjectionMonitor.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x1C03C16B0 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x1C03C1F30 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0009978 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01AAC00 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C01B0804 (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall MonitorGetMonitorHandle(__int64 a1, __int64 a2, __int64 a3, void *a4, _QWORD *a5)
{
  __int64 v6; // r14
  unsigned __int8 v7; // r12
  __int64 v9; // rax
  _QWORD *v10; // rsi
  MONITOR_MGR *v11; // rdi
  int MonitorInstance; // eax
  unsigned int v13; // ebx
  DXGMONITOR *v14; // rbx
  struct DXGMONITOR *v16; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  v7 = a3;
  v9 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = a1;
  if ( !a1 )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  *a5 = 0LL;
  if ( !*(_QWORD *)(a1 + 2920) )
    WdLogSingleEntry0(1LL);
  v11 = *(MONITOR_MGR **)(*(_QWORD *)(a1 + 2920) + 112LL);
  if ( !v11 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  v16 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v11, v6, v7, &v16);
  v13 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry2(7LL, (unsigned int)v6, v11);
    return 3221226021LL;
  }
  else if ( MonitorInstance < 0 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v6, v11);
    return v13;
  }
  else
  {
    v14 = v16;
    if ( !v16 )
      WdLogSingleEntry0(1LL);
    DXGMONITOR::_AddReference(v14, a4);
    *v10 = MONITOR_MGR::_GetMonitorHandle(v14);
    return 0LL;
  }
}
