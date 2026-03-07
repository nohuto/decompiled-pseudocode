__int64 __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(__int64 a1)
{
  __int64 v2; // rbx

  v2 = 8 * detail::pointer_buffer_impl<CBlurredBackdropCache *>::size();
  return v2 + detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
}
