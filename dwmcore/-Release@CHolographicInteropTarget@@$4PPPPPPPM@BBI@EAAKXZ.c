/*
 * XREFs of ?Release@CHolographicInteropTarget@@$4PPPPPPPM@BBI@EAAKXZ @ 0x180119D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicInteropTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 280));
}
