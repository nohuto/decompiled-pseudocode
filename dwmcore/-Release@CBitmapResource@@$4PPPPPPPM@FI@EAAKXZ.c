/*
 * XREFs of ?Release@CBitmapResource@@$4PPPPPPPM@FI@EAAKXZ @ 0x180118CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapResource::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 88));
}
