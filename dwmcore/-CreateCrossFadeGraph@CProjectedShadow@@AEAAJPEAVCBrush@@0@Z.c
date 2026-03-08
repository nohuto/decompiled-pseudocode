/*
 * XREFs of ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z @ 0x180245DD0
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180246204 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E707C (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802673E8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 */

__int64 __fastcall CProjectedShadow::CreateCrossFadeGraph(CProjectedShadow *this, struct CBrush *a2, struct CBrush *a3)
{
  struct Windows::UI::Composition::IEffectInstance **v3; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct Windows::UI::Composition::IEffectInstance **)((char *)this + 384);
  wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this + 48);
  wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this + 47);
  v7 = CProjectedShadowApproxBlurGraphBuilder::Build(a2, a3, (struct CBrushRenderingGraph **)this + 47, v3);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34F,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\projectedshadow.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
