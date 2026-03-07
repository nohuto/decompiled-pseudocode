__int64 __fastcall DpiCreateSecurityDescriptorForGpuVirtualization(_QWORD *a1)
{
  void *v2; // rdi
  ULONG v3; // eax
  void *Pool2; // rax
  void *v5; // r14
  NTSTATUS v6; // eax
  __int64 v7; // rbx
  ULONG v8; // ebx
  ULONG v9; // ebx
  ULONG v10; // ebx
  struct _ACL *v11; // rax
  struct _ACL *v12; // rsi
  NTSTATUS Acl; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  ULONG v21; // eax
  void *v22; // rax
  NTSTATUS v23; // eax
  size_t Size; // [rsp+20h] [rbp-40h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+50h] [rbp-10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  LODWORD(Size) = 0;
  v27 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v2 = 0LL;
  v3 = RtlLengthRequiredSid(2u);
  Pool2 = (void *)ExAllocatePool2(256LL, v3, 1953656900LL);
  v5 = Pool2;
  if ( !Pool2 )
  {
    LODWORD(v7) = -1073741670;
    return (unsigned int)v7;
  }
  v6 = RtlInitializeSid(Pool2, &IdentifierAuthority, 2u);
  LODWORD(v7) = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
  }
  else
  {
    *RtlSubAuthoritySid(v5, 0) = 83;
    *RtlSubAuthoritySid(v5, 1u) = 0;
    v8 = RtlLengthSid(SeExports->SeLocalSystemSid) + 8;
    v9 = RtlLengthSid(SeExports->SeAliasAdminsSid) + v8;
    v10 = RtlLengthSid(v5) + 24 + v9;
    v11 = (struct _ACL *)ExAllocatePool2(256LL, v10, 1953656900LL);
    v12 = v11;
    if ( v11 )
    {
      Acl = RtlCreateAcl(v11, v10, 2u);
      v7 = Acl;
      if ( Acl >= 0 )
      {
        v14 = RtlAddAccessAllowedAce(v12, 2u, 0x1F01FFu, SeExports->SeLocalSystemSid);
        v7 = v14;
        if ( v14 >= 0 )
        {
          v15 = RtlAddAccessAllowedAce(v12, 2u, 0x1F01FFu, SeExports->SeAliasAdminsSid);
          v7 = v15;
          if ( v15 >= 0 )
          {
            v16 = RtlAddAccessAllowedAce(v12, 2u, 0x1F01FFu, v5);
            v7 = v16;
            if ( v16 >= 0 )
            {
              v17 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              v7 = v17;
              if ( v17 >= 0 )
              {
                v18 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v12, 0);
                v7 = v18;
                if ( v18 >= 0 )
                {
                  v19 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeExports->SeLocalSystemSid, 0);
                  v7 = v19;
                  if ( v19 >= 0 )
                  {
                    v20 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, SeExports->SeLocalSystemSid, 0);
                    v7 = v20;
                    if ( v20 >= 0 )
                    {
                      v21 = RtlLengthSecurityDescriptor(SecurityDescriptor);
                      LODWORD(Size) = v21;
                      if ( v21 < 0x28 )
                      {
                        v7 = -1073741595LL;
                      }
                      else
                      {
                        v22 = (void *)ExAllocatePool2(256LL, v21, 1953656900LL);
                        v2 = v22;
                        if ( !v22 )
                        {
                          LODWORD(v7) = -1073741670;
LABEL_16:
                          ExFreePoolWithTag(v12, 0);
                          if ( v2 )
                            ExFreePoolWithTag(v2, 0);
                          goto LABEL_18;
                        }
                        memset(v22, 0, (unsigned int)Size);
                        v23 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v2, (PULONG)&Size);
                        v7 = v23;
                        if ( v23 >= 0 )
                        {
                          *a1 = v2;
                          v2 = 0LL;
                          LODWORD(v7) = 0;
                          goto LABEL_16;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      WdLogSingleEntry1(2LL, v7);
      goto LABEL_16;
    }
    LODWORD(v7) = -1073741670;
  }
LABEL_18:
  ExFreePoolWithTag(v5, 0);
  return (unsigned int)v7;
}
