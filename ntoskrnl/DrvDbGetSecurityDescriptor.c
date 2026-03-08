/*
 * XREFs of DrvDbGetSecurityDescriptor @ 0x140A6AD74
 * Callers:
 *     DrvDbLoadDatabaseNode @ 0x140865BC0 (DrvDbLoadDatabaseNode.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14068E3D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlLengthSecurityDescriptor @ 0x14071C8F0 (RtlLengthSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140744590 (RtlSetGroupSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x14074E600 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlValidSecurityDescriptor @ 0x14075F860 (RtlValidSecurityDescriptor.c)
 *     RtlValidSid @ 0x1407C92A0 (RtlValidSid.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void *DrvDbGetSecurityDescriptor()
{
  void *v0; // rdi
  void *Pool2; // rax
  void *Src; // r12
  void *v3; // rax
  void *v4; // r15
  void *v5; // rax
  void *v6; // r14
  void *v7; // rax
  void *v8; // rsi
  ULONG v9; // ebx
  ULONG v10; // ebx
  ULONG v11; // ebx
  ACL *v12; // rax
  ACL *v13; // r13
  ULONG v14; // eax
  void *v15; // rax
  void *v16; // rbx
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A0h] [rbp+40h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v21; // [rsp+A8h] [rbp+48h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v22; // [rsp+B0h] [rbp+50h] BYREF

  v0 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v21.Value = 0;
  *(_WORD *)&v21.Value[4] = 768;
  *(_DWORD *)v22.Value = 0;
  *(_WORD *)&v22.Value[4] = 256;
  v19 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Pool2 = (void *)ExAllocatePool2(256LL, 12LL, 1111770192LL);
  Src = Pool2;
  if ( Pool2 )
  {
    if ( RtlInitializeSid(Pool2, &IdentifierAuthority, 1u) >= 0 )
    {
      *RtlSubAuthoritySid(Src, 0) = 18;
      if ( RtlValidSid(Src) )
      {
        v3 = (void *)ExAllocatePool2(256LL, 12LL, 1111770192LL);
        v4 = v3;
        if ( v3 )
        {
          if ( RtlInitializeSid(v3, &v21, 1u) >= 0 )
          {
            *RtlSubAuthoritySid(v4, 0) = 4;
            if ( RtlValidSid(v4) )
            {
              v5 = (void *)ExAllocatePool2(256LL, 12LL, 1111770192LL);
              v6 = v5;
              if ( v5 )
              {
                if ( RtlInitializeSid(v5, &v22, 1u) >= 0 )
                {
                  *RtlSubAuthoritySid(v6, 0) = 0;
                  if ( RtlValidSid(v6) )
                  {
                    v7 = (void *)ExAllocatePool2(256LL, 16LL, 1111770192LL);
                    v8 = v7;
                    if ( v7 )
                    {
                      if ( RtlInitializeSid(v7, &IdentifierAuthority, 2u) >= 0 )
                      {
                        *RtlSubAuthoritySid(v8, 0) = 32;
                        *RtlSubAuthoritySid(v8, 1u) = 544;
                        if ( RtlValidSid(v8) )
                        {
                          v9 = RtlLengthSid(v6);
                          v10 = RtlLengthSid(v4) + v9;
                          v11 = RtlLengthSid(Src) + 32 + v10;
                          v12 = (ACL *)ExAllocatePool2(256LL, v11, 1111770192LL);
                          v13 = v12;
                          if ( v12 )
                          {
                            if ( RtlCreateAcl(v12, v11, 2u) >= 0
                              && (int)RtlpAddKnownAce((__int64)v13, 2u, 2, 983103, (unsigned __int8 *)Src, 0) >= 0
                              && (int)RtlpAddKnownAce((__int64)v13, 2u, 2, 0x20000, (unsigned __int8 *)v4, 0) >= 0
                              && (int)RtlpAddKnownAce((__int64)v13, 2u, 2, 131097, (unsigned __int8 *)v6, 0) >= 0
                              && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
                              && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v13, 0) >= 0
                              && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v8, 1u) >= 0
                              && RtlSetGroupSecurityDescriptor(SecurityDescriptor, v8, 1u) >= 0 )
                            {
                              WORD1(SecurityDescriptor[0]) |= 0x1400u;
                              if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                              {
                                v14 = RtlLengthSecurityDescriptor(SecurityDescriptor);
                                *(_DWORD *)IdentifierAuthority.Value = v14;
                                if ( v14 >= 0x28 )
                                {
                                  v15 = (void *)ExAllocatePool2(256LL, v14, 1111770192LL);
                                  v16 = v15;
                                  if ( v15 )
                                  {
                                    if ( RtlAbsoluteToSelfRelativeSD(
                                           SecurityDescriptor,
                                           v15,
                                           (PULONG)IdentifierAuthority.Value) < 0 )
                                      ExFreePoolWithTag(v16, 0);
                                    else
                                      v0 = v16;
                                  }
                                }
                              }
                            }
                            ExFreePoolWithTag(v13, 0);
                          }
                        }
                      }
                      ExFreePoolWithTag(v8, 0);
                    }
                  }
                }
                ExFreePoolWithTag(v6, 0);
              }
            }
          }
          ExFreePoolWithTag(v4, 0);
        }
      }
    }
    ExFreePoolWithTag(Src, 0);
  }
  return v0;
}
