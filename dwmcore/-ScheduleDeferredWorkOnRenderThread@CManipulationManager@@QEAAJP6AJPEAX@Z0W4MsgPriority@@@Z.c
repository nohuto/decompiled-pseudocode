/*
 * XREFs of ?ScheduleDeferredWorkOnRenderThread@CManipulationManager@@QEAAJP6AJPEAX@Z0W4MsgPriority@@@Z @ 0x18019DF2C
 * Callers:
 *     ?_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z @ 0x18020BBC8 (-_EnqueueDeferredDeltaReset@CManipulation@@AEAAJI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::ScheduleDeferredWorkOnRenderThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 656LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 656LL));
  return (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), __int64, __int64))(*(_QWORD *)v4 + 152LL))(
           v4,
           CManipulation::s_ResetDeltaProperties,
           a3,
           4LL);
}
