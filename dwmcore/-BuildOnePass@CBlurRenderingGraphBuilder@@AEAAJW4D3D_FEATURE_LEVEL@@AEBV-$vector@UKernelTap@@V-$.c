/*
 * XREFs of ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x1800D1CC8
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x1800D1AE4 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180029D08 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18002A1E8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18003FBDC (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x1800D1AA0 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x1800D1F88 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x1800D20A8 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x1800D2104 (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 *     ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1800D2148 (-GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ?Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@PEAPEAV1@@Z @ 0x1800D2250 (-Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV-$span@$$CBUKe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ @ 0x1800FD62C (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ??1?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801BEB28 (--1-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::BuildOnePass(_QWORD *a1, int a2, _QWORD *a3, char a4)
{
  __int64 v4; // r13
  char v5; // di
  unsigned __int64 v6; // rsi
  unsigned int v7; // r14d
  unsigned int v8; // eax
  int v9; // r15d
  float v10; // xmm0_4
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 (__fastcall **v13)(); // rax
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r12d
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rdx
  gsl::details *v22; // rcx
  int v23; // eax
  unsigned int v24; // ebx
  CCustomKernelEffect *v25; // rax
  CCustomKernelEffect *v26; // rbx
  __int64 v27; // rdi
  struct CShaderCache *ShaderCache; // rax
  int v29; // eax
  unsigned int v30; // r15d
  CCustomKernelEffect *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rax
  CCustomKernelEffect *v35; // rdi
  int v36; // [rsp+28h] [rbp-69h]
  char v37; // [rsp+38h] [rbp-59h]
  CCustomKernelEffect *v38; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-49h]
  int v40; // [rsp+4Ch] [rbp-45h]
  int v41; // [rsp+50h] [rbp-41h] BYREF
  _QWORD *v42; // [rsp+58h] [rbp-39h]
  _QWORD *v43; // [rsp+60h] [rbp-31h]
  _QWORD v44[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 (__fastcall **v45)(); // [rsp+78h] [rbp-19h] BYREF
  CCustomKernelEffect *v46; // [rsp+80h] [rbp-11h]
  __int64 (__fastcall ***v47)(); // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v4 = *a1;
  v42 = a3;
  v43 = a1;
  if ( a2 < 40960 )
    v5 = a2 >= 37632;
  else
    v5 = 2;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a3[1] - *a3) >> 2);
  v37 = v5;
  if ( (unsigned __int8)v5 < 2u )
    v7 = (0x400000009LL - (unsigned __int64)(1431655766 * (unsigned int)((__int64)(a3[1] - *a3) >> 2))) >> 32;
  else
    v7 = 128;
  v8 = v7 + v6 - 1;
  if ( v8 < (unsigned int)v6 )
  {
    v24 = -2147024362;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)0x80070216LL,
      v36);
    return v24;
  }
  else
  {
    v39 = v8 / v7;
    v9 = v8 / v7;
    if ( a4 )
      v10 = *(float *)(v4 + 1580);
    else
      v10 = *(float *)(v4 + 1576);
    v11 = (_QWORD *)(v4 + 512);
    v12 = (__int64)(*(_QWORD *)(v4 + 520) - *(_QWORD *)(v4 + 512)) >> 6;
    if ( v10 <= *((float *)&unk_180338FD0 + 5 * *(int *)(v4 + 1584)) )
    {
      v13 = off_1802D1A00;
    }
    else
    {
      v13 = off_1802CB2D8;
      LOBYTE(v46) = a4;
    }
    v45 = v13;
    v47 = &v45;
    v14 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
            v4 + 512,
            v12);
    *(_QWORD *)(v14 + 56) = 0LL;
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v14, &v45);
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(&v45);
    v15 = *(_DWORD *)(v4 + 168);
    v16 = 0;
    v40 = v15;
    if ( v9 )
    {
      while ( 1 )
      {
        v17 = v16 * v7;
        v18 = v6 - v17;
        v19 = *v42 + 12 * v17;
        v20 = v7;
        if ( v7 >= v18 )
          v20 = v18;
        gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v44, v20);
        v44[1] = v19;
        if ( v44[0] == -1LL || !v19 && v44[0] )
        {
          gsl::details::terminate(v22);
          JUMPOUT(0x1800D1F7FLL);
        }
        v38 = 0LL;
        LOBYTE(v22) = v5;
        v23 = CCustomKernelEffect::Create(v22, v21, v44, &v38);
        v24 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x160,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
            (const char *)(unsigned int)v23,
            v36);
          wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::~com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>(&v38);
          return v24;
        }
        v25 = (CCustomKernelEffect *)operator new(0x80uLL);
        v26 = v38;
        v27 = (__int64)v25;
        if ( v25 )
        {
          ShaderCache = CCustomKernelEffect::GetShaderCache(v38);
          v25 = (CCustomKernelEffect *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                         v27,
                                         (__int64)v26,
                                         (__int64)ShaderCache,
                                         0,
                                         0,
                                         0);
        }
        v38 = v25;
        CRenderingTechniqueFragment::AddIntermediateInput(v25, -1);
        v29 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(v43, (__int64)&v38, &v41);
        v30 = v29;
        if ( v29 < 0 )
          break;
        v31 = v38;
        if ( v38 )
        {
          CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v38);
          operator delete(v31, 0x80uLL);
        }
        if ( v26 )
          CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(v26);
        if ( ++v16 >= v39 )
        {
          v15 = v40;
          v11 = (_QWORD *)(v4 + 512);
          goto LABEL_25;
        }
        v5 = v37;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16E,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
        (const char *)(unsigned int)v29,
        v36);
      v35 = v38;
      if ( v38 )
      {
        CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v38);
        operator delete(v35, 0x80uLL);
      }
      if ( v26 )
        CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(v26);
      return v30;
    }
    else
    {
LABEL_25:
      v32 = v11[1] - *v11;
      HIDWORD(v38) = *(_DWORD *)(v4 + 168) - v15;
      v45 = off_1802CB308;
      LODWORD(v38) = v15;
      v46 = v38;
      v47 = &v45;
      v33 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
              v11,
              v32 >> 6);
      *(_QWORD *)(v33 + 56) = 0LL;
      std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v33, &v45);
      std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(&v45);
      return 0LL;
    }
  }
}
