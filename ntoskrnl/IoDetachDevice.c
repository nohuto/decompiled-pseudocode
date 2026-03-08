/*
 * XREFs of IoDetachDevice @ 0x1402F0C40
 * Callers:
 *     DifIoDetachDeviceWrapper @ 0x1405DCAD0 (DifIoDetachDeviceWrapper.c)
 *     ViFilterDispatchPnp @ 0x140ADC600 (ViFilterDispatchPnp.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     IovDetachDevice @ 0x140ABE6AC (IovDetachDevice.c)
 */

void __stdcall IoDetachDevice(PDEVICE_OBJECT TargetDevice)
{
  KIRQL v2; // di
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovDetachDevice(TargetDevice, retaddr);
  TargetDevice->AttachedDevice->DeviceObjectExtension->AttachedTo = 0LL;
  DeviceObjectExtension = TargetDevice->DeviceObjectExtension;
  TargetDevice->AttachedDevice = 0LL;
  if ( (DeviceObjectExtension->ExtensionFlags & 7) == 0 || TargetDevice->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v2);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)TargetDevice);
}
