__int64 *CQueue<CManipulationManager::InteractionUpdate *>::CQueue<CManipulationManager::InteractionUpdate *>()
{
  dword_1803E2F50 = 0;
  qword_1803E2F48 = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  CManipulationManager::s_InteractionUpdateQueue = (__int64)&CManipulationManager::s_InteractionUpdateQueue;
  byte_1803E2F54 = 0;
  InitializeCriticalSection(&CriticalSection);
  return &CManipulationManager::s_InteractionUpdateQueue;
}
