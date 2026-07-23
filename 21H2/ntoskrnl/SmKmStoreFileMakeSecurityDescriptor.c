/*
 * XREFs of SmKmStoreFileMakeSecurityDescriptor @ 0x14092CBC0
 * Callers:
 *     SmKmStoreFileCreateForIoType @ 0x14092C5EC (SmKmStoreFileCreateForIoType.c)
 * Callees:
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x14026D6C0 (RtlSubAuthoritySid.c)
 *     RtlpAddKnownAce @ 0x140651280 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x1406BC580 (RtlInitializeSid.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmKmStoreFileMakeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ACL **a2)
{
  void *v4; // r14
  void *Src; // rsi
  ACL *v6; // rdi
  PVOID PoolWithTag; // rax
  void *v8; // r15
  int Acl; // ebx
  PVOID v10; // rax
  PVOID v11; // rax
  ULONG v12; // ebx
  ULONG v13; // ebx
  ULONG v14; // ebx
  ACL *v15; // rax
  _SID_IDENTIFIER_AUTHORITY v17; // [rsp+80h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+88h] [rbp+58h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v17.Value = 0;
  *(_WORD *)&v17.Value[4] = 1280;
  v4 = 0LL;
  Src = 0LL;
  v6 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x53446D73u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  Acl = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u);
  if ( Acl >= 0 )
  {
    v10 = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x53446D73u);
    v4 = v10;
    if ( v10 )
    {
      Acl = RtlInitializeSid(v10, &v17, 1u);
      if ( Acl < 0 )
        goto LABEL_17;
      v11 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x53446D73u);
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
        v15 = (ACL *)ExAllocatePoolWithTag(PagedPool, v14, 0x61446D73u);
        v6 = v15;
        if ( v15 )
        {
          Acl = RtlCreateAcl(v15, v14, 2u);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v6, 2u, 0, 2032127, (unsigned __int8 *)Src, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v6, 2u, 0, 2032127, (unsigned __int8 *)v4, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce(v6, 2u, 0, 0x10000, (unsigned __int8 *)v8, 0);
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
