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

__int64 __fastcall RtlCopySid(unsigned int a1, void *a2, unsigned __int8 *a3)
{
  unsigned int v3; // eax

  v3 = 4 * a3[1] + 8;
  if ( v3 > a1 )
    return 3221225507LL;
  memmove(a2, a3, v3);
  return 0LL;
}
