/*
 * XREFs of ACPIBusIrpSetSystemPowerComplete @ 0x1C0009A00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C001D680 (ACPIDeviceIrpCompleteRequest.c)
 */

void __fastcall ACPIBusIrpSetSystemPowerComplete(
        ULONG_PTR DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 DeviceExtension; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(DeviceObject);
  Context[7] = 0LL;
  ACPIDeviceIrpCompleteRequest(DeviceExtension, Context, (unsigned int)IoStatus->Status);
}
