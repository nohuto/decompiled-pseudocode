/*
 * XREFs of ?SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C6EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BAAB8 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x1800C7150 (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x1800C7250 (-NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z.c)
 */

__int64 __fastcall CCompositionLight::SetDirectionProperty(
        CCompositionLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        struct Windows::Foundation::Numerics::float3 *a3)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  CCompositionLight::NormalizeVec3(this, a3, (struct Windows::Foundation::Numerics::float3 *)v6);
  if ( CResource::ModifyProperty(this, a2, v6) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
