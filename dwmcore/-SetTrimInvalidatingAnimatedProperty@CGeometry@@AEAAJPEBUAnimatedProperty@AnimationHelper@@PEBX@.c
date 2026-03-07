__int64 __fastcall CGeometry::SetTrimInvalidatingAnimatedProperty(
        CGeometry *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    *(_WORD *)((char *)this + 137) = 257;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  return 0LL;
}
