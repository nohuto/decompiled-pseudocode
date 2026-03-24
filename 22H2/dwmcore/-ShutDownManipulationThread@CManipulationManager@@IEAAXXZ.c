/*
 * XREFs of ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x1802272CC
 * Callers:
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x180221220 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?ClearWaitHandles@CManipulationManager@@KAXXZ @ 0x1802247F0 (-ClearWaitHandles@CManipulationManager@@KAXXZ.c)
 */

void __fastcall CManipulationManager::ShutDownManipulationThread(CManipulationManager *this)
{
  __int64 v2; // rax
  void *v3; // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 504LL) + 88LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 504LL));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 160LL))(v2, *((_QWORD *)this + 7));
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 152LL))(
    *((_QWORD *)this + 3),
    *((_QWORD *)this + 4),
    1LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 224LL))(*((_QWORD *)this + 3));
  v3 = (void *)*((_QWORD *)this + 21);
  *((_BYTE *)this + 176) = 1;
  if ( v3 )
  {
    WaitForSingleObject(v3, 0xFFFFFFFF);
    CManipulationManager::ClearWaitHandles();
    CloseHandle(*((HANDLE *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    _InterlockedExchange(&CManipulationManager::s_bManipThreadInitialized, 0);
  }
}
