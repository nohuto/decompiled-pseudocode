void __fastcall CProjectedShadowScene::SetOpacityFalloff(CProjectedShadowScene *this, float a2)
{
  if ( *((float *)this + 33) != a2 )
  {
    *((float *)this + 33) = a2;
    CResource::InvalidateAnimationSources(this, 7u);
    CProjectedShadowScene::RequestRedrawAll(this);
  }
}
