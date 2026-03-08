/*
 * XREFs of ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@@Z @ 0x1800398E8
 * Callers:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x180030F00 (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ?CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z @ 0x1800336F0 (-CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z.c)
 *     ?clear_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180039864 (-clear_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CBlu.c)
 */

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
