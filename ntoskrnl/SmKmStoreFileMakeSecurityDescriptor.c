/*
 * XREFs of SmKmStoreFileMakeSecurityDescriptor @ 0x1409D735C
 * Callers:
 *     SmKmStoreFileCreateForIoType @ 0x1409D6D88 (SmKmStoreFileCreateForIoType.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmKmStoreFileMakeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ACL **a2)
{
  void *v4; // r14
  void *Src; // rsi
  ACL *v6; // rdi
  void *Pool2; // rax
  void *v8; // r15
  int Acl; // ebx
  void *v10; // rax
  void *v11; // rax
  ULONG v12; // ebx
  ULONG v13; // ebx
  ULONG v14; // ebx
  ACL *v15; // rax
  struct _SID_IDENTIFIER_AUTHORITY v17; // [rsp+80h] [rbp+50h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+88h] [rbp+58h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v17.Value = 0;
  *(_WORD *)&v17.Value[4] = 1280;
  v4 = 0LL;
  Src = 0LL;
  v6 = 0LL;
  Pool2 = (void *)ExAllocatePool2(256LL, 12LL, 1396993395LL);
  v8 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  Acl = RtlInitializeSid(Pool2, &IdentifierAuthority, 1u);
  if ( Acl >= 0 )
  {
    v10 = (void *)ExAllocatePool2(256LL, 12LL, 1396993395LL);
    v4 = v10;
    if ( v10 )
    {
      Acl = RtlInitializeSid(v10, &v17, 1u);
      if ( Acl < 0 )
        goto LABEL_17;
      v11 = (void *)ExAllocatePool2(256LL, 16LL, 1396993395LL);
      Src = v11;
      if ( v11 )
      {
        Acl = RtlInitializeSid(v11, &v17, 2u);
        if ( Acl < 0 )
          goto LABEL_17;
        *RtlSubAuthoritySid(v8, 0) = 0;
        *RtlSubAuthoritySid(v4, 0) = 18;
        *RtlSubAuthoritySid(Src, 0) = 32;
        *RtlSubAuthoritySid(Src, 1u) = 544;
        v12 = RtlLengthSid(Src);
        v13 = RtlLengthSid(v4) + v12;
        v14 = RtlLengthSid(v8) + 32 + v13;
        v15 = (ACL *)ExAllocatePool2(256LL, v14, 1631874419LL);
        v6 = v15;
        if ( v15 )
        {
          Acl = RtlCreateAcl(v15, v14, 2u);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((__int64)v6, 2u, 0, 2032127, (unsigned __int8 *)Src, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((__int64)v6, 2u, 0, 2032127, (unsigned __int8 *)v4, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce((__int64)v6, 2u, 0, 0x10000, (unsigned __int8 *)v8, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v6, 0);
                    if ( Acl >= 0 )
                    {
                      *a2 = v6;
                      v6 = 0LL;
                      Acl = 0;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_17;
        }
      }
    }
    Acl = -1073741670;
  }
LABEL_17:
  ExFreePoolWithTag(v8, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)Acl;
}
