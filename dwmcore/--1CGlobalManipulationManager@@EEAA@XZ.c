/*
 * XREFs of ??1CGlobalManipulationManager@@EEAA@XZ @ 0x18027FD98
 * Callers:
 *     ??_ECGlobalManipulationManager@@EEAAPEAXI@Z @ 0x18027FFF0 (--_ECGlobalManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x18019E1EC (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801B2538 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

void __fastcall CGlobalManipulationManager::~CGlobalManipulationManager(CGlobalManipulationManager *this)
{
  *(_QWORD *)this = &CGlobalManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  CMmcssTask::UnloadRuntime((CGlobalManipulationManager *)((char *)this + 312));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 312));
  CManipulationManager::~CManipulationManager(this);
}
