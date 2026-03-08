/*
 * XREFs of ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180030F7C
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x18002DE58 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x180030E28 (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEBA_KXZ @ 0x180030EC8 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x180030F00 (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z.c)
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x1800D11C8 (--1CBlurredBackdropCache@@QEAA@XZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180030FB4 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ?size@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ @ 0x180030FF4 (-size@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@AEBA_KXZ.c)
 */

__int64 __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *>::last(__int64 a1)
{
  __int64 v2; // rbx

  v2 = 8 * detail::pointer_buffer_impl<CBlurredBackdropCache *>::size();
  return v2 + detail::pointer_buffer_impl<CBlurredBackdropCache *>::first(a1);
}
