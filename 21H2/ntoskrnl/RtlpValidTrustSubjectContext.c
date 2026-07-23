/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x14024F9F0
 * Callers:
 *     RtlpSetSecurityObject @ 0x1406531E0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1407169D0 (RtlpNewSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140914EF4 (RtlpValidFilterAclSubjectContext.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x14026BD80 (RtlSidDominatesForTrust.c)
 */

BOOLEAN __fastcall RtlpValidTrustSubjectContext(void *a1, void *a2, __int64 a3, NTSTATUS *a4)
{
  BOOLEAN result; // al
  NTSTATUS *v5; // r11
  NTSTATUS v6; // eax
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  result = 0;
  v5 = a4;
  DominatesTrust = 0;
  if ( !a1 || (v6 = RtlSidDominatesForTrust(a1, a2, &DominatesTrust), *v5 = v6, (result = DominatesTrust) == 0) )
    *v5 = -1073741790;
  return result;
}
