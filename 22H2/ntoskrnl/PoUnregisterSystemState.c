/*
 * XREFs of PoUnregisterSystemState @ 0x14056EF80
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x1406A6180 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
