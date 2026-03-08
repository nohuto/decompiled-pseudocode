/*
 * XREFs of ?Release@CContent@@$4PPPPPPPM@BCI@EAAKXZ @ 0x18011A2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CContent::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 296));
}
