void __fastcall CBackdropVisualImage::RegisterBlurCache(CBackdropVisualImage *this, struct CBlurredBackdropCache *a2)
{
  _DWORD *v2; // rsi
  __int64 v4; // rdi
  struct CBlurredBackdropCache **i; // rbx
  __int64 v6; // rbx
  __int64 v7; // rax

  v2 = (_DWORD *)((char *)this + 1904);
  v4 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::last((char *)this + 1904);
  for ( i = (struct CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(v2);
        i != (struct CBlurredBackdropCache **)v4 && *i != a2;
        ++i )
  {
    ;
  }
  if ( i == (struct CBlurredBackdropCache **)detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(v2) )
  {
    v6 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(v2);
    v7 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(v2);
    *(_QWORD *)detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::reserve_region(
                 v2,
                 (v6 - v7) >> 3) = a2;
    detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(v2);
  }
}
