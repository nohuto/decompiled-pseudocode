/*
 * XREFs of ConvertToDDBHandle @ 0x1C00599BC
 * Callers:
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 */

__int64 __fastcall ConvertToDDBHandle(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-38h]
  __int128 v7; // [rsp+30h] [rbp-28h]

  v6 = 0LL;
  WORD1(v6) = 15;
  v7 = 0LL;
  if ( *(_WORD *)(a1 + 2) != 1 )
    return 3222536201LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v7 = v5;
  FreeDataBuffs(a2, 1u);
  *(_OWORD *)a2 = v6;
  result = v4 == 0 ? 0xC014000F : 0;
  *(_OWORD *)(a2 + 16) = v7;
  *(_QWORD *)(a2 + 32) = 0LL;
  return result;
}
