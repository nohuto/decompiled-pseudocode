/*
 * XREFs of PoSetPowerRequest @ 0x1402BBD20
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x1402B8C40 (PopApplyLegacyPowerRequestFlags.c)
 * Callees:
 *     PopPowerRequestReferenceAcquire @ 0x1402BBDF0 (PopPowerRequestReferenceAcquire.c)
 */

NTSTATUS __stdcall PoSetPowerRequest(PVOID PowerRequest, POWER_REQUEST_TYPE Type)
{
  __int32 v2; // edx

  if ( Type && (v2 = Type - 1) != 0 && (unsigned int)(v2 - 1) >= 2 )
    return -1073741637;
  else
    return PopPowerRequestReferenceAcquire(PowerRequest);
}
