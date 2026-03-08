/*
 * XREFs of ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x180076110
 * Callers:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800748A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D31F4 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x180076160 (-ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushAllDeferredClipping(CDrawingContext *this)
{
  unsigned int v2; // ecx
  int v3; // edi

  v3 = CScopedClipStack::ApplyDeferredD2DLayersInScope((CDrawingContext *)((char *)this + 896), this);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v3, 0x1090u, 0LL);
  }
  else if ( *((_BYTE *)this + 8170) )
  {
    *(_WORD *)((char *)this + 8169) = 1;
  }
  return (unsigned int)v3;
}
