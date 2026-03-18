/*
 * XREFs of RtlCopySid @ 0x140715020
 * Callers:
 *     SeConvertStringSidToSid @ 0x14020BA40 (SeConvertStringSidToSid.c)
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 *     SepGetSidValuesDump @ 0x1405B8BD8 (SepGetSidValuesDump.c)
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 *     SepDuplicateSid @ 0x1407110C4 (SepDuplicateSid.c)
 *     SepSetTokenPackage @ 0x140714E10 (SepSetTokenPackage.c)
 *     SeQueryUserSidToken @ 0x140714EB0 (SeQueryUserSidToken.c)
 *     RtlCopySidAndAttributesArray @ 0x140714F60 (RtlCopySidAndAttributesArray.c)
 *     SeQueryInformationToken @ 0x140719710 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140730A90 (NtQueryInformationToken.c)
 *     SepAdjustGroups @ 0x1407CB22C (SepAdjustGroups.c)
 *     RtlAddMandatoryAce @ 0x1407F33F0 (RtlAddMandatoryAce.c)
 *     SepGetLowBoxNumberEntry @ 0x1407F4F18 (SepGetLowBoxNumberEntry.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1407F510C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     PspAssignProcessQuotaBlock @ 0x1407F8B1C (PspAssignProcessQuotaBlock.c)
 *     SeAuditProcessCreation @ 0x140842A54 (SeAuditProcessCreation.c)
 *     SddlAddMandatoryAce @ 0x1408A6D12 (SddlAddMandatoryAce.c)
 *     RtlAddAccessFilterAce @ 0x1409BAF50 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409BB270 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409BB5A0 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1409CF5CC (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409D189C (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1409D2590 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409D27CC (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409D292C (SddlAddScopedPolicyIDAce.c)
 *     MiLoadHotPatchForUserSid @ 0x140A38368 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140A3B330 (MiQueryLoadedPatches.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
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
