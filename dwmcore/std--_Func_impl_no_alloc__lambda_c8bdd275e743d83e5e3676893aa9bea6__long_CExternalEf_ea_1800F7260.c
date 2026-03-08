/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800F7260
 * Callers:
 *     <none>
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18008D00C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rcx
  int v3; // eax

  v2 = *a2;
  v3 = *(_DWORD *)(*a2 + 36);
  *(_DWORD *)(v2 + 36) = -1;
  *(_DWORD *)(v2 + 32) = v3;
  CDrawingContext::PopLayer(*(CDrawingContext **)v2);
  return 0LL;
}
