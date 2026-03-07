void __fastcall CBackdropVisualImage::InvalidateBlurCache(
        CBackdropVisualImage *this,
        const struct RenderTargetInfo *a2)
{
  char *v2; // rdi
  CBlurredBackdropCache **v5; // rbx
  CBlurredBackdropCache **v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = (char *)this + 1904;
  v5 = (CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::first((char *)this + 1904);
  while ( v5 != (CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(v2) )
  {
    if ( CBlurredBackdropCache::InvalidateCachedBlur(*v5, this, a2) )
    {
      v6 = v5;
      v5 = (CBlurredBackdropCache **)*detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::erase(
                                        (__int64)v2,
                                        &v7,
                                        (__int64 *)&v6);
    }
    else
    {
      ++v5;
    }
  }
}
