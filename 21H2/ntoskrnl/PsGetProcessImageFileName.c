/*
 * XREFs of PsGetProcessImageFileName @ 0x1402BDD90
 * Callers:
 *     ObCheckRefTraceProcess @ 0x140607974 (ObCheckRefTraceProcess.c)
 *     PnpLogVetoInformation @ 0x140732794 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x14076E718 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1448;
}
