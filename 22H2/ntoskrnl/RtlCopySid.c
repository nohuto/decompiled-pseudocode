/*
 * XREFs of RtlCopySid @ 0x140654560
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1403BFFE0 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x140596AE8 (SepGetSidValuesDump.c)
 *     SepAdjustGroups @ 0x1405DA938 (SepAdjustGroups.c)
 *     SepDuplicateSid @ 0x140654430 (SepDuplicateSid.c)
 *     SeQueryUserSidToken @ 0x1406544B4 (SeQueryUserSidToken.c)
 *     PspAssignProcessQuotaBlock @ 0x140690864 (PspAssignProcessQuotaBlock.c)
 *     SeQueryInformationToken @ 0x1406CF990 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x1406D0BB0 (NtQueryInformationToken.c)
 *     SepGetLowBoxNumberEntry @ 0x14070F258 (SepGetLowBoxNumberEntry.c)
 *     SepSetTokenPackage @ 0x140710940 (SepSetTokenPackage.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1407109EC (SepAllocateAndInitializeCachedHandleEntry.c)
 *     LocalGetAclForString @ 0x1407877AC (LocalGetAclForString.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079E1C0 (RtlAddProcessTrustLabelAce.c)
 *     SeAuditProcessCreation @ 0x1407BCD58 (SeAuditProcessCreation.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CAF80 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x1408CDCA8 (MiQueryLoadedPatches.c)
 *     RtlAddAccessFilterAce @ 0x1409122A0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409125C0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409128F0 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x140922E80 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409254B4 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x140926218 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140926430 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140926594 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409266F4 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
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
