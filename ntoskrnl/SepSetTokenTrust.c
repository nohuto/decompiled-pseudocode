/*
 * XREFs of SepSetTokenTrust @ 0x1406D33D8
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     SepSetTrustLevelForProcessToken @ 0x140296E90 (SepSetTrustLevelForProcessToken.c)
 *     SeCopyClientToken @ 0x1406D1D40 (SeCopyClientToken.c)
 *     NtOpenThreadTokenEx @ 0x1406D2730 (NtOpenThreadTokenEx.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 * Callees:
 *     SepDuplicateSid @ 0x1407843E0 (SepDuplicateSid.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenTrust(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  void *v4; // rcx
  __int64 result; // rax

  v2 = 0;
  if ( !a2 || (result = SepDuplicateSid(a2), v2 = result, (int)result >= 0) )
  {
    v4 = *(void **)(a1 + 1104);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 1104) = 0LL;
    return v2;
  }
  return result;
}
