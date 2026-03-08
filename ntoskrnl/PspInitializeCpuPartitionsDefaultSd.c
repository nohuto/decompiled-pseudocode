/*
 * XREFs of PspInitializeCpuPartitionsDefaultSd @ 0x140B6811C
 * Callers:
 *     PspInitializeCpuPartitionsPhase0 @ 0x140B68074 (PspInitializeCpuPartitionsPhase0.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14068E3D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x140744250 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140744590 (RtlSetGroupSecurityDescriptor.c)
 *     RtlLengthRequiredSid @ 0x140782B90 (RtlLengthRequiredSid.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 PspInitializeCpuPartitionsDefaultSd()
{
  ULONG_PTR v0; // r13
  __int64 Pool2; // rsi
  ULONG v2; // eax
  __int64 v3; // rax
  __int64 v4; // rbp
  NTSTATUS Acl; // ebx
  ULONG v6; // ebx
  __int64 v7; // r12
  ACL *v8; // rax
  ACL *v9; // r14
  __int64 v10; // rax
  void *v11; // rdi
  char *v12; // r15
  ACL *v13; // r13
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = RtlLengthRequiredSid(1u);
  Pool2 = ExAllocatePool2(256LL, v0, 0x50707350u);
  v2 = RtlLengthRequiredSid(2u);
  v3 = ExAllocatePool2(256LL, v2, 0x50707350u);
  v4 = v3;
  if ( v3 && Pool2 )
  {
    Acl = RtlInitializeSid((PSID)Pool2, &IdentifierAuthority, 1u);
    if ( Acl >= 0 )
    {
      *(_DWORD *)(Pool2 + 8) = 18;
      Acl = RtlInitializeSid((PSID)v4, &IdentifierAuthority, 2u);
      if ( Acl >= 0 )
      {
        *(_DWORD *)(v4 + 8) = 32;
        *(_DWORD *)(v4 + 12) = 544;
        v6 = 4 * (*(unsigned __int8 *)(Pool2 + 1) + *(unsigned __int8 *)(v4 + 1)) + 40;
        v7 = v6;
        v8 = (ACL *)ExAllocatePool2(256LL, v6, 0x50707350u);
        v9 = v8;
        if ( v8 )
        {
          Acl = RtlCreateAcl(v8, v6, 2u);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v9, 2u, 0x10000000u, (PSID)Pool2);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v9, 2u, 0x10000000u, (PSID)v4);
              if ( Acl >= 0 )
              {
                v10 = ExAllocatePool2(256LL, v7 + v0 + 40, 0x50707350u);
                v11 = (void *)v10;
                if ( v10 )
                {
                  v12 = (char *)(v10 + 40);
                  memmove((void *)(v10 + 40), (const void *)Pool2, (unsigned int)v0);
                  v13 = (ACL *)&v12[v0];
                  memmove(v13, v9, (unsigned int)v7);
                  Acl = RtlCreateSecurityDescriptor(v11, 1u);
                  if ( Acl < 0
                    || (Acl = RtlSetOwnerSecurityDescriptor(v11, v12, 0), Acl < 0)
                    || (Acl = RtlSetGroupSecurityDescriptor(v11, v12, 0), Acl < 0)
                    || (Acl = RtlSetDaclSecurityDescriptor(v11, 1u, v13, 0), Acl < 0) )
                  {
                    ExFreePoolWithTag(v11, 0);
                  }
                  else
                  {
                    PsCpuPartitionDefaultSd = (__int64)v11;
                    Acl = 0;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
          }
          ExFreePoolWithTag(v9, 0);
        }
        else
        {
          Acl = -1073741670;
        }
      }
    }
  }
  else
  {
    Acl = -1073741670;
    if ( !v3 )
      goto LABEL_18;
  }
  ExFreePoolWithTag((PVOID)v4, 0);
LABEL_18:
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)Acl;
}
