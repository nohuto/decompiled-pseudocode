void __fastcall CGlobalManipulationManager::~CGlobalManipulationManager(CGlobalManipulationManager *this)
{
  *(_QWORD *)this = &CGlobalManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  CMmcssTask::UnloadRuntime((CGlobalManipulationManager *)((char *)this + 312));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 312));
  CManipulationManager::~CManipulationManager(this);
}
