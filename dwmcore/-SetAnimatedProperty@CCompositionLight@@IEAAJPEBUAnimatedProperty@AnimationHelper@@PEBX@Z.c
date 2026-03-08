/*
 * XREFs of ?SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C7110
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BAAB8 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x1800C7150 (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 */

__int64 __fastcall CCompositionLight::SetAnimatedProperty(
        CCompositionLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
