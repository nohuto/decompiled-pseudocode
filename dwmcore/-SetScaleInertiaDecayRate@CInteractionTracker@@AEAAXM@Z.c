void __fastcall CInteractionTracker::SetScaleInertiaDecayRate(CInteractionTracker *this, float a2)
{
  float v2; // xmm2_4

  v2 = fminf(1.0, fmaxf(1.0 - a2, 0.0));
  if ( *((float *)this + 43) != v2 )
    *((float *)this + 43) = v2;
  CResource::InvalidateAnimationSources(this, 64);
}
