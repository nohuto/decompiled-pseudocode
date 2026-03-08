/*
 * XREFs of ?AddRef@CHolographicFrameProcessor@@W7EAAKXZ @ 0x18011D750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicFrameProcessor::AddRef(__int64 a1)
{
  return CManipulationContext::AddRef((CManipulationContext *)(a1 - 8));
}
