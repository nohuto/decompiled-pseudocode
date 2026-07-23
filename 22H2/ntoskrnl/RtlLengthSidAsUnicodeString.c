/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x1406EFBC8
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1406EFAC0 (RtlFormatCurrentUserKeyPath.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x14095CD7C (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     AdtpBuildSidListString @ 0x14096DBA4 (AdtpBuildSidListString.c)
 * Callees:
 *     RtlValidSid @ 0x1406D54E0 (RtlValidSid.c)
 */

NTSTATUS __cdecl RtlLengthSidAsUnicodeString(PSID Sid, PULONG StringLength)
{
  int v4; // edx

  if ( RtlValidSid(Sid) != 1 )
    return -1073741704;
  if ( *((_BYTE *)Sid + 2) || (v4 = 28, *((_BYTE *)Sid + 3)) )
    v4 = 36;
  *StringLength = v4 + 22 * *((unsigned __int8 *)Sid + 1);
  return 0;
}
