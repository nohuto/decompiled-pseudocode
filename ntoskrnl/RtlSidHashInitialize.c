/*
 * XREFs of RtlSidHashInitialize @ 0x140310020
 * Callers:
 *     SepTokenFromAccessInformation @ 0x1402065D0 (SepTokenFromAccessInformation.c)
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     SepSetTokenCapabilities @ 0x140710278 (SepSetTokenCapabilities.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     SepCopyTokenAccessInformation @ 0x14077104C (SepCopyTokenAccessInformation.c)
 *     SepCreateClaimAttributes @ 0x140780934 (SepCreateClaimAttributes.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     SepDuplicateClaimAttributes @ 0x1409CE654 (SepDuplicateClaimAttributes.c)
 *     CmpBuildAdminInformation @ 0x140A15CBC (CmpBuildAdminInformation.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RtlSidHashInitialize(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx

  if ( !a3 )
    return 3221225485LL;
  memset(a3, 0, 0x110uLL);
  if ( a1 && a2 )
  {
    a3[1] = a1;
    *(_DWORD *)a3 = a2;
    if ( a2 > 0x40 )
      a2 = 64;
    v6 = 1LL;
    v7 = a2;
    do
    {
      v8 = *a1;
      a1 += 2;
      v9 = *(unsigned __int8 *)(v8 + 4LL * *(unsigned __int8 *)(v8 + 1) + 4);
      v10 = *(_BYTE *)(v8 + 4LL * *(unsigned __int8 *)(v8 + 1) + 4) & 0xF;
      a3[v10 + 2] |= v6;
      a3[((unsigned __int64)v9 >> 4) + 18] |= v6;
      v6 = __ROL8__(v6, 1);
      --v7;
    }
    while ( v7 );
  }
  return 0LL;
}
