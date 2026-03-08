/*
 * XREFs of RtlFirstFreeAce @ 0x140740C70
 * Callers:
 *     RtlAddMandatoryAce @ 0x140740AF0 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x1407444E0 (RtlDeleteAce.c)
 *     RtlpInheritAcl2 @ 0x1407BC430 (RtlpInheritAcl2.c)
 *     SddlAddMandatoryAce @ 0x1408A1E92 (SddlAddMandatoryAce.c)
 *     RtlAddAccessFilterAce @ 0x1409B8030 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8350 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409B8680 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409CF6F0 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409CF92C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409CFA8C (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlFirstFreeAce(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r10d
  unsigned __int64 v3; // r8
  unsigned int v5; // ecx

  v2 = 0;
  v3 = a1 + 8;
  *a2 = 0LL;
  v5 = *(unsigned __int16 *)(a1 + 4);
  if ( v5 )
  {
    while ( v3 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v2;
      v3 += *(unsigned __int16 *)(v3 + 2);
      if ( v2 >= v5 )
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
