/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x140380A40
 * Callers:
 *     HalpAddDevice @ 0x1407AE8F0 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x1409E4F04 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14034C324 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
