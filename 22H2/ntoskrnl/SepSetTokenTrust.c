/*
 * XREFs of SepSetTokenTrust @ 0x1406549A0
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     SepSetTrustLevelForProcessToken @ 0x140250FB8 (SepSetTrustLevelForProcessToken.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     NtOpenThreadTokenEx @ 0x140653590 (NtOpenThreadTokenEx.c)
 *     SeCopyClientToken @ 0x1406DAAF4 (SeCopyClientToken.c)
 * Callees:
 *     SepDuplicateSid @ 0x140654430 (SepDuplicateSid.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenTrust(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  void *v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  v7 = 0LL;
  if ( a2 )
  {
    result = SepDuplicateSid(a2, &v7);
    v3 = result;
    if ( (int)result < 0 )
      return result;
    v2 = v7;
  }
  v5 = *(void **)(a1 + 1104);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  *(_QWORD *)(a1 + 1104) = v2;
  return v3;
}
