/*
 * XREFs of PoRequestPowerIrp @ 0x140370550
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestPowerIrp @ 0x140370580 (PopRequestPowerIrp.c)
 */

NTSTATUS __stdcall PoRequestPowerIrp(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        PIRP *Irp)
{
  return PopRequestPowerIrp((_DWORD)DeviceObject, (__int64)Context, 0, (PIRP)Irp);
}
