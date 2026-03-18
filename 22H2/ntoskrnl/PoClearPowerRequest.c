/*
 * XREFs of PoClearPowerRequest @ 0x14032A4A0
 * Callers:
 *     PopApplyLegacyPowerRequestFlags @ 0x14032ECAC (PopApplyLegacyPowerRequestFlags.c)
 * Callees:
 *     PopPowerRequestReferenceRelease @ 0x14032B248 (PopPowerRequestReferenceRelease.c)
 */

NTSTATUS __stdcall PoClearPowerRequest(PVOID PowerRequest, POWER_REQUEST_TYPE Type)
{
  __int32 v2; // edx

  if ( Type && (v2 = Type - 1) != 0 && (unsigned int)(v2 - 1) >= 2 )
    return -1073741637;
  else
    return PopPowerRequestReferenceRelease(PowerRequest);
}
