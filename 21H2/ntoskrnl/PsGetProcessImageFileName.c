/*
 * XREFs of PsGetProcessImageFileName @ 0x140238FD0
 * Callers:
 *     ObCheckRefTraceProcess @ 0x14066D3F8 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x1407FBA68 (PiUEventHandleVetoEvent.c)
 *     PopDiagTraceExecutePowerAction @ 0x1407FF0A8 (PopDiagTraceExecutePowerAction.c)
 *     PnpLogVetoInformation @ 0x140950744 (PnpLogVetoInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1448;
}
