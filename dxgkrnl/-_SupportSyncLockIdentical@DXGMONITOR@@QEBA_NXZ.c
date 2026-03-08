/*
 * XREFs of ?_SupportSyncLockIdentical@DXGMONITOR@@QEBA_NXZ @ 0x1C02120B4
 * Callers:
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0210E00 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C03C520C (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::_SupportSyncLockIdentical(DXGMONITOR *this)
{
  return (*((_BYTE *)this + 177) & 4) != 0 && (*((_DWORD *)this + 90) & 0x100) != 0;
}
