/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x140302C00
 * Callers:
 *     PopAllocateIrp @ 0x14028F314 (PopAllocateIrp.c)
 *     PipCallDriverAddDevice @ 0x1406C82E4 (PipCallDriverAddDevice.c)
 *     IopSynchronousCall @ 0x1407688B4 (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x1407954A4 (PnpAsynchronousCall.c)
 *     PnpQueryInterface @ 0x1407FD8F0 (PnpQueryInterface.c)
 *     PopFxRegisterDevice @ 0x14083806C (PopFxRegisterDevice.c)
 *     PiControlGetDeviceStack @ 0x140856970 (PiControlGetDeviceStack.c)
 *     IopEjectDevice @ 0x14096CDC8 (IopEjectDevice.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x140983A14 (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 */

_QWORD *__fastcall IoGetAttachedDeviceReferenceWithTag(_QWORD *Object, ULONG Tag)
{
  KIRQL v4; // al
  _QWORD *v5; // r8
  KIRQL v6; // si

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = (_QWORD *)Object[3];
  v6 = v4;
  while ( v5 )
  {
    Object = v5;
    v5 = (_QWORD *)v5[3];
  }
  ObfReferenceObjectWithTag(Object, Tag);
  KeReleaseQueuedSpinLock(0xAuLL, v6);
  return Object;
}
