/*
 * XREFs of imp_VfWdfSpinLockAcquire @ 0x1C00C3080
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfSpinLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFSPINLOCK__ *SpinLock)
{
  WdfVersion.Functions.pfnWdfSpinLockAcquire(DriverGlobals, SpinLock);
}
