/*
 * XREFs of RtlSubAuthorityCountSid @ 0x14027F280
 * Callers:
 *     SeQueryInformationToken @ 0x140656BD0 (SeQueryInformationToken.c)
 *     RtlpValidateSidBuffer @ 0x14067374C (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x140674294 (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x14067432C (LookupSidInTable.c)
 *     RtlIsElevatedRid @ 0x1406744C0 (RtlIsElevatedRid.c)
 *     NtSetInformationToken @ 0x1406749A0 (NtSetInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x140676500 (RtlGetAppContainerSidType.c)
 *     SepCheckCapabilities @ 0x1406A7AE0 (SepCheckCapabilities.c)
 *     RtlReplaceSidInSd @ 0x140913940 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
