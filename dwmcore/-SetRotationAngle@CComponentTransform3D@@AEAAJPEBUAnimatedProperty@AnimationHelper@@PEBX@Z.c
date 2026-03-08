/*
 * XREFs of ?SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800F5730
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z @ 0x180097D40 (-NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJIM@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

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
