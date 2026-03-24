/*
 * XREFs of PoCallDriver @ 0x14039A1F0
 * Callers:
 *     IoCancelFileOpen @ 0x140893670 (IoCancelFileOpen.c)
 *     ViFilterDispatchPower @ 0x1409E54E0 (ViFilterDispatchPower.c)
 * Callees:
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 */

NTSTATUS __stdcall PoCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  return IofCallDriver(DeviceObject, Irp);
}
