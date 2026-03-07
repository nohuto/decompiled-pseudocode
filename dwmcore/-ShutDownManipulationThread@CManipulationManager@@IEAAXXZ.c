void __fastcall CManipulationManager::ShutDownManipulationThread(CManipulationManager *this)
{
  __int64 v2; // rax
  void *v3; // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 656LL));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 168LL))(v2, *((_QWORD *)this + 7));
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 160LL))(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 4),
    1LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 240LL))(*((_QWORD *)this + 3));
  v3 = (void *)*((_QWORD *)this + 18);
  *((_BYTE *)this + 152) = 1;
  if ( v3 )
  {
    WaitForSingleObject(v3, 0xFFFFFFFF);
    CManipulationManager::ClearWaitHandles();
    CloseHandle(*((HANDLE *)this + 18));
    *((_QWORD *)this + 18) = 0LL;
    _InterlockedExchange(&CManipulationManager::s_bManipThreadInitialized, 0);
  }
  CManipulationManager::ReleasePendingReferences(this);
}
