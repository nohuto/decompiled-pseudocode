/*
 * XREFs of ?SetInnerConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C7050
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x1800C7150 (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 */

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
