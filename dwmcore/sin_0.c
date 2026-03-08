/*
 * XREFs of sin_0 @ 0x180117788
 * Callers:
 *     ?EvaluateCurve@XamlBackInterpolation@@MEAANN@Z @ 0x180107050 (-EvaluateCurve@XamlBackInterpolation@@MEAANN@Z.c)
 *     Lanczos::Sinc @ 0x1801FC228 (Lanczos--Sinc.c)
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x180264840 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlSineInterpolation@@MEAANN@Z @ 0x180264900 (-EvaluateCurve@XamlSineInterpolation@@MEAANN@Z.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180264948 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x18027DB64 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sin_0(double X)
{
  return sin(X);
}
