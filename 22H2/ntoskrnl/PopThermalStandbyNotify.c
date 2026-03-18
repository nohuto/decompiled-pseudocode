/*
 * XREFs of PopThermalStandbyNotify @ 0x14058FC80
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140373610 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x14058F95C (PopThermalCsExit.c)
 *     PopThermalZoneRemove @ 0x14098B0C0 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x140366FF0 (PopDiagTraceEventNoPayload.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopThermalStandbyNotify(char a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = 1;
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_THERMAL_STANDBY_NOTIFICATION);
  }
  else
  {
    v2 = 0;
  }
  return ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_STANDBY, (__int64)&v2);
}
