__int64 __fastcall CComponentTransform3D::SetOrientation(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const struct D2DQuaternion *a3)
{
  unsigned int v4; // edi
  int v6; // eax
  unsigned int v7; // ecx
  float v8[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  D3DXQuaternionNormalize((struct D2DQuaternion *)v8, a3);
  if ( *((float *)this + 54) != v8[0]
    || *((float *)this + 55) != v8[1]
    || *((float *)this + 56) != v8[2]
    || *((float *)this + 57) != v8[3] )
  {
    *(_OWORD *)((char *)this + 216) = *(_OWORD *)v8;
    CResource::InvalidateAnimationSources(this, 3u);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v6 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(
           this,
           3u,
           (CComponentTransform3D *)((char *)this + 216));
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x19Bu, 0LL);
  }
  return v4;
}
