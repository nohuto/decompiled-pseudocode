/*
 * XREFs of ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C015A0B8
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00B4A78 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     EtwTracePowerOnMonitorEnd @ 0x1C00D382C (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C00D384C (EtwTracPowerOnMonitoreBegin.c)
 *     ?PowerOnSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x1C00DD56C (-PowerOnSession@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z.c)
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage @ 0x1C00DD67C (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C015AD80 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 */

__int64 __fastcall PowerOnSession(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v4 = 0;
  EtwTracPowerOnMonitoreBegin(0LL, a2, a3);
  if ( (unsigned int)Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage() )
    InputTraceLogging::Power::PowerOnSession();
  if ( !gProtocolType )
  {
    v8 = 1;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v8, 4LL, 0LL, 0LL);
    v4 = 1;
  }
  UpdateSessionPowerState(1, a1);
  if ( v4 )
  {
    v8 = 3;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v8, 4LL, 0LL, 0LL);
  }
  return EtwTracePowerOnMonitorEnd(0LL, v5, v6);
}
