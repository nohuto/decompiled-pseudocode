char __fastcall CBlurredBackdropCache::InvalidateCachedBlur(
        const struct CBackdropVisualImage ***this,
        const struct CBackdropVisualImage *a2,
        const struct RenderTargetInfo *a3)
{
  const struct CBackdropVisualImage **v3; // rbx
  char v7; // si
  __int64 v8; // rbx

  v3 = *this;
  v7 = 1;
  while ( v3 != this[1] )
  {
    if ( *v3 != a2 )
      goto LABEL_7;
    if ( CanRenderToTargetFromSource((const struct RenderTargetInfo *)(v3 + 1), a3) )
    {
      v8 = 0xF0F0F0F0F0F0F0F1uLL * (v3 - *this);
      detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)this,
        v8,
        1LL);
      v3 = &(*this)[17 * v8];
    }
    else
    {
      v7 = 0;
LABEL_7:
      v3 += 17;
    }
  }
  return v7;
}
