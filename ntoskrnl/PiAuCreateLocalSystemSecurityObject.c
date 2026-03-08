/*
 * XREFs of PiAuCreateLocalSystemSecurityObject @ 0x140B5B3D8
 * Callers:
 *     PiAuCreateSecurityObjects @ 0x140B5A978 (PiAuCreateSecurityObjects.c)
 * Callees:
 *     RtlSetOwnerSecurityDescriptor @ 0x14068E3D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlLengthSecurityDescriptor @ 0x14071C8F0 (RtlLengthSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140744590 (RtlSetGroupSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x14074E600 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlValidSecurityDescriptor @ 0x14075F860 (RtlValidSecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x140872270 (RtlAddAccessAllowedAceEx.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuCreateLocalSystemSecurityObject(PSID *a1)
{
  unsigned __int8 *v2; // rax
  void *v3; // rdi
  ULONG v4; // ebx
  ACL *Pool2; // rax
  ACL *v6; // rsi
  NTSTATUS Acl; // ebx
  ULONG v8; // eax
  void *v9; // rax
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]
  ULONG BufferLength; // [rsp+80h] [rbp+20h] BYREF

  v12 = 0LL;
  v2 = (unsigned __int8 *)*a1;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v3 = 0LL;
  v4 = 4 * v2[1] + 24;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v4, 0x47706E50u);
  v6 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v4, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAceEx(v6, 2u, 0, 0xF0000u, *a1);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v6, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, *a1, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, *a1, 0);
              if ( Acl >= 0 )
              {
                if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                  && (v8 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v8, v8 >= 0x28) )
                {
                  v9 = (void *)ExAllocatePool2(256LL, v8, 0x47706E50u);
                  v3 = v9;
                  if ( v9 )
                  {
                    Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v9, &BufferLength);
                    if ( Acl >= 0 )
                    {
                      PiAuLocalSystemSecurityObject = v3;
                      v3 = 0LL;
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
    ExFreePoolWithTag(v6, 0x47706E50u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x47706E50u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
