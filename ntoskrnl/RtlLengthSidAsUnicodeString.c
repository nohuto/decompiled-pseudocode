/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x140747878
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x140747770 (RtlFormatCurrentUserKeyPath.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140793848 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     AdtpBuildSidListString @ 0x140A5852C (AdtpBuildSidListString.c)
 * Callees:
 *     RtlValidSid @ 0x1407C92A0 (RtlValidSid.c)
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
