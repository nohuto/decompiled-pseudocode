/*
 * XREFs of RtlSubAuthorityCountSid @ 0x14026D6B0
 * Callers:
 *     SepCheckCapabilities @ 0x140605560 (SepCheckCapabilities.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     RtlpValidateSidBuffer @ 0x14066897C (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x1406694C4 (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x14066955C (LookupSidInTable.c)
 *     RtlIsElevatedRid @ 0x1406696F0 (RtlIsElevatedRid.c)
 *     RtlGetAppContainerSidType @ 0x140669BD0 (RtlGetAppContainerSidType.c)
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 *     RtlReplaceSidInSd @ 0x140913AA0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
