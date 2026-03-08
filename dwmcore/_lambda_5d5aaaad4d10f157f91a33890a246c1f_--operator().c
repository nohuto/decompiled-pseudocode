/*
 * XREFs of _lambda_5d5aaaad4d10f157f91a33890a246c1f_::operator() @ 0x18027F8B8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5d5aaaad4d10f157f91a33890a246c1f__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x18027FA10 (std--_Func_impl_no_alloc__lambda_5d5aaaad4d10f157f91a33890a246c1f__long_CExternalEf_ea_18027FA10.c)
 * Callees:
 *     ?PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z @ 0x180033774 (-PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z.c)
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x18003584C (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_5d5aaaad4d10f157f91a33890a246c1f_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int TargetFromSource; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int v8[4]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(unsigned int *)(a2 + 32);
  v9 = 0;
  v10 = 0;
  *(_OWORD *)v8 = *(_OWORD *)&_xmm;
  TargetFromSource = CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
                       (CExternalEffectGraph::CGraphRenderingContext *)a2,
                       v2,
                       (const struct D2D_RECT_F *)v8);
  *(_BYTE *)(104 * v2 + *(_QWORD *)(a2 + 48) + 100) = 1;
  v5 = CExternalEffectGraph::CGraphRenderingContext::PushTarget(
         (CExternalEffectGraph::CGraphRenderingContext *)a2,
         TargetFromSource);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14F,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
