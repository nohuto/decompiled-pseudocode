/*
 * XREFs of PopDiagTraceSuperfetchNotification @ 0x140777018
 * Callers:
 *     PopDispatchSuperfetchNotification @ 0x140777044 (PopDispatchSuperfetchNotification.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1403265D4 (PopDiagTraceEventNoPayload.c)
 */

void __fastcall PopDiagTraceSuperfetchNotification(char a1)
{
  bool v1; // zf
  const EVENT_DESCRIPTOR *v2; // rcx

  v1 = a1 == 0;
  v2 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_SUPERFETCH_START;
  if ( v1 )
    v2 = &POP_ETW_EVENT_SUPERFETCH_STOP;
  PopDiagTraceEventNoPayload(v2);
}
