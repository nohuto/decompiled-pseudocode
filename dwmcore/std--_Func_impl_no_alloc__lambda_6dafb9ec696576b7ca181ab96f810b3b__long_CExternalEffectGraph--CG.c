/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6dafb9ec696576b7ca181ab96f810b3b__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800F7B60
 * Callers:
 *     <none>
 * Callees:
 *     ?MakeHalfSizeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIW4SeparableKernelPass@@@Z @ 0x180033628 (-MakeHalfSizeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIW4SeparableKern.c)
 *     ?PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z @ 0x180033774 (-PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_6dafb9ec696576b7ca181ab96f810b3b__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  CExternalEffectGraph::CGraphRenderingContext *v2; // rdi
  __int64 v3; // rbx
  unsigned int HalfSizeTargetFromSource; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CExternalEffectGraph::CGraphRenderingContext *)*a2;
  v3 = *(unsigned int *)(*a2 + 32);
  HalfSizeTargetFromSource = CExternalEffectGraph::CGraphRenderingContext::MakeHalfSizeTargetFromSource(
                               *a2,
                               v3,
                               *(_BYTE *)(a1 + 8));
  *(_BYTE *)(104 * v3 + *((_QWORD *)v2 + 6) + 100) = 1;
  v5 = CExternalEffectGraph::CGraphRenderingContext::PushTarget(v2, HalfSizeTargetFromSource);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13F,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v5,
      v8);
  else
    return 0;
  return v6;
}
