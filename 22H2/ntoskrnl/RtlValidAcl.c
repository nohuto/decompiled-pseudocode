/*
 * XREFs of RtlValidAcl @ 0x1406D5380
 * Callers:
 *     SepCheckAcl @ 0x1405DBD24 (SepCheckAcl.c)
 *     SeValidSecurityDescriptor @ 0x140676E80 (SeValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1406941B0 (RtlDeleteAce.c)
 *     RtlAddMandatoryAce @ 0x1406D44E0 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x1406D4920 (SeCaptureSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D5220 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x1406D7CC0 (RtlValidSecurityDescriptor.c)
 *     RtlAddAce @ 0x1406D7EF0 (RtlAddAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1406E6A70 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079E1C0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1409122A0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409125C0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409128F0 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140926218 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140926430 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140926594 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409266F4 (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x140958514 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x140699584 (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x140912DEC (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x140912FEC (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x140913068 (RtlpValidObjectAce.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  USHORT *p_AclSize; // r14
  unsigned int v3; // ebp
  PACL v4; // rbx
  int v5; // r15d
  ACL *v6; // rdx
  USHORT *v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned int AclRevision; // edx
  __int64 Sbz1; // rax

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (USHORT *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) == &Acl->AclSize && *p_AclSize >= 8u )
    {
      v3 = 0;
      v4 = Acl + 1;
      if ( !Acl->AceCount )
        return 1;
      v5 = 1730063;
      while ( 1 )
      {
        v6 = (PACL)((char *)Acl + *p_AclSize);
        if ( &v4->AceCount >= (USHORT *)v6 )
          break;
        v7 = &v4->AclSize;
        if ( (USHORT *)(((unsigned __int64)&v4->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v4->AclSize )
          break;
        v8 = *v7;
        if ( (PACL)((char *)v4 + v8) > v6 )
          break;
        AclRevision = v4->AclRevision;
        if ( (unsigned __int8)AclRevision <= 0x14u && _bittest(&v5, AclRevision) )
        {
          if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
            return 0;
          if ( (unsigned int)v8 < 0x10 )
            return 0;
          if ( v4[1].AclRevision != 1 )
            return 0;
          Sbz1 = v4[1].Sbz1;
          if ( (unsigned __int8)Sbz1 > 0xFu || v8 < 4 * Sbz1 + 16 )
            return 0;
        }
        else if ( (_BYTE)AclRevision == 4 )
        {
          if ( Acl->AclRevision < 3u || !(unsigned __int8)RtlpValidCompoundAce(v4) )
            return 0;
        }
        else if ( (unsigned __int8)(AclRevision - 5) <= 3u
               || (unsigned __int8)(AclRevision - 11) <= 1u
               || (unsigned __int8)(AclRevision - 15) <= 1u )
        {
          if ( Acl->AclRevision < 4u || !(unsigned __int8)RtlpValidObjectAce(v4) )
            return 0;
        }
        else if ( (_BYTE)AclRevision == 18 )
        {
          if ( !RtlpValidAttributeAce((__int64)v4) )
            return 0;
        }
        else if ( (_BYTE)AclRevision == 21 )
        {
          if ( !(unsigned __int8)RtlpValidAccessFilterAce(v4) )
            return 0;
        }
        else if ( (unsigned int)v8 < 4 )
        {
          return 0;
        }
        ++v3;
        v4 = (PACL)((char *)v4 + *v7);
        if ( v3 >= Acl->AceCount )
          return 1;
      }
    }
  }
  return 0;
}
