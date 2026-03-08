/*
 * XREFs of ?GetBitmap@CBrushRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z @ 0x1801086A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct CDrawListBitmap *__fastcall CBrushRenderingEffect::GetBitmap(CBrushRenderingEffect *this, unsigned int a2)
{
  return (CBrushRenderingEffect *)((char *)this + 24 * a2 + 24);
}
