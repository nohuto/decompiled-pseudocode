/*
 * XREFs of RtlCopySid @ 0x14071E2B0
 * Callers:
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1403C07B0 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x140596DD8 (SepGetSidValuesDump.c)
 *     SepAdjustGroups @ 0x140608AF8 (SepAdjustGroups.c)
 *     PspAssignProcessQuotaBlock @ 0x14060BFA4 (PspAssignProcessQuotaBlock.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x14064CC10 (NtQueryInformationToken.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1406C4604 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x1406C6708 (SepGetLowBoxNumberEntry.c)
 *     SepSetTokenPackage @ 0x1406C7DF0 (SepSetTokenPackage.c)
 *     SepDuplicateSid @ 0x14071E180 (SepDuplicateSid.c)
 *     SeQueryUserSidToken @ 0x14071E204 (SeQueryUserSidToken.c)
 *     LocalGetAclForString @ 0x140787A6C (LocalGetAclForString.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079DF90 (RtlAddProcessTrustLabelAce.c)
 *     SeAuditProcessCreation @ 0x1407BCD28 (SeAuditProcessCreation.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CB090 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x1408CDDB8 (MiQueryLoadedPatches.c)
 *     RtlAddAccessFilterAce @ 0x1409123B0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409126D0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140912A00 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x140922F90 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409255C4 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x140926328 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140926540 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409266A4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140926804 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
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
