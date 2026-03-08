/*
 * XREFs of RtlGetAppContainerParent @ 0x1409B9200
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x1407448F8 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9D5C (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x1407414C0 (RtlGetAppContainerSidType.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlGetAppContainerParent(char *Sid, ULONG **a2)
{
  ULONG *Pool2; // rax
  ULONG *v5; // rbx
  NTSTATUS v7; // edi
  unsigned __int8 v8; // di
  ULONG *v9; // r14
  PULONG v10; // rax
  int v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v11 = 0;
  if ( (int)RtlGetAppContainerSidType(Sid, &v11) < 0 || v11 != 1 )
    return 3221225485LL;
  Pool2 = (ULONG *)ExAllocatePool2(65LL, 40LL, 1649439826LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v7 = RtlInitializeSid(Pool2, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 8u);
  if ( v7 < 0 )
  {
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v8 = 0;
    v9 = v5 + 2;
    do
    {
      v10 = RtlSubAuthoritySid(Sid, v8++);
      *v9++ = *v10;
    }
    while ( v8 < 8u );
    *a2 = v5;
    return 0;
  }
  return (unsigned int)v7;
}
