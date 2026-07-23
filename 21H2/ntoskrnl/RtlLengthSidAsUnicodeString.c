/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x14066A4A8
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x14066A3A0 (RtlFormatCurrentUserKeyPath.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x14095CEEC (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     AdtpBuildSidListString @ 0x14096DD34 (AdtpBuildSidListString.c)
 * Callees:
 *     RtlValidSid @ 0x140651540 (RtlValidSid.c)
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
