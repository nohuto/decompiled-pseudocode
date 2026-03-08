/*
 * XREFs of ?Release@CClipBrush@@$4PPPPPPPM@HI@EAAKXZ @ 0x180118F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CClipBrush::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 120));
}
