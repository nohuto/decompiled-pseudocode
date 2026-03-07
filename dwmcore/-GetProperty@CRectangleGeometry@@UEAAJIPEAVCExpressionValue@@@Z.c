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
