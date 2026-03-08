/*
 * XREFs of ?Release@CDDisplayRenderTarget@@$4PPPPPPPM@EIPI@EAAKXZ @ 0x180118D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDisplayRenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 18680));
}
