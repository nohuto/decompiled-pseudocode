__int64 __fastcall CMFCreateSecurityDescriptor(PVOID *a1, _DWORD *a2)
{
  unsigned __int8 *v3; // r12
  unsigned __int8 *Src; // r13
  unsigned __int8 *v5; // rdi
  unsigned __int8 *v6; // r15
  int Acl; // ebx
  void *Pool2; // rax
  unsigned __int8 *v9; // r14
  PVOID *v10; // rsi
  int v11; // ebx
  unsigned __int8 *v12; // rax
  void *v13; // rax
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rax
  ULONG v16; // ebx
  ACL *v17; // rax
  ACL *v18; // r14
  int v19; // r9d
  int v20; // r9d
  unsigned int v21; // edi
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  unsigned int v24; // r9d
  unsigned int v25; // r9d
  unsigned int v26; // edi
  void *v27; // rax
  struct _SID_IDENTIFIER_AUTHORITY v29; // [rsp+30h] [rbp-40h] BYREF
  void *v30; // [rsp+38h] [rbp-38h]
  void *v31; // [rsp+40h] [rbp-30h]
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v33; // [rsp+68h] [rbp-8h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C0h] [rbp+50h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v36; // [rsp+C8h] [rbp+58h] BYREF

  *(_WORD *)&v29.Value[4] = 1280;
  *(_DWORD *)v29.Value = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v33 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)v36.Value = 0;
  v3 = 0LL;
  *(_WORD *)&v36.Value[4] = 3840;
  Src = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( !a1 )
    return (unsigned int)-1073741811;
  *a1 = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (Acl & 0xC0000000) == 0xC0000000 )
  {
    v10 = a1;
    goto LABEL_75;
  }
  Pool2 = (void *)ExAllocatePool2(256LL, 12LL, 1668114000LL);
  v31 = Pool2;
  v9 = (unsigned __int8 *)Pool2;
  if ( Pool2 )
  {
    Acl = RtlInitializeSid(Pool2, &IdentifierAuthority, 1u);
    if ( (Acl & 0xC0000000) != 0xC0000000 )
    {
      *RtlSubAuthoritySid(v9, 0) = 0;
      v11 = v9[1];
      v12 = (unsigned __int8 *)ExAllocatePool2(256LL, 32LL, 1668114000LL);
      Src = v12;
      if ( !v12 )
        goto LABEL_8;
      RtlInitializeSid(v12, &v29, 6u);
      *RtlSubAuthoritySid(Src, 0) = 80;
      *RtlSubAuthoritySid(Src, 1u) = 956008885;
      *RtlSubAuthoritySid(Src, 2u) = -876444647;
      *RtlSubAuthoritySid(Src, 3u) = 1831038044;
      *RtlSubAuthoritySid(Src, 4u) = 1853292631;
      *RtlSubAuthoritySid(Src, 5u) = -2023488832;
      *(_DWORD *)IdentifierAuthority.Value = v11 + Src[1];
      v13 = (void *)ExAllocatePool2(256LL, 16LL, 1668114000LL);
      v30 = v13;
      v5 = (unsigned __int8 *)v13;
      if ( !v13 )
        goto LABEL_8;
      Acl = RtlInitializeSid(v13, &v36, 2u);
      if ( (Acl & 0xC0000000) == 0xC0000000 )
        goto LABEL_9;
      *RtlSubAuthoritySid(v5, 0) = 2;
      *RtlSubAuthoritySid(v5, 1u) = 1;
      *(_DWORD *)IdentifierAuthority.Value += v5[1];
      v14 = (unsigned __int8 *)ExAllocatePool2(256LL, 16LL, 1668114000LL);
      v6 = v14;
      if ( !v14 )
        goto LABEL_8;
      Acl = RtlInitializeSid(v14, &v36, 2u);
      if ( (Acl & 0xC0000000) == 0xC0000000 )
        goto LABEL_9;
      *RtlSubAuthoritySid(v6, 0) = 2;
      *RtlSubAuthoritySid(v6, 1u) = 2;
      *(_DWORD *)IdentifierAuthority.Value += v6[1];
      v15 = (unsigned __int8 *)ExAllocatePool2(256LL, 16LL, 1668114000LL);
      v3 = v15;
      if ( v15 )
      {
        Acl = RtlInitializeSid(v15, &v29, 2u);
        if ( (Acl & 0xC0000000) != 0xC0000000 )
        {
          *RtlSubAuthoritySid(v3, 0) = 32;
          *RtlSubAuthoritySid(v3, 1u) = 544;
          v16 = 4 * (*(_DWORD *)IdentifierAuthority.Value + v3[1]) + 108;
          v17 = (ACL *)ExAllocatePool2(256LL, v16, 1668114000LL);
          v18 = v17;
          if ( !v17 )
          {
            v9 = (unsigned __int8 *)v31;
            Acl = -1073741801;
            goto LABEL_9;
          }
          Acl = RtlCreateAcl(v17, v16, 2u);
          if ( (Acl & 0xC0000000) != 0xC0000000 )
          {
            v19 = 0x10000000;
            if ( a2 )
              v19 = a2[3] & 0xFFFFFFF;
            Acl = RtlpAddKnownAce((__int64)v18, 2u, 3, v19, Src, 0);
            if ( (Acl & 0xC0000000) != 0xC0000000 )
            {
              v20 = 0x10000000;
              if ( a2 )
                v20 = a2[3] & 0xFFFFFFF;
              Acl = RtlpAddKnownAce((__int64)v18, 2u, 3, v20, v3, 0);
              if ( (Acl & 0xC0000000) != 0xC0000000 )
              {
                v21 = 0x80000000;
                v22 = 0x80000000;
                if ( a2 )
                {
                  v23 = *a2 | 0x80000000;
                  if ( (*a2 & 0x40000000) != 0 )
                    v23 |= a2[1];
                  if ( (v23 & 0x20000000) != 0 )
                    v23 |= a2[2];
                  if ( (v23 & 0x10000000) != 0 )
                    v23 |= a2[3];
                  v22 = v23 & 0xFFFFFFF;
                }
                Acl = RtlpAddKnownAce((__int64)v18, 2u, 3, v22, (unsigned __int8 *)v31, 0);
                if ( (Acl & 0xC0000000) != 0xC0000000 )
                {
                  v24 = 0x80000000;
                  if ( a2 )
                  {
                    v25 = *a2 | 0x80000000;
                    if ( (*a2 & 0x40000000) != 0 )
                      v25 |= a2[1];
                    if ( (v25 & 0x20000000) != 0 )
                      v25 |= a2[2];
                    if ( (v25 & 0x10000000) != 0 )
                      v25 |= a2[3];
                    v24 = v25 & 0xFFFFFFF;
                  }
                  Acl = RtlpAddKnownAce((__int64)v18, 2u, 3, v24, (unsigned __int8 *)v30, 0);
                  if ( (Acl & 0xC0000000) != 0xC0000000 )
                  {
                    if ( a2 )
                    {
                      v26 = *a2 | 0x80000000;
                      if ( (*a2 & 0x40000000) != 0 )
                        v26 |= a2[1];
                      if ( (v26 & 0x20000000) != 0 )
                        v26 |= a2[2];
                      if ( (v26 & 0x10000000) != 0 )
                        v26 |= a2[3];
                      v21 = v26 & 0xFFFFFFF;
                    }
                    Acl = RtlpAddKnownAce((__int64)v18, 2u, 3, v21, v6, 0);
                    if ( (Acl & 0xC0000000) != 0xC0000000 )
                    {
                      if ( RtlValidAcl((__int64)v18) )
                      {
                        Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v18, 0);
                        if ( (Acl & 0xC0000000) != 0xC0000000 )
                        {
                          Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Src, 0);
                          if ( (Acl & 0xC0000000) != 0xC0000000 )
                          {
                            if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                            {
                              *(_DWORD *)IdentifierAuthority.Value = 0;
                              Acl = RtlAbsoluteToSelfRelativeSD(
                                      SecurityDescriptor,
                                      0LL,
                                      (PULONG)IdentifierAuthority.Value);
                              if ( *(_DWORD *)IdentifierAuthority.Value )
                              {
                                v27 = (void *)ExAllocatePool2(
                                                256LL,
                                                *(unsigned int *)IdentifierAuthority.Value,
                                                1668114000LL);
                                v10 = a1;
                                *a1 = v27;
                                if ( v27 )
                                  Acl = RtlAbsoluteToSelfRelativeSD(
                                          SecurityDescriptor,
                                          v27,
                                          (PULONG)IdentifierAuthority.Value);
                                else
                                  Acl = -1073741801;
                                v5 = (unsigned __int8 *)v30;
                                goto LABEL_64;
                              }
                            }
                            else
                            {
                              Acl = -1073741703;
                            }
                          }
                        }
                      }
                      else
                      {
                        Acl = -1073741705;
                      }
                    }
                  }
                }
                v5 = (unsigned __int8 *)v30;
              }
            }
          }
          v10 = a1;
LABEL_64:
          ExFreePoolWithTag(v18, 0);
          v9 = (unsigned __int8 *)v31;
          goto LABEL_10;
        }
      }
      else
      {
LABEL_8:
        Acl = -1073741801;
      }
    }
LABEL_9:
    v10 = a1;
LABEL_10:
    ExFreePoolWithTag(v9, 0);
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
LABEL_75:
    if ( Acl >= 0 )
      return (unsigned int)Acl;
    goto LABEL_76;
  }
  v10 = a1;
  Acl = -1073741801;
LABEL_76:
  if ( *v10 )
  {
    ExFreePoolWithTag(*v10, 0);
    *v10 = 0LL;
  }
  return (unsigned int)Acl;
}
