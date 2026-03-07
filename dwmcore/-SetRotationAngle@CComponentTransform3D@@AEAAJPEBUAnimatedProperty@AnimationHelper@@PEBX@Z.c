__int64 __fastcall CComponentTransform3D::SetRotationAngle(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  if ( *((float *)this + 58) != *(float *)a3 )
  {
    *((_DWORD *)this + 58) = *a3;
    CResource::InvalidateAnimationSources(this, 4);
    CResource::InvalidateAnimationSources(this, 5);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
    v6 = CPropertyChangeResource::NotifyScalarPropertyChanged(this, 4u, *((float *)this + 58));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x166u, 0LL);
  }
  return v3;
}
