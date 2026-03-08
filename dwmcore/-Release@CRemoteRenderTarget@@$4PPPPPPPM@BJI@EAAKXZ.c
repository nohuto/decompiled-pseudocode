/*
 * XREFs of ?Release@CRemoteRenderTarget@@$4PPPPPPPM@BJI@EAAKXZ @ 0x180118F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRemoteRenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 408));
}
