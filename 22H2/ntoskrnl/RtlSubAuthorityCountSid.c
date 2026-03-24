/*
 * XREFs of RtlSubAuthorityCountSid @ 0x140348290
 * Callers:
 *     SepCheckCapabilities @ 0x14068AA90 (SepCheckCapabilities.c)
 *     SeQueryInformationToken @ 0x1406CF990 (SeQueryInformationToken.c)
 *     RtlpValidateSidBuffer @ 0x1406EC53C (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x1406ED084 (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x1406ED11C (LookupSidInTable.c)
 *     RtlIsElevatedRid @ 0x1406ED2B0 (RtlIsElevatedRid.c)
 *     NtSetInformationToken @ 0x1406ED790 (NtSetInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x1406EF2F0 (RtlGetAppContainerSidType.c)
 *     RtlReplaceSidInSd @ 0x140913990 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
