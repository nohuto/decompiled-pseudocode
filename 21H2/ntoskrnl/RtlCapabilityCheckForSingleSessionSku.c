/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x140913730
 * Callers:
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x14069CDE0 (RtlIsMultiSessionSku.c)
 *     RtlCapabilityCheck @ 0x140913350 (RtlCapabilityCheck.c)
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
    if ( RtlIsMultiSessionSku((__int64)ExistingTokenHandle, (__int64)SourceString) )
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
