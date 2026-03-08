/*
 * XREFs of imp_VfWdfSpinLockCreate @ 0x1C00B70A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfSpinLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *SpinLockAttributes,
        WDFSPINLOCK__ **SpinLock)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_OBJECT_ATTRIBUTES *, WDFSPINLOCK__ **))WdfVersion.Functions.pfnWdfSpinLockCreate)(
           DriverGlobals,
           SpinLockAttributes,
           SpinLock);
}
