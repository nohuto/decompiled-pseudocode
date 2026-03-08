/*
 * XREFs of PoClearPowerRequest @ 0x1402B9010
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x1402B8C40 (PopApplyLegacyPowerRequestFlags.c)
 * Callees:
 *     PopPowerRequestReferenceRelease @ 0x1402BA084 (PopPowerRequestReferenceRelease.c)
 */

NTSTATUS __stdcall PoClearPowerRequest(PVOID PowerRequest, POWER_REQUEST_TYPE Type)
{
  __int32 v2; // edx

  if ( Type && (v2 = Type - 1) != 0 && (unsigned int)(v2 - 1) >= 2 )
    return -1073741637;
  else
    return PopPowerRequestReferenceRelease(PowerRequest);
}
