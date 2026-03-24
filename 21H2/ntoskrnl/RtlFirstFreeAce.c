/*
 * XREFs of RtlFirstFreeAce @ 0x14065B880
 * Callers:
 *     RtlAddMandatoryAce @ 0x14065B720 (RtlAddMandatoryAce.c)
 *     RtlpInheritAcl2 @ 0x14065CF30 (RtlpInheritAcl2.c)
 *     RtlAddAce @ 0x14065F130 (RtlAddAce.c)
 *     RtlQueryInformationAcl @ 0x14065FAA0 (RtlQueryInformationAcl.c)
 *     RtlDeleteAce @ 0x1406B0FF0 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079DD90 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x140912250 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140912570 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409128A0 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409261C8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1409263E0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140926544 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409266A4 (SddlAddScopedPolicyIDAce.c)
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
