/*
 * XREFs of PopCreateHiberFileSecurityDescriptor @ 0x1407FC318
 * Callers:
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 * Callees:
 *     RtlGetAce @ 0x140245EE0 (RtlGetAce.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

ACL *PopCreateHiberFileSecurityDescriptor()
{
  ACL *v0; // rbx
  ACL *v1; // rdi
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *Src; // rsi
  __int64 v4; // rbp
  ACL *v5; // rax
  __int64 v6; // rax
  NTSTATUS SecurityDescriptor; // eax
  ACL *v8; // rcx
  _BYTE *IdentifierAuthority; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0LL;
  WORD2(IdentifierAuthority) = 256;
  LODWORD(IdentifierAuthority) = 0;
  v1 = 0LL;
  Pool2 = (unsigned __int8 *)ExAllocatePool2(256LL, 12LL, 1919052136LL);
  Src = Pool2;
  if ( !Pool2 )
    return v0;
  if ( RtlInitializeSid(Pool2, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Src, 0) = 0;
    v4 = 4 * (unsigned int)Src[1] + 24;
    if ( (unsigned int)v4 >= 4 * (unsigned int)Src[1] + 16 )
    {
      v5 = (ACL *)ExAllocatePool2(256LL, (unsigned int)v4, 1919052136LL);
      v1 = v5;
      if ( v5 )
      {
        if ( RtlCreateAcl(v5, v4, 2u) >= 0 && (int)RtlpAddKnownAce((__int64)v1, 2u, 0, 0x10000, Src, 0) >= 0 )
        {
          IdentifierAuthority = 0LL;
          RtlGetAce(v1, 0, (PVOID *)&IdentifierAuthority);
          IdentifierAuthority[1] |= 2u;
          v6 = ExAllocatePool2(256LL, v4 + 40, 1919052136LL);
          v0 = (ACL *)v6;
          if ( v6 )
          {
            memmove((void *)(v6 + 40), v1, (unsigned int)v4);
            SecurityDescriptor = RtlCreateSecurityDescriptor(v0, 1u);
            v8 = v0;
            if ( SecurityDescriptor >= 0 )
            {
              if ( RtlSetDaclSecurityDescriptor(v0, 1u, v0 + 5, 0) >= 0 )
                goto LABEL_10;
              v8 = v0;
            }
            ExFreePoolWithTag(v8, 0);
          }
        }
      }
    }
  }
LABEL_10:
  ExFreePoolWithTag(Src, 0);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v0;
}
