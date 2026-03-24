/*
 * XREFs of RtlpValidateSidBuffer @ 0x14067374C
 * Callers:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14067362C (RtlEnumerateBoundaryDescriptorEntries.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x14027F280 (RtlSubAuthorityCountSid.c)
 *     RtlValidSid @ 0x14065C720 (RtlValidSid.c)
 */

BOOLEAN __fastcall RtlpValidateSidBuffer(PSID Sid, unsigned int a2)
{
  if ( a2 < 8 || a2 < 4 * (unsigned int)*RtlSubAuthorityCountSid(Sid) + 8 )
    return 0;
  else
    return RtlValidSid(Sid);
}
