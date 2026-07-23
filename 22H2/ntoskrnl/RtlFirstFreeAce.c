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
