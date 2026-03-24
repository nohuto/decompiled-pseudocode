/*
 * XREFs of ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x1800200D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDrawingContext::DrawVisual(CDrawingContext *this, struct CVisual *a2)
{
  return CDrawingContext::DrawVisual((CDrawingContext *)((char *)this - 16), a2, 0);
}
