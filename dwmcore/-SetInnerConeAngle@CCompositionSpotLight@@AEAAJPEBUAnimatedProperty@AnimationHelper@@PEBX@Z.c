__int64 __fastcall CCompositionSpotLight::SetInnerConeAngle(
        CCompositionSpotLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  if ( *((float *)this + 95) != *(float *)a3 )
  {
    *((_DWORD *)this + 95) = *a3;
    CResource::InvalidateAnimationSources(this, 8);
    CResource::InvalidateAnimationSources(this, 9);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
