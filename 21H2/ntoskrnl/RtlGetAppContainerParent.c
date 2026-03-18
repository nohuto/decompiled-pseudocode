/*
 * XREFs of RtlGetAppContainerParent @ 0x1409B8FF0
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x140696944 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9B50 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     RtlGetAppContainerSidType @ 0x140696D90 (RtlGetAppContainerSidType.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlGetAppContainerParent(char *Sid, ULONG **a2)
{
  ULONG *PoolWithQuotaTag; // rax
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
  PoolWithQuotaTag = (ULONG *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x28uLL, 0x62507452u);
  v5 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  v7 = RtlInitializeSid(PoolWithQuotaTag, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 8u);
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
