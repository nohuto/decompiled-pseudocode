/*
 * XREFs of ??0?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x180103D0C
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x1800011E0 (_dynamic_initializer_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     <none>
 */

__int64 *CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>()
{
  dword_1803E2F90 = 0;
  qword_1803E2F88 = (__int64)&CManipulationManager::s_InputQueue;
  CManipulationManager::s_InputQueue = (__int64)&CManipulationManager::s_InputQueue;
  byte_1803E2F94 = 0;
  InitializeCriticalSection(&stru_1803E2F98);
  return &CManipulationManager::s_InputQueue;
}
