/*
 * XREFs of ?Release@CCachedVisualImage@@$4PPPPPPPM@HNA@EAAKXZ @ 0x180119B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCachedVisualImage::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 2000));
}
