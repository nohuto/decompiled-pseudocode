/*
 * XREFs of ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0006C60
 * Callers:
 *     ?IsPropertyAnimatable@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C00C6EA0 (-IsPropertyAnimatable@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CHueRotationEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C024D290 (-IsPropertyAnimatable@CHueRotationEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C024DAD0 (-IsPropertyAnimatable@CArithmeticCompositeEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITI.c)
 *     ?IsPropertyAnimatable@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C024DE50 (-IsPropertyAnimatable@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CShadowEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C024E330 (-IsPropertyAnimatable@CShadowEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION.c)
 *     ?IsPropertyAnimatable@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C024EE10 (-IsPropertyAnimatable@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EX.c)
 *     ?IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C024F4C0 (-IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXP.c)
 *     ?IsPropertyAnimatable@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0250F90 (-IsPropertyAnimatable@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION.c)
 *     ?IsPropertyAnimatable@CMatrixTransformMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0251270 (-IsPropertyAnimatable@CMatrixTransformMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESS.c)
 *     ?IsPropertyAnimatable@CMatrixTransform3DMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0251450 (-IsPropertyAnimatable@CMatrixTransform3DMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0252A00 (-IsPropertyAnimatable@CVisualMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ?IsPropertyAnimatable@CColorGradientStopMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0253730 (-IsPropertyAnimatable@CColorGradientStopMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRE.c)
 *     ?IsPropertyAnimatable@CRectangleClipMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C02544F0 (-IsPropertyAnimatable@CRectangleClipMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSIO.c)
 *     ?IsPropertyAnimatable@CPrimitiveColorMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0262130 (-IsPropertyAnimatable@CPrimitiveColorMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSI.c)
 *     ?IsPropertyAnimatable@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1C0265740 (-IsPropertyAnimatable@CHolographicExclusiveModeMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITIO.c)
 * Callees:
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z @ 0x1C0006CE0 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z.c)
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
