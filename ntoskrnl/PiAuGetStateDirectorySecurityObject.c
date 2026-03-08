/*
 * XREFs of PiAuGetStateDirectorySecurityObject @ 0x140958C2C
 * Callers:
 *     PiOpenDirectoryWithRoot @ 0x140953234 (PiOpenDirectoryWithRoot.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14068E3D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlLengthSecurityDescriptor @ 0x14071C8F0 (RtlLengthSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140744590 (RtlSetGroupSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x14074E600 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlValidSecurityDescriptor @ 0x14075F860 (RtlValidSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuGetStateDirectorySecurityObject(char a1, _QWORD *a2)
{
  void *v4; // rsi
  ULONG v5; // edi
  ULONG v6; // edi
  ULONG v7; // r14d
  ULONG v8; // r14d
  ACL *Pool2; // rax
  ACL *v10; // rdi
  int Acl; // ebx
  PSID v12; // r14
  ULONG v13; // eax
  void *v14; // rax
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  ULONG BufferLength; // [rsp+A0h] [rbp+40h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v17 = 0LL;
  v4 = 0LL;
  v5 = RtlLengthSid(SeExports->SeUserModeDriversSid);
  v6 = RtlLengthSid(SeAliasAdminsSid) + v5;
  v7 = RtlLengthSid(SeLocalSystemSid) + 2 * (v6 + 28);
  v8 = RtlLengthSid(SeLocalSystemSid) + v7;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v8, 538996816LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v8, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce((__int64)v10, 2u, 3, 1245599, (unsigned __int8 *)SeLocalSystemSid, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((__int64)v10, 2u, 2, 32, (unsigned __int8 *)SeLocalSystemSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(
                  (__int64)v10,
                  2u,
                  3,
                  a1 != 0 ? 1245599 : 1179785,
                  (unsigned __int8 *)SeAliasAdminsSid,
                  0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((__int64)v10, 2u, 2, 32, (unsigned __int8 *)SeAliasAdminsSid, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((__int64)v10, 2u, 3, 1179785, (unsigned __int8 *)SeExports->SeUserModeDriversSid, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce((__int64)v10, 2u, 2, 32, (unsigned __int8 *)SeExports->SeUserModeDriversSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v10, 0);
                    if ( Acl >= 0 )
                    {
                      v12 = SeLocalSystemSid;
                      Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeLocalSystemSid, 0);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v12, 0);
                        if ( Acl >= 0 )
                        {
                          if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                            && (v13 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v13, v13 >= 0x28) )
                          {
                            v14 = (void *)ExAllocatePool2(256LL, v13, 538996816LL);
                            v4 = v14;
                            if ( v14 )
                            {
                              Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v14, &BufferLength);
                              if ( Acl >= 0 )
                              {
                                *a2 = v4;
                                v4 = 0LL;
                              }
                            }
                            else
                            {
                              Acl = -1073741670;
                            }
                          }
                          else
                          {
                            Acl = -1073741595;
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
      }
    }
    ExFreePoolWithTag(v10, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
