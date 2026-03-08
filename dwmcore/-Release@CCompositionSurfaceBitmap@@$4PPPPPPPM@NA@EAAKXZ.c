/*
 * XREFs of ?Release@CCompositionSurfaceBitmap@@$4PPPPPPPM@NA@EAAKXZ @ 0x180118D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompositionSurfaceBitmap::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 208));
}
