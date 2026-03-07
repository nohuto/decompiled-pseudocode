void __fastcall CKeyframeAnimation::SetProgress(CKeyframeAnimation *this, float a2)
{
  if ( *((float *)this + 133) != a2 )
  {
    *((_BYTE *)this + 580) |= 4u;
    *((float *)this + 133) = fminf(1.0, fmaxf(a2, 0.0));
    CResource::InvalidateAnimationSources(this, 33);
  }
}
