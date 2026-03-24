/*
 * XREFs of ?ScheduleDeferredWorkOnRenderThread@CManipulationManager@@QEAAJP6AJPEAX@Z0W4MsgPriority@@@Z @ 0x180227050
 * Callers:
 *     ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x1801D52D0 (-_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::ScheduleDeferredWorkOnRenderThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 504LL) + 88LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 504LL));
  return (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(char *), __int64, __int64))(*(_QWORD *)v4 + 144LL))(
           v4,
           CManipulation::s_ResetDeltaProperties,
           a3,
           4LL);
}
