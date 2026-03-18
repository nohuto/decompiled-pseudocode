/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x14035F280
 * Callers:
 *     HalpAddDevice @ 0x140836770 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x140AE020C (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14035F2C4 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return (PDEVICE_OBJECT)IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, 0LL);
}
