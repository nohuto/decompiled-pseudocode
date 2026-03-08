/*
 * XREFs of ?s_ThreadMain@CManipulationManager@@KAKPEAX@Z @ 0x180104120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::s_ThreadMain(PVOID Parameter)
{
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Parameter + 64LL))(Parameter);
  return 0LL;
}
