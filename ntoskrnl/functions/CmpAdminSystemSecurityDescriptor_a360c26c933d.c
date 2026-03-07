ACL *CmpAdminSystemSecurityDescriptor()
{
  unsigned __int8 *Pool2; // rbp
  __int64 v1; // rax
  unsigned __int8 *v2; // rdi
  ULONG v3; // ebx
  ULONG v4; // r14d
  ACL *v5; // rax
  ACL *v6; // rsi
  NTSTATUS Acl; // eax
  int v8; // eax
  __int64 v9; // rax
  ACL *v10; // rbx
  NTSTATUS SecurityDescriptor; // eax
  ULONG_PTR v12; // r14
  NTSTATUS v13; // eax
  ULONG_PTR v14; // r14
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp+8h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  Pool2 = (unsigned __int8 *)ExAllocatePool2(256LL, 12LL, 538987843LL);
  v1 = ExAllocatePool2(256LL, 16LL, 538987843LL);
  v2 = (unsigned __int8 *)v1;
  if ( !Pool2 || !v1 )
    KeBugCheckEx(0x51u, 0xBuLL, 1uLL, 0LL, 0LL);
  if ( RtlInitializeSid(Pool2, &IdentifierAuthority, 1u) < 0 || RtlInitializeSid(v2, &IdentifierAuthority, 2u) < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 2uLL, 0LL, 0LL);
  *RtlSubAuthoritySid(Pool2, 0) = 18;
  *RtlSubAuthoritySid(v2, 0) = 32;
  *RtlSubAuthoritySid(v2, 1u) = 544;
  v3 = 4 * (Pool2[1] + v2[1]) + 40;
  v4 = v3;
  v5 = (ACL *)ExAllocatePool2(256LL, v3, 538987843LL);
  v6 = v5;
  if ( !v5 )
    KeBugCheckEx(0x51u, 0xBuLL, 3uLL, 0LL, 0LL);
  Acl = RtlCreateAcl(v5, v3, 2u);
  if ( Acl < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 4uLL, Acl, 0LL);
  v8 = RtlpAddKnownAce((__int64)v6, 2u, 0, 2032127, Pool2, 0);
  if ( v8 < 0 || (v8 = RtlpAddKnownAce((__int64)v6, 2u, 0, 2032127, v2, 0), v8 < 0) )
    KeBugCheckEx(0x51u, 0xBuLL, 5uLL, v8, 0LL);
  v9 = ExAllocatePool2(256LL, v3 + 40LL, 538987843LL);
  v10 = (ACL *)v9;
  if ( !v9 )
    KeBugCheckEx(0x51u, 0xBuLL, 6uLL, 0LL, 0LL);
  memmove((void *)(v9 + 40), v6, v4);
  SecurityDescriptor = RtlCreateSecurityDescriptor(v10, 1u);
  v12 = SecurityDescriptor;
  if ( SecurityDescriptor < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 7uLL, v12, 0LL);
  }
  v13 = RtlSetDaclSecurityDescriptor(v10, 1u, v10 + 5, 0);
  v14 = v13;
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v10, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 8uLL, v14, 0LL);
  }
  ExFreePoolWithTag(Pool2, 0);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v6, 0);
  return v10;
}
