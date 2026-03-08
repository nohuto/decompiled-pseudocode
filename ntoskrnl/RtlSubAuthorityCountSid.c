/*
 * XREFs of RtlSubAuthorityCountSid @ 0x1402BE730
 * Callers:
 *     LookupSidInTable @ 0x1406999A0 (LookupSidInTable.c)
 *     RtlGetAppContainerSidType @ 0x1407414C0 (RtlGetAppContainerSidType.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     SeQueryMandatoryLabel @ 0x140743AE8 (SeQueryMandatoryLabel.c)
 *     RtlpValidateSidBuffer @ 0x140743CA0 (RtlpValidateSidBuffer.c)
 *     RtlIsElevatedRid @ 0x140743CF0 (RtlIsElevatedRid.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     RtlReplaceSidInSd @ 0x1409B94C0 (RtlReplaceSidInSd.c)
 *     SepCheckCapabilities @ 0x1409CC46C (SepCheckCapabilities.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
