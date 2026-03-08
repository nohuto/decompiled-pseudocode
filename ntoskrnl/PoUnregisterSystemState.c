/*
 * XREFs of PoUnregisterSystemState @ 0x14058B9C0
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140872C60 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
