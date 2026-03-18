/*
 * XREFs of RtlSubAuthorityCountSid @ 0x1402979A0
 * Callers:
 *     LookupSidInTable @ 0x1406C3710 (LookupSidInTable.c)
 *     SeQueryInformationToken @ 0x140719710 (SeQueryInformationToken.c)
 *     RtlIsElevatedRid @ 0x14071A040 (RtlIsElevatedRid.c)
 *     RtlpValidateSidBuffer @ 0x1407C9698 (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x1407DD960 (SeQueryMandatoryLabel.c)
 *     NtSetInformationToken @ 0x1407EFA00 (NtSetInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x1407F4A10 (RtlGetAppContainerSidType.c)
 *     RtlReplaceSidInSd @ 0x1409BC3E0 (RtlReplaceSidInSd.c)
 *     SepCheckCapabilities @ 0x1409CF30C (SepCheckCapabilities.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
