/*
 * XREFs of SepSetTokenTrust @ 0x1407259B0
 * Callers:
 *     SepCreateTokenEx @ 0x1402022FC (SepCreateTokenEx.c)
 *     SepSetTrustLevelForProcessToken @ 0x140205A98 (SepSetTrustLevelForProcessToken.c)
 *     SeCopyClientToken @ 0x14072295C (SeCopyClientToken.c)
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 * Callees:
 *     SepDuplicateSid @ 0x14066B730 (SepDuplicateSid.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
