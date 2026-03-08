/*
 * XREFs of MiAddRuns @ 0x140A2B004
 * Callers:
 *     MmQueryMemoryRanges @ 0x140859AF0 (MmQueryMemoryRanges.c)
 * Callees:
 *     MiPageToNode @ 0x1406153B0 (MiPageToNode.c)
 *     MiAddRun @ 0x140A2AED0 (MiAddRun.c)
 */

__int64 __fastcall MiAddRuns(__int64 a1, __int64 *a2, int a3, unsigned __int64 a4, __int16 a5)
{
  int v5; // ebx
  unsigned __int64 v6; // r15
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  int v13; // ecx
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // ecx
  __int64 result; // rax

  v5 = a3;
  v6 = 0LL;
  v10 = (unsigned __int64 *)(qword_140C67A70 + 8LL * (a3 & 0x3FFFFF));
  while ( v6 < a4 )
  {
    v11 = *v10;
    if ( a5 != 1025 && ((v11 >> 4) & 0x7FF) != a5 )
      goto LABEL_22;
    v12 = *v10 & 7;
    if ( (v11 & 7) == 0
      || *(int *)(a1 + 32) >= 0
      && (unsigned int)MiPageToNode((unsigned __int64)(v5 & 0x3FFFFF) << 18) != *(_DWORD *)(a1 + 32) )
    {
      goto LABEL_22;
    }
    v13 = 0;
    if ( v12 <= 5 )
    {
      v14 = v12 - 1;
      if ( !v14 )
      {
        v13 = (*(_BYTE *)(a1 + 4) & 2) != 0;
        goto LABEL_18;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        v18 = *(_DWORD *)(a1 + 4) >> 2;
        goto LABEL_16;
      }
      v16 = v15 - 1;
      if ( !v16 )
        goto LABEL_13;
      v17 = v16 - 1;
      if ( !v17 )
      {
        v18 = *(_DWORD *)(a1 + 4) >> 4;
        goto LABEL_16;
      }
      if ( v17 == 1 )
      {
LABEL_13:
        v18 = *(_DWORD *)(a1 + 4) >> 3;
LABEL_16:
        v13 = v18 & 1;
      }
    }
LABEL_18:
    if ( (v11 & 8) != 0 && (*(_DWORD *)(a1 + 4) & 0x20) != 0 || v13 )
    {
      result = MiAddRun(a1, a2, v5);
      if ( (int)result < 0 )
        return result;
    }
LABEL_22:
    ++v6;
    ++v10;
    v5 ^= (v5 ^ (v5 + 1)) & 0x3FFFFF;
  }
  return 0LL;
}
