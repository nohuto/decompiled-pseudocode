void __fastcall CProjectedShadowScene::SetMinBlurRadius(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(0.0, a2);
  if ( *((float *)this + 29) != v3 )
  {
    *((float *)this + 29) = v3;
    CResource::InvalidateAnimationSources(this, 5);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
