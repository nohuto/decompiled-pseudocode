/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x1409B8F60
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x1407F4B80 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(
        HANDLE ExistingTokenHandle,
        UNICODE_STRING *SourceString,
        char *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( RtlIsMultiSessionSku() )
      *a3 = 0;
    else
      return (unsigned int)RtlCapabilityCheck(ExistingTokenHandle, SourceString, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
