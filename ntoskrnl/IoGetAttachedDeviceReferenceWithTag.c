/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x140240A5C
 * Callers:
 *     PopAllocateIrp @ 0x1402BA774 (PopAllocateIrp.c)
 *     PnpAsynchronousCall @ 0x1406885F8 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x14069DD78 (IopSynchronousCall.c)
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     PnpQueryInterface @ 0x1407F8C60 (PnpQueryInterface.c)
 *     PopFxRegisterDevice @ 0x140836FBC (PopFxRegisterDevice.c)
 *     PiControlGetDeviceStack @ 0x140852740 (PiControlGetDeviceStack.c)
 *     IopEjectDevice @ 0x140969DA8 (IopEjectDevice.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x140980964 (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
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
