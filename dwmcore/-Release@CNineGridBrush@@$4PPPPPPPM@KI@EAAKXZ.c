/*
 * XREFs of ?Release@CNineGridBrush@@$4PPPPPPPM@KI@EAAKXZ @ 0x18011A010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CNineGridBrush::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 168));
}
