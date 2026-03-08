/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x180267230
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802673E8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 * Callees:
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x1800298D4 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180029D08 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x180029E64 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180029F64 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18002A1E8 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x18002D764 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802670E0 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::Build(
        CProjectedShadowApproxBlurGraphBuilder *this,
        struct CBrush *a2,
        struct CBrush *a3,
        struct Windows::UI::Composition::IEffectInstance **a4)
{
  struct Windows::UI::Composition::IEffectInstance *v4; // r14
  __int64 v7; // rcx
  int v8; // ebx
  CRenderingTechniqueFragment *v9; // rsi
  int ShaderBodies; // eax
  struct Windows::UI::Composition::IEffectInstance *v11; // rbx
  int v12; // r9d
  CRenderingTechniqueFragment *v13; // rdi
  unsigned int v15; // [rsp+20h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  CRenderingTechniqueFragment *v17; // [rsp+38h] [rbp-28h] BYREF
  struct Windows::UI::Composition::IEffectInstance *v18; // [rsp+40h] [rbp-20h] BYREF
  CRenderingTechniqueFragment **v19; // [rsp+48h] [rbp-18h]
  struct CRenderingTechniqueFragment *v20; // [rsp+50h] [rbp-10h] BYREF
  char v21; // [rsp+58h] [rbp-8h]

  v4 = 0LL;
  v21 = 1;
  v17 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  v19 = &v17;
  v8 = CProjectedShadowApproxBlurGraphBuilder::AddApproxBlurBrush(this, a2, a3, &v20);
  if ( v21 )
  {
    v9 = *v19;
    *v19 = v20;
    if ( v9 )
    {
      CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v9);
      operator delete(v9);
    }
  }
  if ( v8 < 0 )
  {
    v12 = v8;
    v15 = 54;
  }
  else
  {
    ShaderBodies = CBrushRenderingGraphBuilder::CheckFragmentSize((struct CBrushRenderingGraph **)this, v17);
    v8 = ShaderBodies;
    if ( ShaderBodies < 0 )
    {
      v15 = 57;
    }
    else
    {
      v11 = *(struct Windows::UI::Composition::IEffectInstance **)v17;
      if ( *(_QWORD *)v17 )
      {
        (**(void (__fastcall ***)(_QWORD))v11)(*(_QWORD *)v17);
        v16 = 0LL;
        v4 = v11;
        v18 = v11;
        Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v16);
      }
      ShaderBodies = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64)&v17, &v16);
      v8 = ShaderBodies;
      if ( ShaderBodies < 0 )
      {
        v15 = 62;
      }
      else
      {
        ShaderBodies = CBrushRenderingGraphBuilder::EnsureShaderCache(this, 0);
        v8 = ShaderBodies;
        if ( ShaderBodies < 0 )
        {
          v15 = 64;
        }
        else
        {
          ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
          v8 = ShaderBodies;
          if ( ShaderBodies >= 0 )
          {
            CBrushRenderingGraphBuilder::CheckBackdropInputs(this);
            v18 = 0LL;
            *a4 = v4;
            goto LABEL_19;
          }
          v15 = 65;
        }
      }
    }
    v12 = ShaderBodies;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v12, v15, 0LL);
LABEL_19:
  v13 = v17;
  if ( v17 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v17);
    operator delete(v13);
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v18);
  return (unsigned int)v8;
}
