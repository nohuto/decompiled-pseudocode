__int64 *__fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::erase(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 *result; // rax

  v3 = *a3;
  v6 = (v3 - ((__int64 (*)(void))detail::pointer_buffer_impl<CBlurredBackdropCache *>::first)()) >> 3;
  detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *>>::clear_region(
    a1,
    v6,
    1LL);
  v7 = detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1) + 8 * v6;
  result = a2;
  *a2 = v7;
  return result;
}
