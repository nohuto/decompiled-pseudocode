__int64 __fastcall CViewBox::SetAnimatedProperty(
        CViewBox *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    CResource::NotifyOnChanged((__int64)this, 0, (__int64)this);
  }
  return 0LL;
}
