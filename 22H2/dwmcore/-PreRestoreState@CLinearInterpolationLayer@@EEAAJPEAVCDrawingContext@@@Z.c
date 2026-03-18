/*
 * XREFs of ?PreRestoreState@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F49D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18001ACC0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CLinearInterpolationLayer::PreRestoreState(
        CLinearInterpolationLayer *this,
        struct CDrawingContext *a2)
{
  CDrawingContext::PopRenderOptionsInternal(a2, 0);
  return 0LL;
}
