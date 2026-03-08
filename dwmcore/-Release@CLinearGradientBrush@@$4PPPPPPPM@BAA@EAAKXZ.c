/*
 * XREFs of ?Release@CLinearGradientBrush@@$4PPPPPPPM@BAA@EAAKXZ @ 0x180119EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLinearGradientBrush::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 256));
}
