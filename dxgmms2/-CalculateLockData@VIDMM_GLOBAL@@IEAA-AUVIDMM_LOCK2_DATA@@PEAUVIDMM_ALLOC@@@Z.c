/*
 * XREFs of ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C00E0D1C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::CalculateLockData(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // rax
  int v5; // r9d
  __int64 v6; // r10
  int v7; // ebx
  __int64 v8; // r11
  int v9; // r8d
  __int64 v10; // rax

  v3 = (__int64 *)*a3;
  v5 = 0;
  *(_QWORD *)a2 = 0LL;
  v6 = *v3;
  if ( *((_DWORD *)v3 + 19) )
    return a2;
  v7 = *(_DWORD *)(v6 + 72);
  v8 = *(_QWORD *)(v6 + 120);
  *(_DWORD *)a2 = 1;
  if ( (v7 & 0x80u) == 0 )
  {
    *(_DWORD *)a2 = 5;
    return a2;
  }
  if ( !v8 )
    return a2;
  if ( (*(_DWORD *)(a1 + 7056) & 0x20) != 0 )
    goto LABEL_18;
  v9 = *(_DWORD *)(v8 + 80);
  if ( (v9 & 0x1001) != 0 )
    return a2;
  if ( (**(_DWORD **)(v6 + 536) & 4) != 0 && !*(_BYTE *)(v8 + 474) || (v7 & 0x10000) != 0 )
  {
LABEL_18:
    *(_DWORD *)a2 = 4;
LABEL_19:
    *(_BYTE *)(a2 + 4) = 1;
    return a2;
  }
  if ( (v9 & 4) == 0 )
  {
    if ( (v9 & 0x2000) != 0 )
    {
      v10 = *(_QWORD *)(v6 + 88);
      if ( !v10 || (*(_BYTE *)(v10 + 32) & 1) == 0 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        v5 = 2;
      }
      *(_DWORD *)a2 = v5;
      return a2;
    }
    goto LABEL_18;
  }
  if ( (*(_BYTE *)(*a3 + 32) & 1) == 0 )
  {
    *(_DWORD *)a2 = 3;
    if ( *(_QWORD *)(v6 + 240) )
      goto LABEL_19;
  }
  return a2;
}
