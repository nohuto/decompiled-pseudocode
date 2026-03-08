/*
 * XREFs of _dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__ @ 0x1801200C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall dynamic_atexit_destructor_for__CManipulationManager::s_InputQueue__(__int64 a1, __int64 a2, __int64 a3)
{
  CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::~CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>(
    (__int64)&CManipulationManager::s_InputQueue,
    a2,
    a3);
}
