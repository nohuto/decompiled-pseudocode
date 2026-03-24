/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x1403616F0
 * Callers:
 *     PopAllocateIrp @ 0x1403707A0 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x14071D3C0 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x140730018 (PiControlGetDeviceStack.c)
 *     PipCallDriverAddDevice @ 0x14073DE28 (PipCallDriverAddDevice.c)
 *     PnpQueryInterface @ 0x1407653A4 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x14076872C (PnpAsynchronousCall.c)
 *     PopFxRegisterDevice @ 0x1407B517C (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x1408B2A10 (IopEjectDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140291250 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402912F0 (KeAcquireQueuedSpinLock.c)
 *     IoGetAttachedDevice @ 0x1402D3EF0 (IoGetAttachedDevice.c)
 */

PDEVICE_OBJECT __fastcall IoGetAttachedDeviceReferenceWithTag(PDEVICE_OBJECT DeviceObject, ULONG Tag)
{
  KIRQL v4; // di
  PDEVICE_OBJECT AttachedDevice; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  AttachedDevice = IoGetAttachedDevice(DeviceObject);
  ObfReferenceObjectWithTag(AttachedDevice, Tag);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return AttachedDevice;
}
