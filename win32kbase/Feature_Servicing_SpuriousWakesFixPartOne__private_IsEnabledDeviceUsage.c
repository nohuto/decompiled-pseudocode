/*
 * XREFs of Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage @ 0x1C00DD67C
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0080790 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x1C00F35E0 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0159EA0 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0159FF8 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C015A0B8 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C015A9DC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerOffMonitor @ 0x1C015BA60 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C015BD90 (PowerOnMonitor.c)
 *     EtwTraceDisplayChange @ 0x1C0161E80 (EtwTraceDisplayChange.c)
 *     rimIsWakeablePointerFrame @ 0x1C01CF08C (rimIsWakeablePointerFrame.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C020FB30 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledFallback @ 0x1C00DD6B4 (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_SpuriousWakesFixPartOne__private_featureState & 0x10) != 0 )
    return Feature_Servicing_SpuriousWakesFixPartOne__private_featureState & 1;
  else
    return Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_SpuriousWakesFixPartOne__private_featureState,
             3LL);
}
