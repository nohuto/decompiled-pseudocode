/*
 * XREFs of ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x1800D18B4
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x1800D1AE4 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180029D08 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18002A1E8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18003FBDC (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18003FEC8 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1800D1A4C (-GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x1800D1AA0 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x1800D1F88 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x1800D20A8 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x1800D2104 (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ @ 0x1800FD62C (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801BEB28 (--1-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::BuildPrescale(CBlurRenderingGraphBuilder *this)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  CRenderingTechniqueFragment *v5; // rax
  CPassthroughEffect *v6; // rcx
  __int64 v7; // rdi
  struct CShaderCache *ShaderCache; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rax
  CRenderingTechniqueFragment *v16; // rdi
  int v18; // [rsp+28h] [rbp-29h]
  int v19; // [rsp+28h] [rbp-29h]
  int v20; // [rsp+38h] [rbp-19h] BYREF
  CRenderingTechniqueFragment *v21; // [rsp+40h] [rbp-11h] BYREF
  __int128 v22; // [rsp+48h] [rbp-9h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+58h] [rbp+7h] BYREF
  __int128 v24; // [rsp+60h] [rbp+Fh]
  __int64 (__fastcall ***v25)(); // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  *(_QWORD *)&v22 = 0LL;
  v2 = DefaultHeap::Alloc(0x18uLL);
  v4 = (__int64)v2;
  if ( !v2 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024882, 0x11u, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)0x8007000ELL,
      v19);
    goto LABEL_12;
  }
  v2[3] = 0;
  v2[2] = 0;
  *(_QWORD *)v2 = &CPassthroughEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>'};
  *((_QWORD *)v2 + 2) = &CPassthroughEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v2 + 2));
  *(_QWORD *)&v22 = v4;
  v5 = (CRenderingTechniqueFragment *)operator new(0x80uLL);
  v7 = (__int64)v5;
  if ( v5 )
  {
    ShaderCache = CPassthroughEffect::GetShaderCache(v6);
    v5 = (CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                          v7,
                                          v4,
                                          (__int64)ShaderCache,
                                          0,
                                          0,
                                          0);
  }
  v21 = v5;
  CRenderingTechniqueFragment::AddIntermediateInput(v5, 0xFFFFFFFF);
  v9 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v21, &v20);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v9,
      v18);
    std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v21);
LABEL_12:
    wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::~com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>(&v22);
    return v10;
  }
  v11 = *(_QWORD *)this;
  *(_QWORD *)&v22 = *(_QWORD *)this + 1588LL;
  v12 = *(_QWORD *)(v11 + 520);
  v13 = dword_180338FD8[5 * *(int *)(v11 + 1584)] == 3;
  v11 += 512LL;
  v14 = (v12 - *(_QWORD *)v11) >> 6;
  BYTE8(v22) = v13 + 1;
  HIDWORD(v22) = v20;
  v23 = off_1802CB248;
  v25 = &v23;
  v24 = v22;
  v15 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
          v11,
          v14);
  *(_QWORD *)(v15 + 56) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v15, &v23);
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(&v23);
  v16 = v21;
  if ( v21 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v21);
    operator delete(v16, 0x80uLL);
  }
  if ( v4 )
    CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(v4);
  return 0LL;
}
