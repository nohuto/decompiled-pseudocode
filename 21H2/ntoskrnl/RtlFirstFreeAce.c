/*
 * XREFs of RtlFirstFreeAce @ 0x1406506A0
 * Callers:
 *     RtlDeleteAce @ 0x14060FFA0 (RtlDeleteAce.c)
 *     RtlAddMandatoryAce @ 0x140650540 (RtlAddMandatoryAce.c)
 *     RtlpInheritAcl2 @ 0x140651D50 (RtlpInheritAcl2.c)
 *     RtlAddAce @ 0x140653F50 (RtlAddAce.c)
 *     RtlQueryInformationAcl @ 0x1406548C0 (RtlQueryInformationAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079DF90 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1409123B0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409126D0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140912A00 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140926328 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140926540 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409266A4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140926804 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlFirstFreeAce(PACL Acl, PVOID *FirstFree)
{
  unsigned int v2; // r9d
  PACL v3; // r8

  v2 = 0;
  v3 = Acl + 1;
  *FirstFree = 0LL;
  if ( Acl->AceCount )
  {
    while ( v3 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v2;
      v3 = (PACL)((char *)v3 + v3->AclSize);
      if ( v2 >= Acl->AceCount )
        goto LABEL_2;
    }
    return 0;
  }
  else
  {
LABEL_2:
    if ( v3 <= (PACL)((char *)Acl + Acl->AclSize) )
      *FirstFree = v3;
    return 1;
  }
}
