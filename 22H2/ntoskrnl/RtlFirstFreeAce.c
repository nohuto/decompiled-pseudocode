/*
 * XREFs of RtlFirstFreeAce @ 0x1406D4640
 * Callers:
 *     RtlDeleteAce @ 0x1406941B0 (RtlDeleteAce.c)
 *     RtlAddMandatoryAce @ 0x1406D44E0 (RtlAddMandatoryAce.c)
 *     RtlpInheritAcl2 @ 0x1406D5CF0 (RtlpInheritAcl2.c)
 *     RtlAddAce @ 0x1406D7EF0 (RtlAddAce.c)
 *     RtlQueryInformationAcl @ 0x1406D8860 (RtlQueryInformationAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079E1C0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1409122A0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409125C0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409128F0 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140926218 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140926430 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140926594 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409266F4 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlFirstFreeAce(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v3; // r8

  v2 = 0;
  v3 = a1 + 8;
  *a2 = 0LL;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( v3 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v2;
      v3 += *(unsigned __int16 *)(v3 + 2);
      if ( v2 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v3 <= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      *a2 = v3;
    return 1;
  }
}
