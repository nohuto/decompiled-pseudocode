/*
 * XREFs of RtlCopySid @ 0x140706ED0
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1403C0380 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x140596BA8 (SepGetSidValuesDump.c)
 *     SepAdjustGroups @ 0x1405DA938 (SepAdjustGroups.c)
 *     SeQueryInformationToken @ 0x140656BD0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140657DF0 (NtQueryInformationToken.c)
 *     PspAssignProcessQuotaBlock @ 0x1406AD8B4 (PspAssignProcessQuotaBlock.c)
 *     SepDuplicateSid @ 0x140706DA0 (SepDuplicateSid.c)
 *     SeQueryUserSidToken @ 0x140706E24 (SeQueryUserSidToken.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140715FB4 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x1407180B8 (SepGetLowBoxNumberEntry.c)
 *     SepSetTokenPackage @ 0x1407197A0 (SepSetTokenPackage.c)
 *     LocalGetAclForString @ 0x1407878AC (LocalGetAclForString.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079DD90 (RtlAddProcessTrustLabelAce.c)
 *     SeAuditProcessCreation @ 0x1407BC598 (SeAuditProcessCreation.c)
 *     MiLoadHotPatchForUserSid @ 0x1408CAF30 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x1408CDC58 (MiQueryLoadedPatches.c)
 *     RtlAddAccessFilterAce @ 0x140912250 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140912570 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409128A0 (RtlpAddKnownObjectAce.c)
 *     SepCreateSidValuesBlock @ 0x140922E30 (SepCreateSidValuesBlock.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140925464 (SepInsertOrReferenceSharedSidEntries.c)
 *     SddlAddAccessFilterAce @ 0x1409261C8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1409263E0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140926544 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409266A4 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
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
