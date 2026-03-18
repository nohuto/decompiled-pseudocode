/*
 * XREFs of RtlpValidateSidBuffer @ 0x1407C9698
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1407C9578 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1402979A0 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x1407378A0 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
