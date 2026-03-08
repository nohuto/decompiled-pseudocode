/*
 * XREFs of IovUtilGetLowerDeviceObjectWithTag @ 0x140ACFA64
 * Callers:
 *     IovpCallDriver1 @ 0x140AC9170 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140AC96CC (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x140ACF214 (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE4140 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

void *__fastcall IovUtilGetLowerDeviceObjectWithTag(__int64 a1)
{
  KIRQL v2; // di
  void *v3; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *(void **)(*(_QWORD *)(a1 + 312) + 48LL);
  if ( v3 )
    ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
