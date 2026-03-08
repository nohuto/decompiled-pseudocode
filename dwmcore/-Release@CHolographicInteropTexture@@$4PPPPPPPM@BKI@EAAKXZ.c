/*
 * XREFs of ?Release@CHolographicInteropTexture@@$4PPPPPPPM@BKI@EAAKXZ @ 0x18011D6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicInteropTexture::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 424));
}
