/*
 * XREFs of ?reset@?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18024E50C
 * Callers:
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x18024D9F0 (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 *     ?SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18024E3F0 (-SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18026E0EC (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ @ 0x1800FE26C (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(result);
  return result;
}
