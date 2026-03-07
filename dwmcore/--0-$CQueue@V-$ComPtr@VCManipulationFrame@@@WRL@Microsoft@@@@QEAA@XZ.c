__int64 *CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>()
{
  dword_1803E2F90 = 0;
  qword_1803E2F88 = (__int64)&CManipulationManager::s_InputQueue;
  CManipulationManager::s_InputQueue = (__int64)&CManipulationManager::s_InputQueue;
  byte_1803E2F94 = 0;
  InitializeCriticalSection(&stru_1803E2F98);
  return &CManipulationManager::s_InputQueue;
}
