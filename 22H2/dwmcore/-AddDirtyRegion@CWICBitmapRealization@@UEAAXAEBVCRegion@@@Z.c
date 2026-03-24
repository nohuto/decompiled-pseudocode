/*
 * XREFs of ?AddDirtyRegion@CWICBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180263210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWICBitmapRealization::AddDirtyRegion(
        CWICBitmapRealization *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  CD2DBitmapCache::AddInvalidRegion((CWICBitmapRealization *)((char *)this - 80), a2);
}
