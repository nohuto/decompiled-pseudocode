/*
 * XREFs of ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802670E0
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x180267230 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x18003FBDC (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x18003FE0C (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CProjectedShadowApproxBlurEffect@@QEAA@XZ @ 0x1802B6558 (--0CProjectedShadowApproxBlurEffect@@QEAA@XZ.c)
 *     ?GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1802B669C (-GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCShaderCache@@XZ.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::AddApproxBlurBrush(
        CProjectedShadowApproxBlurGraphBuilder *this,
        struct CBrush *a2,
        struct CBrush *a3,
        struct CRenderingTechniqueFragment **a4)
{
  CProjectedShadowApproxBlurEffect *v8; // rax
  CProjectedShadowApproxBlurEffect *v9; // rax
  __int64 v10; // rbx
  CProjectedShadowApproxBlurEffect *v11; // rcx
  LPVOID v12; // rdi
  struct CShaderCache *ShaderCache; // rax
  struct CRenderingTechniqueFragment *v14; // rsi
  __int64 *v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // rcx
  unsigned int v18; // edi
  _QWORD v20[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+50h] [rbp-28h]

  v8 = (CProjectedShadowApproxBlurEffect *)operator new(0x70uLL);
  if ( v8 )
  {
    v9 = CProjectedShadowApproxBlurEffect::CProjectedShadowApproxBlurEffect(v8);
    v10 = (__int64)v9;
    if ( v9 )
      (**(void (__fastcall ***)(CProjectedShadowApproxBlurEffect *))v9)(v9);
  }
  else
  {
    v10 = 0LL;
  }
  v12 = DefaultHeap::Alloc(0x80uLL);
  if ( v12
    && (ShaderCache = CProjectedShadowApproxBlurEffect::GetShaderCache(v11),
        (v14 = (struct CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                                       (__int64)v12,
                                                       v10,
                                                       (__int64)ShaderCache,
                                                       0,
                                                       0,
                                                       0)) != 0LL) )
  {
    v20[1] = a3;
    v15 = v20;
    v16 = 2LL;
    v20[0] = a2;
    do
    {
      v17 = *v15;
      v21[1] = 0LL;
      v22 = 0;
      v21[0] = v17;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v14,
        (const struct CBrushRenderingGraph::GraphInputParameters *)v21);
      ++v15;
      --v16;
    }
    while ( v16 );
    *a4 = v14;
    v18 = 0;
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, -2147024882, 0x5Du, 0LL);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  return v18;
}
