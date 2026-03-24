/*
 * XREFs of PsGetProcessImageFileName @ 0x140316ED0
 * Callers:
 *     ObCheckRefTraceProcess @ 0x140607DD4 (ObCheckRefTraceProcess.c)
 *     PnpLogVetoInformation @ 0x140732AE4 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x14076DDE8 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1448;
}
