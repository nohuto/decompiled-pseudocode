/*
 * XREFs of IovUtilGetBottomDeviceObjectWithTag @ 0x140ACFA00
 * Callers:
 *     IovpCallDriver1 @ 0x140AC9170 (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x140ACFCB0 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE4140 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE4430 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
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
