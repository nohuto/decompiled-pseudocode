/*
 * XREFs of ?Release@CCachedVisualImage@@$4PPPPPPPM@HAA@EAAKXZ @ 0x180118CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCachedVisualImage::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 1792));
}
