/*
 * XREFs of ?_RunChoreBridge@_TaskProcHandle@details@Concurrency@@SAXPEAX@Z @ 0x180397B70
 * Callers:
 *     ?_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z @ 0x180398074 (-_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_TaskProcHandle::_RunChoreBridge(void *a1)
{
  (*(void (__fastcall **)(void *))(*(_QWORD *)a1 + 8LL))(a1);
  (**(void (__fastcall ***)(void *, __int64))a1)(a1, 1LL);
}
