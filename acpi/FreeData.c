/*
 * XREFs of FreeData @ 0x1C004B498
 * Callers:
 *     FreeData @ 0x1C004B498 (FreeData.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 * Callees:
 *     FreeData @ 0x1C004B498 (FreeData.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C004B544 (FreeObjData.c)
 */

__int64 __fastcall FreeData(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v2 & 8) != 0 )
      FreeData();
  }
  else if ( *(_QWORD *)(a1 + 32) && *(int *)(a1 + 8) <= 0 )
  {
    if ( *(_WORD *)(a1 + 2) == 4 )
      FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(unsigned int **)(a1 + 32));
    FreeObjData(a1);
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
