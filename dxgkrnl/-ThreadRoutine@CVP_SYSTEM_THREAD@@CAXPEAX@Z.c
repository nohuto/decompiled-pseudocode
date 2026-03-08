/*
 * XREFs of ?ThreadRoutine@CVP_SYSTEM_THREAD@@CAXPEAX@Z @ 0x1C030AC10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVP_SYSTEM_THREAD::ThreadRoutine(PVOID StartContext)
{
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)StartContext + 8LL))(StartContext);
  (**(void (__fastcall ***)(PVOID, __int64))StartContext)(StartContext, 1LL);
}
