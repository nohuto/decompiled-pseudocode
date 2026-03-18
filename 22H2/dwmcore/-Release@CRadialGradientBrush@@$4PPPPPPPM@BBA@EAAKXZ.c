/*
 * XREFs of ?Release@CRadialGradientBrush@@$4PPPPPPPM@BBA@EAAKXZ @ 0x18011D0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRadialGradientBrush::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 272));
}
