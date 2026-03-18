/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x140594C98
 * Callers:
 *     PopThermalZoneRemove @ 0x14098B0C0 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalStateChange @ 0x140594CB4 (PopDiagTraceThermalStateChange.c)
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(__int64 a1, __int64 a2)
{
  return PopDiagTraceThermalStateChange(a1, a2, POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
}
