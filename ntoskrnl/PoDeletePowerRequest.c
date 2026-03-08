/*
 * XREFs of PoDeletePowerRequest @ 0x140872C60
 * Callers:
 *     PoUnregisterSystemState @ 0x14058B9C0 (PoUnregisterSystemState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PopPowerRequestHandleClose @ 0x1402BBD4C (PopPowerRequestHandleClose.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestHandleClose(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
