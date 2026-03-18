/*
 * XREFs of IovUtilGetBottomDeviceObjectWithTag @ 0x140AD3A00
 * Callers:
 *     IovpCallDriver1 @ 0x140ACD170 (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x140AD3CB0 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE8140 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE8430 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 */

PVOID __fastcall IovUtilGetBottomDeviceObjectWithTag(_QWORD *Object)
{
  KIRQL v2; // si
  PVOID v3; // rdi

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  do
  {
    v3 = Object;
    Object = *(_QWORD **)(Object[39] + 48LL);
  }
  while ( Object );
  ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
