/*
 * XREFs of SepInitSystemDacls @ 0x140A4A880
 * Callers:
 *     SepVariableInitialization @ 0x140A48B6C (SepVariableInitialization.c)
 * Callees:
 *     RtlSetSaclSecurityDescriptor @ 0x1405DADB0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1406D44E0 (RtlAddMandatoryAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D92C0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406D9330 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1406EF9D0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1406EFA00 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406EFA60 (RtlSetOwnerSecurityDescriptor.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS SepInitSystemDacls()
{
  int v0; // r9d
  int v1; // r8d
  ULONG v2; // r13d
  int v3; // ecx
  int v4; // r10d
  ULONG v5; // ebp
  int v6; // edx
  ULONG v7; // edi
  ULONG v8; // r15d
  ULONG v9; // r12d
  ULONG v10; // esi
  ULONG v11; // r14d
  ACL *v12; // rdi
  ULONG v13; // edx
  ACL *v14; // rbp
  ACL *v15; // r13
  PSID v16; // rbx
  ACL *v17; // r15
  PSID v18; // rbx
  PSID v19; // rbp
  void *v20; // rsi
  ULONG v21; // edx
  UCHAR v23; // [rsp+20h] [rbp-68h]
  ACL *v24; // [rsp+30h] [rbp-58h]
  ACL *Dacl; // [rsp+38h] [rbp-50h]
  ULONG AclLength; // [rsp+90h] [rbp+8h]
  ACL *AclLengtha; // [rsp+90h] [rbp+8h]
  ACL *v28; // [rsp+98h] [rbp+10h]
  ACL *Acl; // [rsp+A0h] [rbp+18h]
  PACL Acla; // [rsp+A0h] [rbp+18h]
  ACL *v31; // [rsp+A8h] [rbp+20h]

  v0 = *((unsigned __int8 *)SeAliasAdminsSid + 1);
  v1 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  v2 = 4 * (v1 + v0) + 48;
  v3 = *((unsigned __int8 *)SeWorldSid + 1);
  v4 = *(unsigned __int8 *)(*(_QWORD *)&SeRestrictedSid + 1LL);
  v5 = v2 + 4 * v3 + 20;
  v6 = *((unsigned __int8 *)SeLocalServiceSid + 1);
  v7 = v5 + 4 * v4 + 20;
  AclLength = v7;
  v8 = 4 * (v0 + v1 + v6 + v3) + 88;
  v9 = 4 * (v0 + v1 + *((unsigned __int8 *)SeOwnerRightsSid + 1)) + 68;
  v10 = v9
      + 4
      * (v4
       + 25
       + *((unsigned __int8 *)SeAllAppPackagesSid + 1)
       + v6
       + *((unsigned __int8 *)SeServiceSid + 1)
       + *((unsigned __int8 *)SeNetworkServiceSid + 1));
  v11 = 4 * *((unsigned __int8 *)SeMediumMandatorySid + 1) + 28;
  SePublicDefaultDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v5, 0x63416553u);
  SePublicDefaultUnrestrictedDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v7, 0x63416553u);
  SePublicOpenDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v5, 0x63416553u);
  SePublicOpenUnrestrictedDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v7, 0x63416553u);
  SeSystemDefaultDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v2, 0x63416553u);
  SeLocalServicePublicDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v8, 0x63416553u);
  SeAtomDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v7, 0x63416553u);
  SepDefaultCapeDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v9, 0x63416553u);
  SepDefaultRecoveryCapeDacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v10, 0x63416553u);
  SeMediumSacl = (PACL)ExAllocatePoolWithTag((POOL_TYPE)17, v11, 0x63416553u);
  RtlCreateAcl(SePublicDefaultDacl, v5, 2u);
  v12 = SePublicDefaultUnrestrictedDacl;
  Dacl = SePublicDefaultUnrestrictedDacl;
  RtlCreateAcl(SePublicDefaultUnrestrictedDacl, AclLength, 2u);
  v13 = v5;
  v14 = SePublicOpenDacl;
  v24 = SePublicOpenDacl;
  RtlCreateAcl(SePublicOpenDacl, v13, 2u);
  Acl = SePublicOpenUnrestrictedDacl;
  RtlCreateAcl(SePublicOpenUnrestrictedDacl, AclLength, 2u);
  RtlCreateAcl(SeSystemDefaultDacl, v2, 2u);
  v15 = SeLocalServicePublicDacl;
  RtlCreateAcl(SeLocalServicePublicDacl, v8, 2u);
  v31 = SeAtomDacl;
  RtlCreateAcl(SeAtomDacl, AclLength, 2u);
  AclLengtha = SepDefaultCapeDacl;
  RtlCreateAcl(SepDefaultCapeDacl, v9, 2u);
  v28 = SepDefaultRecoveryCapeDacl;
  RtlCreateAcl(SepDefaultRecoveryCapeDacl, v10, 2u);
  RtlCreateAcl(SeMediumSacl, v11, 2u);
  v16 = SeWorldSid;
  RtlAddAccessAllowedAce(SePublicDefaultDacl, 2u, 0x20000000u, SeWorldSid);
  RtlAddAccessAllowedAce(v12, 2u, 0x20000000u, v16);
  RtlAddAccessAllowedAce(v14, 2u, 0xE0000000, v16);
  v17 = Acl;
  RtlAddAccessAllowedAce(Acl, 2u, 0xE0000000, v16);
  RtlAddAccessAllowedAce(v15, 2u, 0x20000000u, v16);
  RtlAddAccessAllowedAce(v31, 2u, 0x20000u, v16);
  v18 = SeLocalSystemSid;
  Acla = (PACL)SeLocalSystemSid;
  RtlAddAccessAllowedAce(SePublicDefaultDacl, 2u, 0x10000000u, SeLocalSystemSid);
  RtlAddAccessAllowedAce(v12, 2u, 0x10000000u, v18);
  RtlAddAccessAllowedAce(v14, 2u, 0x10000000u, v18);
  RtlAddAccessAllowedAce(v17, 2u, 0x10000000u, v18);
  RtlAddAccessAllowedAce(SeSystemDefaultDacl, 2u, 0x10000000u, v18);
  RtlAddAccessAllowedAce(v15, 2u, 0x10000000u, v18);
  RtlAddAccessAllowedAce(v31, 2u, 0x1F0000u, v18);
  v19 = SeAliasAdminsSid;
  RtlAddAccessAllowedAce(SePublicDefaultDacl, 2u, 0x10000000u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(v12, 2u, 0x10000000u, v19);
  RtlAddAccessAllowedAce(v24, 2u, 0x10000000u, v19);
  RtlAddAccessAllowedAce(v17, 2u, 0x10000000u, v19);
  RtlAddAccessAllowedAce(SeSystemDefaultDacl, 2u, 0xA0020000, v19);
  RtlAddAccessAllowedAce(v15, 2u, 0x10000000u, v19);
  RtlAddAccessAllowedAce(v31, 2u, 0x1F0000u, v19);
  v20 = *(void **)&SeRestrictedSid;
  RtlAddAccessAllowedAce(v12, 2u, 0x20000000u, *(PSID *)&SeRestrictedSid);
  RtlAddAccessAllowedAce(v17, 2u, 0xA0000000, v20);
  RtlAddAccessAllowedAce(v31, 2u, 0x20000u, v20);
  RtlAddAccessAllowedAce(v15, 2u, 0x10000000u, SeLocalServiceSid);
  RtlAddAccessAllowedAce(AclLengtha, 2u, 0x1FFFFFu, v18);
  RtlAddAccessAllowedAce(AclLengtha, 2u, 0x1FFFFFu, v19);
  RtlAddAccessAllowedAce(AclLengtha, 2u, 0, SeOwnerRightsSid);
  RtlAddAccessAllowedAce(v28, 2u, 0x1FFFFFu, v18);
  RtlAddAccessAllowedAce(v28, 2u, 0x1FFFFFu, v19);
  RtlAddAccessAllowedAce(v28, 2u, 0, SeOwnerRightsSid);
  RtlAddAccessAllowedAce(v28, 2u, 0x1FFFFFu, SeLocalServiceSid);
  RtlAddAccessAllowedAce(v28, 2u, 0x1FFFFFu, SeNetworkServiceSid);
  RtlAddAccessAllowedAce(v28, 2u, 0x1FFFFFu, v20);
  RtlAddAccessAllowedAce(v28, 2u, 0x1FFFFFu, SeServiceSid);
  RtlAddAccessAllowedAce(v28, 2u, 0x1200A9u, SeAllAppPackagesSid);
  RtlAddMandatoryAce(SeMediumSacl, v21, 0, SeMediumMandatorySid, v23, 2u);
  SePublicDefaultSd = (__int64)&SepPublicDefaultSd;
  RtlCreateSecurityDescriptor(&SepPublicDefaultSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepPublicDefaultSd, 1u, SePublicDefaultDacl, 0);
  SePublicDefaultUnrestrictedSd = (__int64)&SepPublicDefaultUnrestrictedSd;
  RtlCreateSecurityDescriptor(&SepPublicDefaultUnrestrictedSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepPublicDefaultUnrestrictedSd, 1u, Dacl, 0);
  SePublicOpenSd = (__int64)&SepPublicOpenSd;
  RtlCreateSecurityDescriptor(&SepPublicOpenSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepPublicOpenSd, 1u, v24, 0);
  SePublicOpenUnrestrictedSd = (__int64)&SepPublicOpenUnrestrictedSd;
  RtlCreateSecurityDescriptor(&SepPublicOpenUnrestrictedSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepPublicOpenUnrestrictedSd, 1u, v17, 0);
  SeSystemDefaultSd = &SepSystemDefaultSd;
  RtlCreateSecurityDescriptor(&SepSystemDefaultSd, 1u);
  RtlSetDaclSecurityDescriptor(SeSystemDefaultSd, 1u, SeSystemDefaultDacl, 0);
  SeLocalServicePublicSd = (__int64)&SepLocalServicePublicSd;
  RtlCreateSecurityDescriptor(&SepLocalServicePublicSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepLocalServicePublicSd, 1u, v15, 0);
  SeAtomSd = (__int64)&SepAtomSd;
  RtlCreateSecurityDescriptor(&SepAtomSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepAtomSd, 1u, v31, 0);
  SeDefaultCapeSd = (__int64)&SepDefaultCapeSd;
  RtlCreateSecurityDescriptor(&SepDefaultCapeSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepDefaultCapeSd, 1u, AclLengtha, 0);
  RtlSetOwnerSecurityDescriptor(&SepDefaultCapeSd, Acla, 0);
  RtlSetGroupSecurityDescriptor(&SepDefaultCapeSd, Acla, 0);
  SeDefaultRecoveryCapeSd = (__int64)&SepDefaultRecoveryCapeSd;
  RtlCreateSecurityDescriptor(&SepDefaultRecoveryCapeSd, 1u);
  RtlSetDaclSecurityDescriptor(&SepDefaultRecoveryCapeSd, 1u, v28, 0);
  RtlSetOwnerSecurityDescriptor(&SepDefaultRecoveryCapeSd, Acla, 0);
  RtlSetGroupSecurityDescriptor(&SepDefaultRecoveryCapeSd, Acla, 0);
  SeNullDaclSd = &SepNullDaclSd;
  RtlCreateSecurityDescriptor(&SepNullDaclSd, 1u);
  SeMediumDaclSd = &SepMediumDaclSd;
  RtlCreateSecurityDescriptor(&SepMediumDaclSd, 1u);
  RtlSetSaclSecurityDescriptor(&SepMediumDaclSd, 1u, SeMediumSacl, 0);
  RtlSetOwnerSecurityDescriptor(&SepMediumDaclSd, Acla, 0);
  return RtlSetGroupSecurityDescriptor(&SepMediumDaclSd, Acla, 0);
}
