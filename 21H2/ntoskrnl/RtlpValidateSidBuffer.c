/*
 * XREFs of RtlpValidateSidBuffer @ 0x1406C1188
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1406C1068 (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1402EF420 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
