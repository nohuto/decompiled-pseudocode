/*
 * XREFs of PsGetProcessImageFileName @ 0x14034DEF0
 * Callers:
 *     ObCheckRefTraceProcess @ 0x1406BA268 (ObCheckRefTraceProcess.c)
 *     PiUEventHandleVetoEvent @ 0x140882E18 (PiUEventHandleVetoEvent.c)
 *     NtCreateIoRing @ 0x14094A160 (NtCreateIoRing.c)
 *     PnpLogVetoInformation @ 0x140964490 (PnpLogVetoInformation.c)
 *     PopDiagTraceExecutePowerAction @ 0x14098ECCC (PopDiagTraceExecutePowerAction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1448;
}
