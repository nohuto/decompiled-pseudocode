/*
 * XREFs of ??0?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x180104858
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x180001300 (_dynamic_initializer_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 * Callees:
 *     <none>
 */

__int64 *CQueue<CManipulationManager::InteractionUpdate *>::CQueue<CManipulationManager::InteractionUpdate *>()
{
  dword_1803E61D0 = 0;
  qword_1803E61C8 = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  CManipulationManager::s_InteractionUpdateQueue = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  byte_1803E61D4 = 0;
  InitializeCriticalSection(&CriticalSection);
  return &CManipulationManager::s_InteractionUpdateQueue;
}
