/*
 * XREFs of PopThermalStandbyNotify @ 0x14058D750
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14039CAB4 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x14058D42C (PopThermalCsExit.c)
 *     PopThermalZoneRemove @ 0x140988010 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1402FBBF8 (PopDiagTraceEventNoPayload.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
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
