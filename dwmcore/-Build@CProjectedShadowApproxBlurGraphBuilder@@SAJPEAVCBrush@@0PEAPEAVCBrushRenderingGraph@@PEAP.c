/*
 * XREFs of ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802673E8
 * Callers:
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z @ 0x180245DD0 (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z.c)
 * Callees:
 *     ??0CBrushRenderingGraph@@IEAA@XZ @ 0x180029AA0 (--0CBrushRenderingGraph@@IEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EB9F4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x180267230 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurGraphBuilder::Build(
        struct CBrush *a1,
        struct CBrush *a2,
        struct CBrushRenderingGraph **a3,
        struct Windows::UI::Composition::IEffectInstance **a4)
{
  CBrushRenderingGraph *v8; // rax
  __int64 v9; // rcx
  CBrushRenderingGraph *v10; // rax
  struct CBrushRenderingGraph *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  CBrushRenderingGraph *v16; // [rsp+30h] [rbp-28h] BYREF
  struct CBrushRenderingGraph *v17; // [rsp+38h] [rbp-20h] BYREF
  int v18; // [rsp+40h] [rbp-18h]

  v8 = (CBrushRenderingGraph *)DefaultHeap::Alloc(0xD8uLL);
  if ( !v8 )
  {
    v16 = 0LL;
    goto LABEL_7;
  }
  v10 = CBrushRenderingGraph::CBrushRenderingGraph(v8);
  v16 = v10;
  v11 = v10;
  if ( !v10 )
  {
LABEL_7:
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x17u, 0LL);
    goto LABEL_8;
  }
  (**(void (__fastcall ***)(CBrushRenderingGraph *))v10)(v10);
  v18 = 0;
  v17 = v11;
  v12 = CProjectedShadowApproxBlurGraphBuilder::Build((CProjectedShadowApproxBlurGraphBuilder *)&v17, a1, a2, a4);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Bu, 0LL);
  }
  else
  {
    v16 = 0LL;
    *a3 = v11;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v16);
  return v14;
}
