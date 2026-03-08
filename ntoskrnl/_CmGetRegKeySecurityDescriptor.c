/*
 * XREFs of _CmGetRegKeySecurityDescriptor @ 0x14086D238
 * Callers:
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14086D18C (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _CmGetDeviceInterfaceRegKeySecurityDescriptor @ 0x14087E010 (_CmGetDeviceInterfaceRegKeySecurityDescriptor.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
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

__int64 __fastcall CmGetRegKeySecurityDescriptor(char a1, _QWORD *a2)
{
  _BYTE *v4; // r14
  int Acl; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ACL *Pool2; // rax
  ACL *v10; // rsi
  ULONG v11; // eax
  void *v12; // rax
  void *v13; // rdi
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-49h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v16; // [rsp+40h] [rbp-41h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v17; // [rsp+48h] [rbp-39h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v19; // [rsp+70h] [rbp-11h]
  unsigned __int8 Owner[16]; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int8 Sid[12]; // [rsp+88h] [rbp+7h] BYREF
  unsigned __int8 Src[12]; // [rsp+94h] [rbp+13h] BYREF
  _BYTE v23[16]; // [rsp+A0h] [rbp+1Fh] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *a2 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v16.Value = 0;
  *(_WORD *)&v16.Value[4] = 256;
  *(_DWORD *)v17.Value = 0;
  *(_WORD *)&v17.Value[4] = 3840;
  v19 = 0LL;
  v4 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Acl = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( Acl >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 18;
    if ( !RtlValidSid(Sid) )
      return (unsigned int)-1073741762;
    Acl = RtlInitializeSid(Src, &v16, 1u);
    if ( Acl < 0 )
      return (unsigned int)Acl;
    *RtlSubAuthoritySid(Src, 0) = 0;
    if ( !RtlValidSid(Src) )
      return (unsigned int)-1073741762;
    Acl = RtlInitializeSid(Owner, &IdentifierAuthority, 2u);
    if ( Acl < 0 )
      return (unsigned int)Acl;
    *RtlSubAuthoritySid(Owner, 0) = 32;
    *RtlSubAuthoritySid(Owner, 1u) = 544;
    if ( !RtlValidSid(Owner) )
      return (unsigned int)-1073741762;
    if ( a1 )
    {
      v4 = v23;
      Acl = RtlInitializeSid(v23, &v17, 2u);
      if ( Acl < 0 )
        return (unsigned int)Acl;
      *RtlSubAuthoritySid(v23, 0) = 2;
      *RtlSubAuthoritySid(v23, 1u) = 1;
      if ( !RtlValidSid(v23) )
        return (unsigned int)-1073741762;
    }
    v6 = RtlLengthSid(Owner);
    v7 = RtlLengthSid(Src) + v6;
    v8 = RtlLengthSid(Sid) + v7 + 32;
    if ( a1 )
      v8 += RtlLengthSid(v4) + 8;
    Pool2 = (ACL *)ExAllocatePool2(256LL, v8, 1380994640LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v8, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((__int64)v10, 2u, 2, 983103, Sid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((__int64)v10, 2u, 2, 131097, Src, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((__int64)v10, 2u, 2, 983103, Owner, 0);
            if ( Acl >= 0 )
            {
              if ( !a1 || (Acl = RtlpAddKnownAce((__int64)v10, 2u, 2, 131097, v4, 0), Acl >= 0) )
              {
                Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v10, 0);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, 1u);
                      if ( Acl >= 0 )
                      {
                        WORD1(SecurityDescriptor[0]) |= 0x1500u;
                        if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                        {
                          v11 = RtlLengthSecurityDescriptor(SecurityDescriptor);
                          *(_DWORD *)IdentifierAuthority.Value = v11;
                          if ( v11 < 0x28 )
                          {
                            Acl = -1073741762;
                          }
                          else
                          {
                            v12 = (void *)ExAllocatePool2(256LL, v11, 1380994640LL);
                            v13 = v12;
                            if ( v12 )
                            {
                              Acl = RtlAbsoluteToSelfRelativeSD(
                                      SecurityDescriptor,
                                      v12,
                                      (PULONG)IdentifierAuthority.Value);
                              if ( Acl < 0 )
                                ExFreePoolWithTag(v13, 0);
                              else
                                *a2 = v13;
                            }
                            else
                            {
                              Acl = -1073741801;
                            }
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
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)Acl;
}
