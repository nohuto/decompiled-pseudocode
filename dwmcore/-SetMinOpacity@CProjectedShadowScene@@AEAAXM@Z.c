void __fastcall CProjectedShadowScene::SetMinOpacity(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm1_4
  float v4; // xmm0_4

  v3 = fmaxf(0.0, a2);
  v4 = fminf(1.0, v3);
  if ( *((float *)this + 32) != v4 )
  {
    *((float *)this + 32) = v4;
    CResource::InvalidateAnimationSources(this, 6u);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
