/*
 * XREFs of IoAttachDeviceToDeviceStackSafe @ 0x1402F3E20
 * Callers:
 *     IoAttachDevice @ 0x140943C90 (IoAttachDevice.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402F3E44 (IopAttachDeviceToDeviceStackSafe.c)
 */

NTSTATUS __stdcall IoAttachDeviceToDeviceStackSafe(
        PDEVICE_OBJECT SourceDevice,
        PDEVICE_OBJECT TargetDevice,
        PDEVICE_OBJECT *AttachedToDeviceObject)
{
  return IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, AttachedToDeviceObject) == 0 ? 0xC000000E : 0;
}
