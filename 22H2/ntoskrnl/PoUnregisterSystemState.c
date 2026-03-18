/*
 * XREFs of PoUnregisterSystemState @ 0x14058DEF0
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140875B20 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
