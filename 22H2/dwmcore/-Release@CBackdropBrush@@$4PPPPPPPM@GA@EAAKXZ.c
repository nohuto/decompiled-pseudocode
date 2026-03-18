/*
 * XREFs of ?Release@CBackdropBrush@@$4PPPPPPPM@GA@EAAKXZ @ 0x18011CE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBackdropBrush::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 96));
}
