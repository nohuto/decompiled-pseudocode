/*
 * XREFs of _lambda_16c4919e5c7bc2115c075ef4a54f2434_::operator() @ 0x180030CAC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_16c4919e5c7bc2115c075ef4a54f2434__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800FA450 (std--_Func_impl_no_alloc__lambda_16c4919e5c7bc2115c075ef4a54f2434__long_CExternalEffectGraph--CG.c)
 * Callees:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18002FAD0 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z @ 0x180033774 (-PushTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAJI@Z.c)
 *     ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x18003584C (-MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18008D00C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_16c4919e5c7bc2115c075ef4a54f2434_::operator()(__int64 a1, __int64 a2)
{
  float *v2; // rax
  float v5; // xmm4_4
  float v6; // xmm2_4
  __int64 v7; // rbx
  unsigned int TargetFromSource; // eax
  int v9; // ebx
  int v10; // eax
  CDrawingContext *v11; // rcx
  __int64 v13; // rdx
  int v14[6]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(float **)a1;
  v5 = **(float **)a1;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v2[1] - 1.0) & _xmm) < 0.0000011920929 )
  {
    return 0LL;
  }
  v6 = v2[1];
  v7 = *(unsigned int *)(a2 + 32);
  v14[1] = 0;
  v14[2] = 0;
  *(float *)&v14[3] = v6;
  *(float *)v14 = v5;
  *(float *)&v14[4] = 0.0 - (float)(v5 * 0.0);
  *(float *)&v14[5] = 0.0 - (float)(v6 * 0.0);
  TargetFromSource = CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
                       (CExternalEffectGraph::CGraphRenderingContext *)a2,
                       v7,
                       (const struct D2D1::Matrix3x2F *)v14);
  *(_BYTE *)(104 * v7 + *(_QWORD *)(a2 + 48) + 100) = *(_BYTE *)(a1 + 8);
  v9 = CExternalEffectGraph::CGraphRenderingContext::PushTarget(
         (CExternalEffectGraph::CGraphRenderingContext *)a2,
         TargetFromSource);
  if ( v9 < 0 )
  {
    v13 = 277LL;
  }
  else
  {
    v9 = CExternalEffectGraph::CGraphRenderingContext::ExecuteShaders(
           (CExternalEffectGraph::CGraphRenderingContext *)a2,
           *(_DWORD *)(a1 + 12),
           1u);
    if ( v9 >= 0 )
    {
      v10 = *(_DWORD *)(a2 + 36);
      *(_DWORD *)(a2 + 36) = -1;
      v11 = *(CDrawingContext **)a2;
      *(_DWORD *)(a2 + 32) = v10;
      CDrawingContext::PopLayer(v11);
      return 0LL;
    }
    v13 = 278LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
    (const char *)(unsigned int)v9,
    v14[0]);
  return (unsigned int)v9;
}
