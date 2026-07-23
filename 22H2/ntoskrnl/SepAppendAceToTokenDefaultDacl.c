/*
 * XREFs of SepAppendAceToTokenDefaultDacl @ 0x1403226D4
 * Callers:
 *     NtCreateLowBoxToken @ 0x1406EF370 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlFindAceBySid @ 0x140347920 (RtlFindAceBySid.c)
 *     RtlGetAce @ 0x140347A20 (RtlGetAce.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     SepAppendDefaultDacl @ 0x1406996E8 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140699748 (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x140699794 (SepExpandDynamic.c)
 *     RtlAddAce @ 0x1406D7EF0 (RtlAddAce.c)
 *     RtlQueryInformationAcl @ 0x1406D8860 (RtlQueryInformationAcl.c)
 *     RtlCreateAcl @ 0x1406D9330 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1406EF9D0 (RtlAddAccessAllowedAce.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAppendAceToTokenDefaultDacl(__int64 a1, unsigned __int8 *a2)
{
  ACL *v2; // rbp
  ACL *v3; // rsi
  int AclSize; // ebx
  NTSTATUS Acl; // edi
  ULONG v8; // r15d
  ACL *PoolWithTag; // rax
  ULONG v10; // ebx
  ULONG AclInformation; // [rsp+30h] [rbp-58h] BYREF
  PVOID Ace; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+48h] [rbp-40h]

  v2 = *(ACL **)(a1 + 184);
  AclInformation = 0;
  v3 = 0LL;
  Ace = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( !v2 )
  {
    Acl = 0;
LABEL_12:
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return (unsigned int)Acl;
  }
  if ( RtlFindAceBySid(v2, a2, 0LL) )
    return 0;
  AclSize = v2->AclSize;
  Acl = RtlQueryInformationAcl(v2, &AclInformation, 4u, AclRevisionInformation);
  if ( Acl >= 0 )
  {
    Acl = RtlQueryInformationAcl(v2, &v14, 0xCu, AclSizeInformation);
    if ( Acl >= 0 )
    {
      v8 = (AclSize + 4 * a2[1] + 19) & 0xFFFFFFFC;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x63416553u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      v10 = AclInformation;
      Acl = RtlCreateAcl(PoolWithTag, v8, AclInformation);
      if ( Acl >= 0 )
      {
        Acl = RtlGetAce(v2, 0, &Ace);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAce(v3, v10, 0, Ace, HIDWORD(v14) - 8);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v3, v10, 0x10000000u, a2);
            if ( Acl >= 0 )
            {
              Acl = SepExpandDynamic(a1, (v8 + 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 11) & 0xFFFFFFFC);
              if ( Acl >= 0 )
              {
                SepFreeDefaultDacl(a1);
                SepAppendDefaultDacl(a1, v3);
              }
            }
          }
        }
      }
      goto LABEL_12;
    }
  }
  return (unsigned int)Acl;
}
