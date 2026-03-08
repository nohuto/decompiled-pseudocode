/*
 * XREFs of wil::details::lambda_call__lambda_347d3ebbea5fda7dd84efb17ad2ffc68___::_lambda_call__lambda_347d3ebbea5fda7dd84efb17ad2ffc68___ @ 0x1802B54B8
 * Callers:
 *     ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802B56B0 (-DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18001C268 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_347d3ebbea5fda7dd84efb17ad2ffc68___::_lambda_call__lambda_347d3ebbea5fda7dd84efb17ad2ffc68___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CDrawingContext::PopGpuClipRectInternal(*(CDrawingContext **)a1, 0);
  }
}
