/*
 * XREFs of ?RegisterRootVisualAsNotifier@CCachedVisualImage@@MEAAJXZ @ 0x1800FF050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::RegisterRootVisualAsNotifier(struct CResource **this)
{
  return CResource::RegisterNotifier((CResource *)this, this[18]);
}
