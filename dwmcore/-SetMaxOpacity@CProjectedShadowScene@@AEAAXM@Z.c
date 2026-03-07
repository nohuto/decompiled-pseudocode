void __fastcall CProjectedShadowScene::SetMaxOpacity(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm1_4
  float v4; // xmm0_4

  v3 = fmaxf(0.0, a2);
  v4 = fminf(1.0, v3);
  if ( *((float *)this + 31) != v4 )
  {
    *((float *)this + 31) = v4;
    CResource::InvalidateAnimationSources(this, 4u);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
