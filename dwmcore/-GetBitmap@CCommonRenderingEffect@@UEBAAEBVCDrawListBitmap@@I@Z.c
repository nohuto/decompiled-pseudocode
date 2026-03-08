/*
 * XREFs of ?GetBitmap@CCommonRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z @ 0x1801062D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct CDrawListBitmap *__fastcall CCommonRenderingEffect::GetBitmap(
        CCommonRenderingEffect *this,
        unsigned int a2)
{
  return (CCommonRenderingEffect *)((char *)this + 24 * a2 + 16);
}
