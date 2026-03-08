/*
 * XREFs of ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0159FF8
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?PowerOffSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00DD420 (-PowerOffSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage @ 0x1C00DD67C (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C015AD80 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

void __fastcall PowerOffSession(enum POWER_MONITOR_REQUEST_REASON a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v3; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  v3 = 0;
  if ( (unsigned int)Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage() )
    InputTraceLogging::Power::PowerOffSession(a1);
  if ( !gProtocolType )
  {
    LODWORD(v4) = 2;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v4, 4LL, 0LL, 0LL);
    v3 = 1;
  }
  UpdateSessionPowerState(0, a1);
  if ( v3 )
  {
    LODWORD(v4) = 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v4, 4LL, 0LL, 0LL);
  }
}
