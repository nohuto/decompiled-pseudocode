/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@WGA@EAAKXZ @ 0x180118D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompositionSurfaceBitmap::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - 96));
}
