/*
 * XREFs of ?WaitForAllHookedDriversToDeregister@MINIPORT_HOOK_DRIVER@@AEAAXXZ @ 0x1C0127358
 * Callers:
 *     ?Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ @ 0x1C01271A8 (-Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MINIPORT_HOOK_DRIVER::WaitForAllHookedDriversToDeregister(struct _EX_RUNDOWN_REF *this)
{
  ExWaitForRundownProtectionRelease(this + 1);
}
