/*
 * XREFs of ?Release@CColorBrush@@$4PPPPPPPM@HA@EAAKXZ @ 0x1801179F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CColorBrush::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 112));
}
