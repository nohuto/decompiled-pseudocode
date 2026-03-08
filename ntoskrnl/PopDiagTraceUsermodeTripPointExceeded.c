/*
 * XREFs of PopDiagTraceUsermodeTripPointExceeded @ 0x14098F160
 * Callers:
 *     PopThermalProcessUsermodeEvent @ 0x140987DC8 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     PopDiagTraceTripPointExceeded @ 0x14098EEE4 (PopDiagTraceTripPointExceeded.c)
 */

char __fastcall PopDiagTraceUsermodeTripPointExceeded(unsigned __int16 a1, __int64 a2, int a3, char a4)
{
  bool v5; // zf
  const EVENT_DESCRIPTOR *v6; // r9
  const EVENT_DESCRIPTOR *v10; // r9

  v5 = a4 == 0;
  v6 = &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC;
  if ( v5 )
    v6 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_S4_TRIP_POINT_DIAGNOSTIC;
  PopDiagTraceTripPointExceeded(a1, a2, a3, v6);
  v10 = &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM;
  if ( !a4 )
    v10 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_S4_TRIP_POINT_SYSTEM;
  return PopDiagTraceTripPointExceeded(a1, a2, a3, v10);
}
