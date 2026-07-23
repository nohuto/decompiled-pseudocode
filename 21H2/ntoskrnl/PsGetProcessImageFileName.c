/*
 * XREFs of PsGetProcessImageFileName @ 0x14023C3D0
 * Callers:
 *     ObCheckRefTraceProcess @ 0x140697404 (ObCheckRefTraceProcess.c)
 *     PnpLogVetoInformation @ 0x140732954 (PnpLogVetoInformation.c)
 *     PiUEventHandleVetoEvent @ 0x14076E8D8 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessImageFileName(__int64 a1)
{
  return a1 + 1448;
}
