/*
 * XREFs of ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0007DA0
 * Callers:
 *     ?IsPropertyAnimatable@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C00B6F80 (-IsPropertyAnimatable@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CHueRotationEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C020E920 (-IsPropertyAnimatable@CHueRotationEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C020F180 (-IsPropertyAnimatable@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITI.c)
 *     ?IsPropertyAnimatable@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C020F500 (-IsPropertyAnimatable@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CShadowEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C020F9E0 (-IsPropertyAnimatable@CShadowEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION.c)
 *     ?IsPropertyAnimatable@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C02104C0 (-IsPropertyAnimatable@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EX.c)
 *     ?IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0210B70 (-IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXP.c)
 *     ?IsPropertyAnimatable@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0212640 (-IsPropertyAnimatable@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION.c)
 *     ?IsPropertyAnimatable@CMatrixTransformMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0212920 (-IsPropertyAnimatable@CMatrixTransformMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESS.c)
 *     ?IsPropertyAnimatable@CMatrixTransform3DMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0212B00 (-IsPropertyAnimatable@CMatrixTransform3DMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C02140A0 (-IsPropertyAnimatable@CVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ?IsPropertyAnimatable@CColorGradientStopMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0214DD0 (-IsPropertyAnimatable@CColorGradientStopMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CRectangleClipMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0215B90 (-IsPropertyAnimatable@CRectangleClipMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSIO.c)
 *     ?IsPropertyAnimatable@CPrimitiveColorMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0223810 (-IsPropertyAnimatable@CPrimitiveColorMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSI.c)
 *     ?IsPropertyAnimatable@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0226DC0 (-IsPropertyAnimatable@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITIO.c)
 * Callees:
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z @ 0x1C0007E20 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::IsPropertyAnimatable(
        DirectComposition::CResourceMarshaler *a1,
        unsigned int a2)
{
  const struct DirectComposition::ResPropInfo *TargetProperty; // rax
  int v3; // r9d

  TargetProperty = DirectComposition::CResourceMarshaler::GetTargetProperty(a1, a2);
  if ( TargetProperty )
    LOBYTE(TargetProperty) = *((_DWORD *)TargetProperty + 2) == v3;
  return (char)TargetProperty;
}
