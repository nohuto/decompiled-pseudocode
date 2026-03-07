__int64 __fastcall CVisualSurface::SetSourceSize(
        CVisualSurface *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  float *v3; // rsi
  unsigned int v4; // edi
  char v7; // bp
  char v8; // r14

  v3 = (float *)((char *)this + 92);
  v4 = 0;
  v7 = 1;
  if ( *((float *)this + 22) <= 0.0 || (v8 = 1, *v3 <= 0.0) )
    v8 = 0;
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    if ( !*((_BYTE *)this + 200) )
      CVisualSurface::ClearAllRenderTargets(this);
    if ( *((float *)this + 22) <= 0.0 || *v3 <= 0.0 )
      v7 = 0;
    if ( v8 == v7 )
      v4 = 6;
    CResource::NotifyOnChanged(this, v4, 0LL);
  }
  return 0LL;
}
