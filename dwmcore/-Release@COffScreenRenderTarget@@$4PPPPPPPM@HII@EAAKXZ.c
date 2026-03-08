/*
 * XREFs of ?Release@COffScreenRenderTarget@@$4PPPPPPPM@HII@EAAKXZ @ 0x18011A430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall COffScreenRenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 1928));
}
