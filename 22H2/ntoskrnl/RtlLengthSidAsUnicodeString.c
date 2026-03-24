/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x1406EFBC8
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1406EFAC0 (RtlFormatCurrentUserKeyPath.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x14095CD7C (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     AdtpBuildSidListString @ 0x14096DBA4 (AdtpBuildSidListString.c)
 * Callees:
 *     RtlValidSid @ 0x1406D54E0 (RtlValidSid.c)
 */

__int64 __fastcall RtlLengthSidAsUnicodeString(unsigned __int8 *a1, _DWORD *a2)
{
  int v4; // edx

  if ( RtlValidSid(a1) != 1 )
    return 3221225592LL;
  if ( a1[2] || (v4 = 28, a1[3]) )
    v4 = 36;
  *a2 = v4 + 22 * a1[1];
  return 0LL;
}
