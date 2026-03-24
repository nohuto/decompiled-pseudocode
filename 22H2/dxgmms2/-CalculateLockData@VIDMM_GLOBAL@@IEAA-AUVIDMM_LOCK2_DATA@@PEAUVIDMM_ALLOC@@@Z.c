/*
 * XREFs of ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0088C94
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006C260 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::CalculateLockData(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v3; // rdi
  int v4; // r8d
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // r11
  int v8; // r10d
  __int64 v9; // rax

  v3 = *a3;
  v4 = 0;
  *(_QWORD *)a2 = 0LL;
  v5 = *v3;
  if ( *((_DWORD *)v3 + 19) )
    return a2;
  v6 = *(_DWORD *)(v5 + 80);
  v7 = *(_QWORD *)(v5 + 128);
  *(_DWORD *)a2 = 1;
  if ( (v6 & 0x80u) == 0 )
  {
    *(_DWORD *)a2 = 5;
    return a2;
  }
  if ( !v7 )
    return a2;
  if ( (*(_DWORD *)(a1 + 7048) & 0x20) != 0 )
    goto LABEL_18;
  v8 = *(_DWORD *)(v7 + 80);
  if ( (v8 & 0x1001) != 0 )
    return a2;
  if ( (**(_DWORD **)(v5 + 496) & 4) != 0 && !*(_BYTE *)(v7 + 474) || (v6 & 0x10000) != 0 )
  {
LABEL_18:
    *(_DWORD *)a2 = 4;
LABEL_19:
    *(_BYTE *)(a2 + 4) = 1;
    return a2;
  }
  if ( (v8 & 4) == 0 )
  {
    if ( (v8 & 0x2000) != 0 )
    {
      v9 = *(_QWORD *)(v5 + 96);
      if ( !v9 || (*(_BYTE *)(v9 + 32) & 1) == 0 )
      {
        *(_BYTE *)(a2 + 4) = 1;
        v4 = 2;
      }
      *(_DWORD *)a2 = v4;
      return a2;
    }
    goto LABEL_18;
  }
  if ( (v3[4] & 1) == 0 )
  {
    *(_DWORD *)a2 = 3;
    if ( *(_QWORD *)(v5 + 256) )
      goto LABEL_19;
  }
  return a2;
}
