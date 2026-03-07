__int64 __fastcall CCompositionSpotLight::SetOuterConeAngle(
        CCompositionSpotLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  if ( *((float *)this + 96) != *(float *)a3 )
  {
    *((_DWORD *)this + 96) = *a3;
    CResource::InvalidateAnimationSources(this, 13);
    CResource::InvalidateAnimationSources(this, 14);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
