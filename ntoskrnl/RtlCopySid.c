/*
 * XREFs of RtlCopySid @ 0x1406D4890
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1402C0AD0 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x1405B6728 (SepGetSidValuesDump.c)
 *     RtlCopySidAndAttributesArray @ 0x1406D47D0 (RtlCopySidAndAttributesArray.c)
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     SeQueryUserSidToken @ 0x1407187E4 (SeQueryUserSidToken.c)
 *     SepSetTokenPackage @ 0x140739590 (SepSetTokenPackage.c)
 *     SepGetLowBoxNumberEntry @ 0x140739A38 (SepGetLowBoxNumberEntry.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140739C2C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     RtlAddMandatoryAce @ 0x140740AF0 (RtlAddMandatoryAce.c)
 *     PspAssignProcessQuotaBlock @ 0x140745228 (PspAssignProcessQuotaBlock.c)
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 *     SepAdjustGroups @ 0x14077A39C (SepAdjustGroups.c)
 *     SepDuplicateSid @ 0x1407843E0 (SepDuplicateSid.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     SeAuditProcessCreation @ 0x140840400 (SeAuditProcessCreation.c)
 *     SddlAddMandatoryAce @ 0x1408A1E92 (SddlAddMandatoryAce.c)
 *     RtlAddAccessFilterAce @ 0x1409B8030 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8350 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409B8680 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1409CC72C (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409CE9FC (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1409CF6F0 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409CF92C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409CFA8C (SddlAddScopedPolicyIDAce.c)
 *     MiLoadHotPatchForUserSid @ 0x140A35638 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140A38650 (MiQueryLoadedPatches.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

NTSTATUS __stdcall RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
