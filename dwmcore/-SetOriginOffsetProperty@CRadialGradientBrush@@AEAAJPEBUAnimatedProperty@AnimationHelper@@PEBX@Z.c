__int64 __fastcall CRadialGradientBrush::SetOriginOffsetProperty(
        CRadialGradientBrush *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  bool IsCenteredGradient; // si
  const struct AnimationHelper::AnimatedProperty *v6; // rdx
  CResource *v7; // rcx
  const void *v8; // r8
  CRadialGradientBrush *v9; // rcx
  unsigned int v10; // edx

  IsCenteredGradient = CRadialGradientBrush::IsCenteredGradient(this);
  if ( CResource::ModifyProperty(v7, v6, v8) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    if ( IsCenteredGradient == CRadialGradientBrush::IsCenteredGradient(this) )
    {
      v10 = 6;
    }
    else
    {
      wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::reset((char *)this + 232);
      v10 = 14;
      v9 = this;
    }
    CResource::NotifyOnChanged((__int64)v9, v10, 0LL);
  }
  return 0LL;
}
