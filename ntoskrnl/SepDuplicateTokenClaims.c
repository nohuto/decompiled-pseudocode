/*
 * XREFs of SepDuplicateTokenClaims @ 0x1408A1CFA
 * Callers:
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 * Callees:
 *     SepDuplicateClaimAttributes @ 0x1409CE654 (SepDuplicateClaimAttributes.c)
 */

__int64 __fastcall SepDuplicateTokenClaims(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 && *(_QWORD *)(a1 + 1096) )
  {
    result = SepDuplicateClaimAttributes(*(_QWORD *)(a1 + 1096), &v6);
    v4 = result;
    if ( (int)result >= 0 )
    {
      v5 = v6;
      *(_DWORD *)(a2 + 200) |= 0x8000u;
      *(_QWORD *)(a2 + 1096) = v5;
      return v4;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 1096) = *(_QWORD *)(a1 + 1096);
    return 0LL;
  }
  return result;
}
