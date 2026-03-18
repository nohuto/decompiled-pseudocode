/*
 * XREFs of ?AddRef@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x180121A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicExclusivePresentData::AddRef(__int64 a1)
{
  return CSpectreCallbackRenderer::AddRef((CSpectreCallbackRenderer *)(a1 - 8));
}
