/*
 * XREFs of ?Release@CEffectBrush@@$4PPPPPPPM@LI@EAAKXZ @ 0x180119DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CEffectBrush::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 184));
}
