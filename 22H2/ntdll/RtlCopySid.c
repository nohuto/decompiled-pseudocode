/*
 * XREFs of RtlCopySid @ 0x1800688D0
 * Callers:
 *     RtlAddProcessTrustLabelAce @ 0x180067CC0 (RtlAddProcessTrustLabelAce.c)
 *     RtlCreateAndSetSD @ 0x180067E50 (RtlCreateAndSetSD.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800684C8 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x180068750 (RtlAddMandatoryAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800E6380 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800E93F0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E9670 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E97E0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E9B30 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800E9DF0 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     memmove @ 0x1800A4340 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
