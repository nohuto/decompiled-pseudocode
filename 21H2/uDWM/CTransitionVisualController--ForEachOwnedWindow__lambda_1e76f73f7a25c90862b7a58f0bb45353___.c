/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__lambda_1e76f73f7a25c90862b7a58f0bb45353___ @ 0x1800AA044
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_1e76f73f7a25c90862b7a58f0bb45353___ @ 0x1800AA044 (CTransitionVisualController--ForEachOwnedWindow__lambda_1e76f73f7a25c90862b7a58f0bb45353___.c)
 *     ?GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800AB3DC (-GetOwnedInclusiveClipRect@CTransitionVisualController@@QEAAXPEAVCWindowData@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_1e76f73f7a25c90862b7a58f0bb45353___ @ 0x1800AA044 (CTransitionVisualController--ForEachOwnedWindow__lambda_1e76f73f7a25c90862b7a58f0bb45353___.c)
 *     _lambda_1e76f73f7a25c90862b7a58f0bb45353_::operator() @ 0x1800AA1B4 (_lambda_1e76f73f7a25c90862b7a58f0bb45353_--operator().c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__lambda_1e76f73f7a25c90862b7a58f0bb45353___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v3; // r9d
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rsi
  int v9; // eax

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
          v9 = lambda_1e76f73f7a25c90862b7a58f0bb45353_::operator()(a2, *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8 * i));
          v3 = v9;
          if ( v9 >= 0 )
            v3 = CTransitionVisualController::ForEachOwnedWindow__lambda_1e76f73f7a25c90862b7a58f0bb45353___(
                   v8,
                   a2,
                   0LL,
                   (unsigned int)v9);
        }
      }
    }
  }
  return (unsigned int)v3;
}
