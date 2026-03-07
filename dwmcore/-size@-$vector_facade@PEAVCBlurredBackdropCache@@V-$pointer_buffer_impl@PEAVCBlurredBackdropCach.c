__int64 __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::size(
        __int64 a1)
{
  __int64 v2; // rbx

  v2 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
  return (detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(a1) - v2) >> 3;
}
