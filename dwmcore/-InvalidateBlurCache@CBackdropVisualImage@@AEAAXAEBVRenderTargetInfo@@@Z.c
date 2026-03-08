/*
 * XREFs of ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x180030F00
 * Callers:
 *     ?OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x180031030 (-OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 *     ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x1800FCA50 (-InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ.c)
 * Callees:
 *     ?erase@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@@Z @ 0x18002DD30 (-erase@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCac.c)
 *     ?last@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180030F7C (-last@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x180030FB4 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@@detail@@QEBAPEAPEAVCBlurredBackdropCach.c)
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@@Z @ 0x1800398E8 (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInf.c)
 */

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
