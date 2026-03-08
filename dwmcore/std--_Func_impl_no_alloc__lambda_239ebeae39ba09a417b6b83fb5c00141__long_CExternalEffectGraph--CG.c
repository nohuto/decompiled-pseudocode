/*
 * XREFs of std::_Func_impl_no_alloc__lambda_239ebeae39ba09a417b6b83fb5c00141__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800FA410
 * Callers:
 *     <none>
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18008D00C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180092EE8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_239ebeae39ba09a417b6b83fb5c00141__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  CDrawingContext *v4; // rcx

  v2 = *a2;
  EffectInput::operator=(*(_QWORD *)(*a2 + 24), *(_QWORD *)(*a2 + 48) + 104LL * *(unsigned int *)(*a2 + 36));
  v3 = *(_DWORD *)(v2 + 36);
  v4 = *(CDrawingContext **)v2;
  *(_DWORD *)(v2 + 36) = -1;
  *(_DWORD *)(v2 + 32) = v3;
  CDrawingContext::PopLayer(v4);
  return 0LL;
}
