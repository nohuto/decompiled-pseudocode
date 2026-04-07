/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___ @ 0x18000C05C
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BDB4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___ @ 0x18000C05C (CTransitionVisualController--ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___.c)
 * Callees:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BDB4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___ @ 0x18000C05C (CTransitionVisualController--ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___(
        __int64 a1,
        CTransitionVisualController **a2,
        char a3)
{
  int v3; // r9d
  __int64 v7; // rax
  __int64 i; // rdi
  __int64 v9; // rsi

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 616) & 0x10000000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 384);
    if ( !v7 || (*(_BYTE *)(v7 + 240) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 568); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8 * i);
        if ( (*(_DWORD *)(v9 + 616) & 0xFFF) == 0xFFF )
        {
          CTransitionVisualController::RestoreWindow(*a2, *(struct CWindowData **)(*(_QWORD *)(a1 + 544) + 8 * i), 0);
          v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___(v9, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
