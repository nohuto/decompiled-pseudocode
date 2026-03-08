/*
 * XREFs of imp_VfWdfInterruptQueueWorkItemForIsr @ 0x1C00B4ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfInterruptQueueWorkItemForIsr(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFINTERRUPT__ *))WdfVersion.Functions.pfnWdfInterruptQueueWorkItemForIsr)(
           DriverGlobals,
           Interrupt);
}
