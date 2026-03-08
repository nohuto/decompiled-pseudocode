/*
 * XREFs of PsGetProcessImageFileName @ 0x1402E1550
 * Callers:
 *     ObCheckRefTraceProcess @ 0x14070E7D8 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x14087E074 (PiUEventHandleVetoEvent.c)
 *     NtCreateIoRing @ 0x140947140 (NtCreateIoRing.c)
 *     PnpLogVetoInformation @ 0x140961470 (PnpLogVetoInformation.c)
 *     PopDiagTraceExecutePowerAction @ 0x14098BC1C (PopDiagTraceExecutePowerAction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1448;
}
