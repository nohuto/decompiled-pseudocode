/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x1409BC060
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x1407ED2A0 (RtlIsMultiSessionSku.c)
 *     RtlCapabilityCheck @ 0x1407ED2D0 (RtlCapabilityCheck.c)
 */

__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(HANDLE ExistingTokenHandle, UNICODE_STRING *String2, char *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( RtlIsMultiSessionSku() )
      *a3 = 0;
    else
      return (unsigned int)RtlCapabilityCheck(ExistingTokenHandle, String2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
