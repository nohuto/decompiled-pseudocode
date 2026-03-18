/*
 * XREFs of RtlCopySid @ 0x14066A4E0
 * Callers:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1403CBD40 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x1405F4B60 (SepGetSidValuesDump.c)
 *     SepAdjustGroups @ 0x140662AC8 (SepAdjustGroups.c)
 *     SepSetTokenPackage @ 0x14066A17C (SepSetTokenPackage.c)
 *     SeQueryUserSidToken @ 0x14066A374 (SeQueryUserSidToken.c)
 *     RtlCopySidAndAttributesArray @ 0x14066A420 (RtlCopySidAndAttributesArray.c)
 *     SepDuplicateSid @ 0x14066B730 (SepDuplicateSid.c)
 *     LocalGetAclForString @ 0x140675DA8 (LocalGetAclForString.c)
 *     SepGetLowBoxNumberEntry @ 0x140696750 (SepGetLowBoxNumberEntry.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140696E04 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     PspAssignProcessQuotaBlock @ 0x1406C86A0 (PspAssignProcessQuotaBlock.c)
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     SeAuditProcessCreation @ 0x140847BB4 (SeAuditProcessCreation.c)
 *     RtlAddProcessTrustLabelAce @ 0x140848A40 (RtlAddProcessTrustLabelAce.c)
 *     SddlAddMandatoryAce @ 0x140882C7A (SddlAddMandatoryAce.c)
 *     MiLoadHotPatchForUserSid @ 0x1409743A4 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140976F90 (MiQueryLoadedPatches.c)
 *     RtlAddAccessFilterAce @ 0x1409B7E50 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409B84A4 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x1409CCA34 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409CED4C (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1409CF980 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409CFB98 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409CFCF8 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
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
