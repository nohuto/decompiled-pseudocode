/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x14059277C
 * Callers:
 *     PopThermalZoneRemove @ 0x140988010 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x140592798 (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
}
