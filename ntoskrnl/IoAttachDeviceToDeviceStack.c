/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x1402F3E00
 * Callers:
 *     HalpAddDevice @ 0x140802640 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x140ADC20C (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402F3E44 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return (PDEVICE_OBJECT)IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, 0LL);
}
