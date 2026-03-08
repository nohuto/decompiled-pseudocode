/*
 * XREFs of _PnpGetPropertiesSecurityDescriptor @ 0x14087C494
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x1406D1610 (_PnpOpenPropertiesKey.c)
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

void *PnpGetPropertiesSecurityDescriptor()
{
  void *v0; // rbx
  ULONG v1; // edi
  ACL *Pool2; // rax
  ACL *v3; // rsi
  ULONG v4; // eax
  void *v5; // rax
  void *v6; // rdi
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp-50h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v10; // [rsp+58h] [rbp-28h]
  unsigned __int8 Sid[16]; // [rsp+60h] [rbp-20h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = 0LL;
  v10 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 18;
    if ( RtlValidSid(Sid) )
    {
      v1 = RtlLengthSid(Sid) + 16;
      Pool2 = (ACL *)ExAllocatePool2(256LL, v1, 1380994640LL);
      v3 = Pool2;
      if ( Pool2 )
      {
        if ( RtlCreateAcl(Pool2, v1, 2u) >= 0
          && (int)RtlpAddKnownAce((__int64)v3, 2u, 2, 983103, Sid, 0) >= 0
          && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
          && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0) >= 0
          && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Sid, 1u) >= 0
          && RtlSetGroupSecurityDescriptor(SecurityDescriptor, Sid, 1u) >= 0 )
        {
          WORD1(SecurityDescriptor[0]) |= 0x1400u;
          if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
          {
            v4 = RtlLengthSecurityDescriptor(SecurityDescriptor);
            *(_DWORD *)IdentifierAuthority.Value = v4;
            if ( v4 >= 0x28 )
            {
              v5 = (void *)ExAllocatePool2(256LL, v4, 1380994640LL);
              v6 = v5;
              if ( v5 )
              {
                if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v5, (PULONG)IdentifierAuthority.Value) < 0 )
                  ExFreePoolWithTag(v6, 0);
                else
                  v0 = v6;
              }
            }
          }
        }
        ExFreePoolWithTag(v3, 0);
      }
    }
  }
  return v0;
}
