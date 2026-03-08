/*
 * XREFs of ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x18002DD30
 * Callers:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x180030F00 (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z.c)
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x1800D11C8 (--1CBlurredBackdropCache@@QEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002DD90 (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180030FB4 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 */

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
