/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x14025ACE4
 * Callers:
 *     RtlpSetSecurityObject @ 0x140726700 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1407CE760 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1409BA380 (RtlpValidFilterAclSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1402F8A20 (RtlSidDominatesForTrust.c)
 */

char __fastcall RtlpValidTrustSubjectContext(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char result; // al
  char v6; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  v6 = 0;
  if ( !a1 || (*a4 = RtlSidDominatesForTrust(a1, a2, &v6), (result = v6) == 0) )
    *a4 = -1073741790;
  return result;
}
