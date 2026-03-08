/*
 * XREFs of PiAuGetServiceStateSecurityObject @ 0x1409589E4
 * Callers:
 *     PiCreateServiceStateKey @ 0x14086F264 (PiCreateServiceStateKey.c)
 *     PiCreateServiceKeyUnderPath @ 0x140952CC8 (PiCreateServiceKeyUnderPath.c)
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

__int64 __fastcall PiAuGetServiceStateSecurityObject(char a1, _QWORD *a2)
{
  void *v4; // rdi
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ACL *Pool2; // rax
  ACL *v9; // rsi
  int Acl; // ebx
  PSID v11; // r14
  ULONG v12; // eax
  void *v13; // rax
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  ULONG BufferLength; // [rsp+A0h] [rbp+40h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v16 = 0LL;
  v4 = 0LL;
  v5 = RtlLengthSid(SeExports->SeUserModeDriversSid);
  v6 = RtlLengthSid(SeAliasAdminsSid) + v5;
  v7 = RtlLengthSid(SeLocalSystemSid) + 32 + v6;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v7, 538996816LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v7, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce((__int64)v9, 2u, 2, 983103, (unsigned __int8 *)SeLocalSystemSid, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((__int64)v9, 2u, 2, a1 != 0 ? 196639 : 131097, (unsigned __int8 *)SeAliasAdminsSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((__int64)v9, 2u, 2, 131097, (unsigned __int8 *)SeExports->SeUserModeDriversSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
              if ( Acl >= 0 )
              {
                v11 = SeLocalSystemSid;
                Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeLocalSystemSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v11, 0);
                  if ( Acl >= 0 )
                  {
                    if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                      && (v12 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v12, v12 >= 0x28) )
                    {
                      v13 = (void *)ExAllocatePool2(256LL, v12, 538996816LL);
                      v4 = v13;
                      if ( v13 )
                      {
                        Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v13, &BufferLength);
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
    ExFreePoolWithTag(v9, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
