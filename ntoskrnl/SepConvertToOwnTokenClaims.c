__int64 __fastcall SepConvertToOwnTokenClaims(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 1096);
  if ( !v2 )
    return 0LL;
  result = SepDuplicateClaimAttributes(v2, &v6);
  v4 = result;
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *(_DWORD *)(a1 + 200) |= 0x8000u;
    *(_QWORD *)(a1 + 1096) = v5;
    return v4;
  }
  return result;
}
