/*
 * XREFs of ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x1800384E8
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x180037E34 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapRealization@@M@Z @ 0x1802263E8 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBV-$TMilR.c)
 * Callees:
 *     ??$emplace_back@UEffectInput@@@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUEffectInput@@@Z @ 0x180035A60 (--$emplace_back@UEffectInput@@@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180035AF0 (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ??1CGraphRenderingContext@CExternalEffectGraph@@QEAA@XZ @ 0x180038664 (--1CGraphRenderingContext@CExternalEffectGraph@@QEAA@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180048300 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800E2990 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_2326946f082da97231d4d6088fdec19c___::_lambda_call__lambda_2326946f082da97231d4d6088fdec19c___ @ 0x18027FCA8 (wil--details--lambda_call__lambda_2326946f082da97231d4d6088fdec19c___--_lambda_call__lambda_2326.c)
 */

__int64 __fastcall CExternalEffectGraph::Render(
        CExternalEffectGraph *this,
        struct CDrawingContext *a2,
        const struct EffectInput *a3,
        struct EffectInput *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  const struct EffectInput *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  int v19; // [rsp+20h] [rbp-E0h]
  struct CDrawingContext **v20; // [rsp+30h] [rbp-D0h] BYREF
  struct CDrawingContext *v21; // [rsp+38h] [rbp-C8h] BYREF
  char v22; // [rsp+40h] [rbp-C0h]
  _BYTE v23[104]; // [rsp+48h] [rbp-B8h] BYREF
  struct CDrawingContext *v24; // [rsp+B0h] [rbp-50h] BYREF
  int v25; // [rsp+B8h] [rbp-48h]
  CExternalEffectGraph *v26; // [rsp+C0h] [rbp-40h]
  struct EffectInput *v27; // [rsp+C8h] [rbp-38h]
  int v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D4h] [rbp-2Ch]
  _QWORD v30[3]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v31[416]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v32; // [rsp+298h] [rbp+198h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+1C8h]

  v8 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v8,
      v19);
    return v9;
  }
  else
  {
    v10 = *((_QWORD *)a3 + 1);
    v21 = a2;
    v22 = 1;
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64, struct CDrawingContext ***))(*(_QWORD *)v10 + 16LL))(v10, &v20);
      v11 = (int)v20;
    }
    else
    {
      v11 = DisplayId::Invalid;
    }
    v25 = v11;
    v24 = a2;
    v28 = -1;
    v29 = -1;
    v30[0] = v31;
    v30[1] = v31;
    v30[2] = &v32;
    v26 = this;
    v27 = a4;
    v12 = EffectInput::EffectInput((EffectInput *)v23, a3);
    detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::emplace_back<EffectInput>(
      v30,
      v12);
    v13 = *((_QWORD *)this + 64);
    v28 = 0;
    v14 = *((_QWORD *)this + 65);
    while ( 1 )
    {
      if ( v13 == v14 )
      {
        CExternalEffectGraph::CGraphRenderingContext::~CGraphRenderingContext((CExternalEffectGraph::CGraphRenderingContext *)&v24);
        CDrawingContext::PopTransformInternal(a2, 1);
        return 0LL;
      }
      v15 = *(_QWORD *)(v13 + 56);
      v20 = &v24;
      if ( !v15 )
      {
        std::_Xbad_function_call();
        __debugbreak();
        JUMPOUT(0x180145355LL);
      }
      v16 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext ***))(*(_QWORD *)v15 + 16LL))(v15, &v20);
      v17 = v16;
      if ( v16 < 0 )
        break;
      v13 += 64LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\externaleffectgraph.cpp",
      (const char *)(unsigned int)v16,
      v19);
    CExternalEffectGraph::CGraphRenderingContext::~CGraphRenderingContext((CExternalEffectGraph::CGraphRenderingContext *)&v24);
    wil::details::lambda_call__lambda_2326946f082da97231d4d6088fdec19c___::_lambda_call__lambda_2326946f082da97231d4d6088fdec19c___(&v21);
    return v17;
  }
}
