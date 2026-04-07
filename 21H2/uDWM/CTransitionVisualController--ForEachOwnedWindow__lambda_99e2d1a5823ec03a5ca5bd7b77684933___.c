/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___ @ 0x18000B698
 * Callers:
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18000B118 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___ @ 0x18000B698 (CTransitionVisualController--ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___ @ 0x18000B698 (CTransitionVisualController--ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000D174 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___(
        __int64 a1,
        _DWORD **a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 616) & 0x10000000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 384);
    if ( !v6 || (*(_BYTE *)(v6 + 240) & 0x18) == 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 568); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8 * i);
        if ( (*(_DWORD *)(v8 + 616) & 0xFFF) == 0xFFF )
        {
          if ( CTransitionVisualController::ShouldCloneWindow(*(HWND *)(v8 + 40)) )
            ++**a2;
          v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_99e2d1a5823ec03a5ca5bd7b77684933___(v8, a2, 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
