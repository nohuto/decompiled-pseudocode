/*
 * XREFs of Match_32 @ 0x1C00578E8
 * Callers:
 *     Match @ 0x1C0057800 (Match.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 *     IsCompatableDSDTRevision @ 0x1C004BE28 (IsCompatableDSDTRevision.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     EvalPackageElement @ 0x1C004F6E4 (EvalPackageElement.c)
 *     MatchData_32 @ 0x1C0057840 (MatchData_32.c)
 */

__int64 __fastcall Match_32(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int *v5; // rbp
  unsigned int v6; // esi
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int128 v10; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-28h]

  v3 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "PIIIII");
  if ( !v3 )
  {
    v4 = *(_QWORD *)(a2 + 80);
    v5 = *(unsigned int **)(v4 + 32);
    v10 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    v6 = *(_DWORD *)(v4 + 216);
    do
    {
      FreeDataBuffs((__int64)&v10, 1u);
      v3 = EvalPackageElement(v5, v6, (__int64)&v10);
      if ( !v3
        && WORD1(v10) == 1
        && MatchData_32(v11, *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL), *(_DWORD *)(*(_QWORD *)(a2 + 80) + 96LL))
        && MatchData_32(v7, *(_DWORD *)(v8 + 136), *(_DWORD *)(v8 + 176)) )
      {
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = v6;
        goto LABEL_10;
      }
      ++v6;
    }
    while ( !v3 );
    if ( v3 == -1072431100 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
      IsCompatableDSDTRevision();
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = -1;
      v3 = 0;
    }
LABEL_10:
    FreeDataBuffs((__int64)&v10, 1u);
  }
  return v3;
}
