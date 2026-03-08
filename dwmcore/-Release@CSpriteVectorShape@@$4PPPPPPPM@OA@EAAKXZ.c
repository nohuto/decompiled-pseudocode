/*
 * XREFs of ?Release@CSpriteVectorShape@@$4PPPPPPPM@OA@EAAKXZ @ 0x180118E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSpriteVectorShape::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 224));
}
