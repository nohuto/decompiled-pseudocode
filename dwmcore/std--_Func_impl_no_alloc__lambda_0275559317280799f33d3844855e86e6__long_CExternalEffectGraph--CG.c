/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0275559317280799f33d3844855e86e6__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800F7BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18002FAD0 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_0275559317280799f33d3844855e86e6__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
        __int64 a1,
        CExternalEffectGraph::CGraphRenderingContext **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CExternalEffectGraph::CGraphRenderingContext::ExecuteShaders(*a2, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12));
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v2,
      v5);
  else
    return 0;
  return v3;
}
