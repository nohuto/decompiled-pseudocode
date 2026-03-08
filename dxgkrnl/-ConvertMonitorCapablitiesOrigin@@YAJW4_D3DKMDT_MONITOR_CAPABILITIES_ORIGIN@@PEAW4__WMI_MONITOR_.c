/*
 * XREFs of ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C006C044
 * Callers:
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0210E00 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C03C7540 (-OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertMonitorCapablitiesOrigin(
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a1,
        enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *a2)
{
  switch ( a1 )
  {
    case D3DKMDT_MCO_DEFAULTMONITORPROFILE:
      *(_DWORD *)a2 = 1;
      break;
    case D3DKMDT_MCO_MONITORDESCRIPTOR:
      *(_DWORD *)a2 = 2;
      break;
    case D3DKMDT_MCO_MONITORDESCRIPTOR_REGISTRYOVERRIDE:
      *(_DWORD *)a2 = 3;
      break;
    case D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE:
      *(_DWORD *)a2 = 4;
      break;
    default:
      WdLogSingleEntry1(2LL, a1);
      *(_DWORD *)a2 = 0;
      return 3223192407LL;
  }
  return 0LL;
}
