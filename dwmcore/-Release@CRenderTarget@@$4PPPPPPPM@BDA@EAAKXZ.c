/*
 * XREFs of ?Release@CRenderTarget@@$4PPPPPPPM@BDA@EAAKXZ @ 0x180119610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 304));
}
