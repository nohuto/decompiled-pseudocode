/*
 * XREFs of ?GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18024F0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180022658 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x1800227E8 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSurfaceBrush::GetProperty(CSurfaceBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v4; // ebx
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  struct CExpressionValue *v8; // r11
  __int64 v10; // [rsp+28h] [rbp-20h]
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 4LL;
  v11[1] = &CSurfaceBrush::k_rgAnimDef;
  v4 = 0;
  AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                               v11,
                                                                               a2,
                                                                               0);
  if ( AnimatablePropertyInfo )
  {
    CResource::GetPropertyImpl(this, AnimatablePropertyInfo, v8);
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, v7, -2147024809, 0x65u, (void *)(v7 & v10));
  }
  return v4;
}
