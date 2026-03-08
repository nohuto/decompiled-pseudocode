/*
 * XREFs of ?Release@CHolographicManager@@W7EAAKXZ @ 0x180117890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHolographicManager::Release(__int64 a1)
{
  return CManipulationContext::Release((CManipulationContext *)(a1 - 8));
}
