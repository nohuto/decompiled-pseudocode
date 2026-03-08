/*
 * XREFs of PoCallDriver @ 0x140302260
 * Callers:
 *     ViFilterDispatchPower @ 0x140ADC7D0 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
