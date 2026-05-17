/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x180036D50
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x180036C40 (RtlFormatCurrentUserKeyPath.c)
 *     WerEscalationLazyInit @ 0x1800DE048 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 */

__int64 __fastcall RtlLengthSidAsUnicodeString(unsigned __int8 *a1, _DWORD *a2)
{
  int v4; // edx

  if ( (unsigned __int8)RtlValidSid() != 1 )
    return 3221225592LL;
  if ( a1[2] || (v4 = 28, a1[3]) )
    v4 = 36;
  *a2 = v4 + 22 * a1[1];
  return 0LL;
}
