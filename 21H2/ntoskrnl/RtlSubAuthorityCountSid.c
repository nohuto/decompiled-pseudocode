/*
 * XREFs of RtlSubAuthorityCountSid @ 0x1402EF420
 * Callers:
 *     LookupSidInTable @ 0x1406775C8 (LookupSidInTable.c)
 *     RtlGetAppContainerSidType @ 0x140696D90 (RtlGetAppContainerSidType.c)
 *     RtlpValidateSidBuffer @ 0x1406C1188 (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x1406C9990 (SeQueryMandatoryLabel.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x14079FAF0 (RtlIsElevatedRid.c)
 *     RtlReplaceSidInSd @ 0x1409B92B0 (RtlReplaceSidInSd.c)
 *     SepCheckCapabilities @ 0x1409CC77C (SepCheckCapabilities.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
