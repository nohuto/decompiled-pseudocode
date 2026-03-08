/*
 * XREFs of ?GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180003F90
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180022658 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x1800227E8 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18012DE60 (-GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CRectangleGeometry::GetProperty(CRectangleGeometry *this, __int64 a2, struct CExpressionValue *a3)
{
  unsigned int v4; // ebx
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  unsigned int v6; // edx
  struct CExpressionValue *v7; // r11
  int Property; // eax
  unsigned int v10; // ecx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 15LL;
  v11[1] = &CRectangleGeometry::k_rgAnimDef;
  v4 = 0;
  AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                               v11,
                                                                               a2,
                                                                               0LL);
  if ( AnimatablePropertyInfo )
  {
    CResource::GetPropertyImpl(this, AnimatablePropertyInfo, v7);
  }
  else
  {
    Property = CGeometry::GetProperty(this, v6, v7);
    v4 = Property;
    if ( Property < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Property, 0xBBu, 0LL);
  }
  return v4;
}
